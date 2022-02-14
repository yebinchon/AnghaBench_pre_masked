
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct img_hash_request_ctx {int flags; struct img_hash_dev* hdev; } ;
struct img_hash_dev {int flags; int dev; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct img_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(struct ahash_request *VAR_6, int VAR_7)
{
 struct img_hash_request_ctx *VAR_8 = FUNC_0(VAR_6);
 struct img_hash_dev *VAR_9 = VAR_8->hdev;

 if (!VAR_7) {
  FUNC_2(VAR_6);
  if (VAR_4 & VAR_9->flags)
   VAR_7 = FUNC_3(VAR_6);
 } else {
  FUNC_1(VAR_9->dev, "Hash failed with error %d\n", VAR_7);
  VAR_8->flags |= VAR_3;
 }

 VAR_9->flags &= ~(VAR_2 | VAR_5 |
  VAR_1 | VAR_0 | VAR_4);

 if (VAR_6->base.complete)
  VAR_6->base.complete(&VAR_6->base, VAR_7);
}
