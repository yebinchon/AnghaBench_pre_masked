
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic_reg_bank {int base; int dhost; } ;
typedef enum mpic_reg_type { ____Placeholder_mpic_reg_type } mpic_reg_type ;


 int FUNC_0 (int ,unsigned int,int ) ;



 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(enum mpic_reg_type VAR_0,
          struct mpic_reg_bank *VAR_1,
           unsigned int VAR_2, u32 VAR_3)
{
 switch(VAR_0) {





 case 129:
  FUNC_1(VAR_1->base + (VAR_2 >> 2), VAR_3);
  break;
 case 128:
 default:
  FUNC_2(VAR_1->base + (VAR_2 >> 2), VAR_3);
  break;
 }
}
