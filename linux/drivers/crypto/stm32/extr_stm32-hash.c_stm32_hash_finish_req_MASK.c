
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_request_ctx {int flags; struct stm32_hash_dev* hdev; } ;
struct stm32_hash_dev {int flags; int engine; int dev; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct stm32_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,struct ahash_request*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct ahash_request*) ;

__attribute__((used)) static void FUNC_6(struct ahash_request *VAR_10, int VAR_11)
{
 struct stm32_hash_request_ctx *VAR_12 = FUNC_0(VAR_10);
 struct stm32_hash_dev *VAR_13 = VAR_12->hdev;

 if (!VAR_11 && (VAR_3 & VAR_13->flags)) {
  FUNC_4(VAR_10);
  VAR_11 = FUNC_5(VAR_10);
  VAR_13->flags &= ~(VAR_3 | VAR_0 |
     VAR_8 | VAR_1 |
     VAR_9 | VAR_4 |
     VAR_6 | VAR_5 |
     VAR_7);
 } else {
  VAR_12->flags |= VAR_2;
 }

 FUNC_2(VAR_13->dev);
 FUNC_3(VAR_13->dev);

 FUNC_1(VAR_13->engine, VAR_10, VAR_11);
}
