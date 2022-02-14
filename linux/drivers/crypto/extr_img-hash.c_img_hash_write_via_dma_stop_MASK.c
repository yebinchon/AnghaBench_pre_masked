
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {int flags; int dma_ct; int sg; } ;
struct img_hash_dev {int dev; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct img_hash_request_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct img_hash_dev *VAR_2)
{
 struct img_hash_request_ctx *VAR_3 = FUNC_0(VAR_2->req);

 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_2->dev, VAR_3->sg, VAR_3->dma_ct, VAR_0);

 return 0;
}
