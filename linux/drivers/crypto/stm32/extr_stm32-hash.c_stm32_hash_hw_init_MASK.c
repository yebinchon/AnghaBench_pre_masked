
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_request_ctx {int dummy; } ;
struct stm32_hash_dev {int flags; scalar_t__ err; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stm32_hash_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct stm32_hash_dev *VAR_6,
         struct stm32_hash_request_ctx *VAR_7)
{
 FUNC_0(VAR_6->dev);

 if (!(VAR_3 & VAR_6->flags)) {
  FUNC_1(VAR_6, VAR_0, VAR_1);
  FUNC_1(VAR_6, VAR_5, 0);
  FUNC_1(VAR_6, VAR_2, 0);
  FUNC_1(VAR_6, VAR_4, 0);
  VAR_6->err = 0;
 }

 return 0;
}
