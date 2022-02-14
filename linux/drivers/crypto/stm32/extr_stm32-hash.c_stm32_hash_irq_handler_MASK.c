
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_dev {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stm32_hash_dev*,int ) ;
 int FUNC_1 (struct stm32_hash_dev*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct stm32_hash_dev *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (VAR_9 & VAR_3) {
  VAR_9 &= ~VAR_3;
  FUNC_1(VAR_8, VAR_2, VAR_9);
  VAR_8->flags |= VAR_0;

  FUNC_1(VAR_8, VAR_1, 0);
  return VAR_5;
 }

 return VAR_4;
}
