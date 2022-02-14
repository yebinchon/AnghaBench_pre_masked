
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ block_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct smsdvb_client_t {int has_tuned; int fe_status; scalar_t__ last_per; int stats_done; int coredev; int tune_done; int demux; int feed_users; struct dvb_frontend frontend; } ;
struct smscore_buffer_t {int offset; int size; scalar_t__ p; } ;
struct sms_msg_hdr {int msg_type; } ;
struct TYPE_3__ {scalar_t__ uvalue; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smsdvb_client_t*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct smscore_buffer_t*) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct smsdvb_client_t*,void*) ;
 int FUNC_8 (struct smsdvb_client_t*,void*) ;
 int FUNC_9 (struct smsdvb_client_t*,void*) ;
 int FUNC_10 (struct smsdvb_client_t*,void*) ;
 int FUNC_11 (struct smsdvb_client_t*,void*) ;

__attribute__((used)) static int FUNC_12(void *VAR_9, struct smscore_buffer_t *VAR_10)
{
 struct smsdvb_client_t *VAR_11 = (struct smsdvb_client_t *) VAR_9;
 struct sms_msg_hdr *VAR_12 = (struct sms_msg_hdr *) (((u8 *) VAR_10->p)
   + VAR_10->offset);
 void *VAR_13 = VAR_12 + 1;
 struct dvb_frontend *VAR_14 = &VAR_11->frontend;
 struct dtv_frontend_properties *VAR_15 = &VAR_14->dtv_property_cache;
 bool VAR_16 = 0;

 switch (VAR_12->msg_type) {
 case 136:




  if (VAR_11->feed_users && VAR_11->has_tuned)
   FUNC_1(&VAR_11->demux, VAR_13,
      VAR_10->size - sizeof(struct sms_msg_hdr));
  break;

 case 130:
 case 132:
  FUNC_0(&VAR_11->tune_done);
  break;

 case 129:
  VAR_11->fe_status = VAR_6 | VAR_4 |
        VAR_8 | VAR_7 |
        VAR_5;

  VAR_16 = 1;
  break;

 case 131:
  VAR_11->fe_status = 0;

  VAR_16 = 1;
  break;

 case 128:
  FUNC_11(VAR_11, VAR_13);

  VAR_16 = 1;
  break;

 case 133:
  FUNC_10(VAR_11, VAR_13);

  VAR_16 = 1;
  break;

 case 134:
  switch (FUNC_4(VAR_11->coredev)) {
  case 138:
  case 137:
   FUNC_8(VAR_11, VAR_13);
   break;
  default:

   FUNC_7(VAR_11, VAR_13 + sizeof(u32));
  }

  VAR_16 = 1;
  break;


 case 135:

  FUNC_9(VAR_11, VAR_13 + sizeof(u32));
  VAR_16 = 1;
  break;
 default:
  FUNC_2("message not handled\n");
 }
 FUNC_5(VAR_11->coredev, VAR_10);

 if (VAR_16) {
  if (VAR_11->fe_status & VAR_5) {
   FUNC_3(VAR_11, VAR_0);
   if (VAR_11->last_per == VAR_15->block_error.stat[0].uvalue)
    FUNC_3(VAR_11, VAR_3);
   else
    FUNC_3(VAR_11, VAR_2);
   VAR_11->has_tuned = 1;
  } else {
   FUNC_6(VAR_14);
   VAR_11->has_tuned = 0;
   FUNC_3(VAR_11, VAR_1);
  }
  FUNC_0(&VAR_11->stats_done);
 }

 return 0;
}
