
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct stm32_hash_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct stm32_hash_dev*,int ) ;
 int FUNC_1 (struct stm32_hash_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct stm32_hash_dev *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 &= ~(VAR_1);
 VAR_4 |= (8U * ((VAR_3) % 4U));
 FUNC_1(VAR_2, VAR_0, VAR_4);
}
