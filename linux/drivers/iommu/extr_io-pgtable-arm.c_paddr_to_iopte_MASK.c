
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_lpae_io_pgtable {int dummy; } ;
typedef int phys_addr_t ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;

__attribute__((used)) static arm_lpae_iopte FUNC_0(phys_addr_t VAR_1,
         struct arm_lpae_io_pgtable *VAR_2)
{
 arm_lpae_iopte VAR_3 = VAR_1;


 return (VAR_3 | (VAR_3 >> (48 - 12))) & VAR_0;
}
