
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sksg_list; int sksg_dma_address; int state; scalar_t__ id; } ;
struct skd_special_context {TYPE_1__ req; int * msg_buf; int mb_dma_address; int * data_buf; int db_dma_address; } ;
struct skd_device {int msgbuf_cache; int databuf_cache; struct skd_special_context internal_skspcl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct skd_device*,int ,int *,int,int ) ;
 int * FUNC_1 (struct skd_device*,int,int *) ;
 int FUNC_2 (struct skd_device*) ;

__attribute__((used)) static int FUNC_3(struct skd_device *VAR_8)
{
 int VAR_9 = 0;
 struct skd_special_context *VAR_10;

 VAR_10 = &VAR_8->internal_skspcl;

 VAR_10->req.id = 0 + VAR_5;
 VAR_10->req.state = VAR_6;

 VAR_10->data_buf = FUNC_0(VAR_8, VAR_8->databuf_cache,
      &VAR_10->db_dma_address,
      VAR_4 | VAR_7,
      VAR_0);
 if (VAR_10->data_buf == ((void*)0)) {
  VAR_9 = -VAR_3;
  goto err_out;
 }

 VAR_10->msg_buf = FUNC_0(VAR_8, VAR_8->msgbuf_cache,
     &VAR_10->mb_dma_address,
     VAR_4 | VAR_7, VAR_1);
 if (VAR_10->msg_buf == ((void*)0)) {
  VAR_9 = -VAR_3;
  goto err_out;
 }

 VAR_10->req.sksg_list = FUNC_1(VAR_8, 1,
       &VAR_10->req.sksg_dma_address);
 if (VAR_10->req.sksg_list == ((void*)0)) {
  VAR_9 = -VAR_3;
  goto err_out;
 }

 if (!FUNC_2(VAR_8)) {
  VAR_9 = -VAR_2;
  goto err_out;
 }

err_out:
 return VAR_9;
}
