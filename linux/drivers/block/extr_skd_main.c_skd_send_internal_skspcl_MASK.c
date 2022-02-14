
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ state; int id; struct fit_sg_descriptor* sksg_list; } ;
struct skd_special_context {unsigned char* data_buf; TYPE_2__ req; TYPE_1__* msg_buf; } ;
struct TYPE_6__ {void* sg_list_len_bytes; int tag; } ;
struct skd_scsi_request {int* cdb; TYPE_3__ hdr; } ;
struct skd_device {int dummy; } ;
struct fit_sg_descriptor {int byte_count; } ;
struct TYPE_4__ {struct skd_scsi_request* scsi; } ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct skd_device*,struct skd_special_context*) ;

__attribute__((used)) static void FUNC_4(struct skd_device *VAR_4,
         struct skd_special_context *VAR_5,
         u8 VAR_6)
{
 struct fit_sg_descriptor *VAR_7 = &VAR_5->req.sksg_list[0];
 struct skd_scsi_request *VAR_8;
 unsigned char *VAR_9 = VAR_5->data_buf;
 int VAR_10;

 if (VAR_5->req.state != VAR_2)




  return;

 VAR_5->req.state = VAR_1;

 VAR_8 = &VAR_5->msg_buf->scsi[0];
 VAR_8->hdr.tag = VAR_5->req.id;

 FUNC_2(VAR_8->cdb, 0, sizeof(VAR_8->cdb));

 switch (VAR_6) {
 case 129:
  VAR_8->cdb[0] = 129;
  VAR_7->byte_count = 0;
  VAR_8->hdr.sg_list_len_bytes = 0;
  break;

 case 131:
  VAR_8->cdb[0] = 131;
  VAR_7->byte_count = VAR_0;
  VAR_8->hdr.sg_list_len_bytes = FUNC_1(VAR_7->byte_count);
  break;

 case 133:
  VAR_8->cdb[0] = 133;
  VAR_8->cdb[1] = 0x01;
  VAR_8->cdb[2] = 0x80;
  VAR_8->cdb[4] = 0x10;
  VAR_7->byte_count = 16;
  VAR_8->hdr.sg_list_len_bytes = FUNC_1(VAR_7->byte_count);
  break;

 case 130:
  VAR_8->cdb[0] = 130;
  VAR_7->byte_count = 0;
  VAR_8->hdr.sg_list_len_bytes = 0;
  break;

 case 128:
  VAR_8->cdb[0] = 128;
  VAR_8->cdb[1] = 0x02;
  VAR_8->cdb[7] = (VAR_3 & 0xFF00) >> 8;
  VAR_8->cdb[8] = VAR_3 & 0xFF;
  VAR_7->byte_count = VAR_3;
  VAR_8->hdr.sg_list_len_bytes = FUNC_1(VAR_7->byte_count);

  for (VAR_10 = 0; VAR_10 < VAR_7->byte_count; VAR_10++)
   VAR_9[VAR_10] = VAR_10 & 0xFF;
  break;

 case 132:
  VAR_8->cdb[0] = 132;
  VAR_8->cdb[1] = 0x02;
  VAR_8->cdb[7] = (VAR_3 & 0xFF00) >> 8;
  VAR_8->cdb[8] = VAR_3 & 0xFF;
  VAR_7->byte_count = VAR_3;
  VAR_8->hdr.sg_list_len_bytes = FUNC_1(VAR_7->byte_count);
  FUNC_2(VAR_5->data_buf, 0, VAR_7->byte_count);
  break;

 default:
  FUNC_0("Don't know what to send");
  return;

 }
 FUNC_3(VAR_4, VAR_5);
}
