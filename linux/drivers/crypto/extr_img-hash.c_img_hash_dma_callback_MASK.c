
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {scalar_t__ sg; scalar_t__ bufcnt; int buffer; } ;
struct img_hash_dev {int dma_task; int req; } ;


 struct img_hash_request_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct img_hash_dev*,int ,scalar_t__,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct img_hash_dev *VAR_1 = (struct img_hash_dev *)VAR_0;
 struct img_hash_request_ctx *VAR_2 = FUNC_0(VAR_1->req);

 if (VAR_2->bufcnt) {
  FUNC_1(VAR_1, VAR_2->buffer, VAR_2->bufcnt, 0);
  VAR_2->bufcnt = 0;
 }
 if (VAR_2->sg)
  FUNC_2(&VAR_1->dma_task);
}
