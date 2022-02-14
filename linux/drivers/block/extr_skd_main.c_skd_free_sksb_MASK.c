
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sksg_dma_address; int * sksg_list; } ;
struct skd_special_context {TYPE_1__ req; scalar_t__ mb_dma_address; int * msg_buf; scalar_t__ db_dma_address; int * data_buf; } ;
struct skd_device {int msgbuf_cache; int databuf_cache; struct skd_special_context internal_skspcl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skd_device*,int ,int *,scalar_t__,int ) ;
 int FUNC_1 (struct skd_device*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct skd_device *VAR_2)
{
 struct skd_special_context *VAR_3 = &VAR_2->internal_skspcl;

 FUNC_0(VAR_2, VAR_2->databuf_cache, VAR_3->data_buf,
       VAR_3->db_dma_address, VAR_0);

 VAR_3->data_buf = ((void*)0);
 VAR_3->db_dma_address = 0;

 FUNC_0(VAR_2, VAR_2->msgbuf_cache, VAR_3->msg_buf,
       VAR_3->mb_dma_address, VAR_1);

 VAR_3->msg_buf = ((void*)0);
 VAR_3->mb_dma_address = 0;

 FUNC_1(VAR_2, VAR_3->req.sksg_list,
    VAR_3->req.sksg_dma_address);

 VAR_3->req.sksg_list = ((void*)0);
 VAR_3->req.sksg_dma_address = 0;
}
