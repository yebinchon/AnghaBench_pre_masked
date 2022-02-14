
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic_reg_bank {int * base; } ;
struct mpic {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mpic *VAR_0, phys_addr_t VAR_1,
      struct mpic_reg_bank *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4)
{
 VAR_2->base = FUNC_1(VAR_1 + VAR_3, VAR_4);
 FUNC_0(VAR_2->base == ((void*)0));
}
