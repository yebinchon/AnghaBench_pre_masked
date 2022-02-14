
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int context; int (* sendrequest_handler ) (int ,struct sms_msg_data*,int) ;int board_id; } ;
struct TYPE_2__ {int msg_length; int msg_type; scalar_t__ msg_flags; int msg_dst_id; scalar_t__ msg_src_id; } ;
struct sms_msg_data {scalar_t__* msg_data; TYPE_1__ x_msg_header; } ;
struct sms_board {scalar_t__ crystal; scalar_t__ mtu; } ;
typedef int mtu_msg ;
typedef int crys_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 struct sms_board* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sms_msg_data*,int) ;
 int FUNC_5 (int ,struct sms_msg_data*,int) ;

__attribute__((used)) static int FUNC_6(struct smscore_device_t *VAR_4)
{
 struct sms_board *VAR_5;

 VAR_5 = FUNC_3(VAR_4->board_id);
 if (!VAR_5) {
  FUNC_2("no board configuration exist.\n");
  return -VAR_0;
 }

 if (VAR_5->mtu) {
  struct sms_msg_data VAR_6;
  FUNC_1("set max transmit unit %d\n", VAR_5->mtu);

  VAR_6.x_msg_header.msg_src_id = 0;
  VAR_6.x_msg_header.msg_dst_id = VAR_1;
  VAR_6.x_msg_header.msg_flags = 0;
  VAR_6.x_msg_header.msg_type = VAR_3;
  VAR_6.x_msg_header.msg_length = sizeof(VAR_6);
  VAR_6.msg_data[0] = VAR_5->mtu;

  VAR_4->sendrequest_handler(VAR_4->context, &VAR_6,
          sizeof(VAR_6));
 }

 if (VAR_5->crystal) {
  struct sms_msg_data VAR_7;
  FUNC_1("set crystal value %d\n", VAR_5->crystal);

  FUNC_0(&VAR_7.x_msg_header,
    VAR_2,
    sizeof(VAR_7));
  VAR_7.msg_data[0] = VAR_5->crystal;

  VAR_4->sendrequest_handler(VAR_4->context, &VAR_7,
          sizeof(VAR_7));
 }

 return 0;
}
