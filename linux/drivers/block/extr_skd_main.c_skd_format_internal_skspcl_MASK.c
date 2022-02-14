
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int n_sg; int sksg_dma_address; struct fit_sg_descriptor* sksg_list; } ;
struct skd_special_context {int db_dma_address; TYPE_3__ req; TYPE_1__* msg_buf; } ;
struct TYPE_5__ {int sg_list_dma_address; } ;
struct skd_scsi_request {TYPE_2__ hdr; } ;
struct skd_device {struct skd_special_context internal_skspcl; } ;
struct fit_sg_descriptor {long long next_desc_ptr; scalar_t__ dev_side_addr; int host_side_addr; scalar_t__ byte_count; int control; } ;
struct fit_msg_hdr {int num_protocol_cmds_coalesced; int protocol_id; } ;
struct TYPE_4__ {struct skd_scsi_request* scsi; struct fit_msg_hdr fmh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct skd_scsi_request*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct skd_device *VAR_2)
{
 struct skd_special_context *VAR_3 = &VAR_2->internal_skspcl;
 struct fit_sg_descriptor *VAR_4 = &VAR_3->req.sksg_list[0];
 struct fit_msg_hdr *VAR_5;
 uint64_t VAR_6;
 struct skd_scsi_request *VAR_7;

 VAR_5 = &VAR_3->msg_buf->fmh;
 VAR_5->protocol_id = VAR_0;
 VAR_5->num_protocol_cmds_coalesced = 1;

 VAR_7 = &VAR_3->msg_buf->scsi[0];
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 VAR_6 = VAR_3->req.sksg_dma_address;
 VAR_7->hdr.sg_list_dma_address = FUNC_0(VAR_6);
 VAR_3->req.n_sg = 1;
 VAR_4->control = VAR_1;
 VAR_4->byte_count = 0;
 VAR_4->host_side_addr = VAR_3->db_dma_address;
 VAR_4->dev_side_addr = 0;
 VAR_4->next_desc_ptr = 0LL;

 return 1;
}
