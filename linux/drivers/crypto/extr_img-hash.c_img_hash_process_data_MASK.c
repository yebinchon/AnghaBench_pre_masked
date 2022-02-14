
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {scalar_t__ bufcnt; } ;
struct img_hash_dev {int dev; struct ahash_request* req; } ;
struct ahash_request {scalar_t__ nbytes; } ;


 scalar_t__ VAR_0 ;
 struct img_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct img_hash_dev*) ;
 int FUNC_3 (struct img_hash_dev*) ;

__attribute__((used)) static int FUNC_4(struct img_hash_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct img_hash_request_ctx *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 VAR_3->bufcnt = 0;

 if (VAR_2->nbytes >= VAR_0) {
  FUNC_1(VAR_1->dev, "process data request(%d bytes) using DMA\n",
   VAR_2->nbytes);
  VAR_4 = FUNC_3(VAR_1);
 } else {
  FUNC_1(VAR_1->dev, "process data request(%d bytes) using CPU\n",
   VAR_2->nbytes);
  VAR_4 = FUNC_2(VAR_1);
 }
 return VAR_4;
}
