
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_mtrr_data {unsigned int smp_reg; unsigned long smp_base; unsigned long smp_size; int smp_type; } ;
typedef int mtrr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct set_mtrr_data*,int ) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2, unsigned long VAR_3,
          unsigned long VAR_4, mtrr_type VAR_5)
{
 struct set_mtrr_data VAR_6 = { .smp_reg = VAR_2,
          .smp_base = VAR_3,
          .smp_size = VAR_4,
          .smp_type = VAR_5
        };

 FUNC_0(VAR_1, &VAR_6,
           VAR_0);
}
