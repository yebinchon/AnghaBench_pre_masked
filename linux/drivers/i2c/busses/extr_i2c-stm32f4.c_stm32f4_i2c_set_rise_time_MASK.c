
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32f4_i2c_dev {scalar_t__ speed; scalar_t__ base; int parent_rate; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stm32f4_i2c_dev *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->parent_rate, VAR_0);
 u32 VAR_5;
 if (VAR_3->speed == VAR_2)
  VAR_5 = VAR_4 + 1;
 else
  VAR_5 = VAR_4 * 3 / 10 + 1;

 FUNC_2(FUNC_1(VAR_5),
         VAR_3->base + VAR_1);
}
