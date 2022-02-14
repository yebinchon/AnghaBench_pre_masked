
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {int total; } ;
struct img_hash_dev {int flags; int dma_task; int dev; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct img_hash_request_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct img_hash_dev*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct img_hash_dev *VAR_3)
{
 struct img_hash_request_ctx *VAR_4 = FUNC_0(VAR_3->req);

 FUNC_2(VAR_3, 1);

 FUNC_1(VAR_3->dev, "xmit dma size: %d\n", VAR_4->total);

 if (!VAR_4->total)
  VAR_3->flags |= VAR_1;

 VAR_3->flags |= VAR_0 | VAR_1;

 FUNC_3(&VAR_3->dma_task);

 return -VAR_2;
}
