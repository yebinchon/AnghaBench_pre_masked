
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arm_lpae_io_pgtable {int pg_shift; } ;
typedef int phys_addr_t ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;

__attribute__((used)) static phys_addr_t FUNC_0(arm_lpae_iopte VAR_1,
      struct arm_lpae_io_pgtable *VAR_2)
{
 u64 VAR_3 = VAR_1 & VAR_0;

 if (VAR_2->pg_shift < 16)
  return VAR_3;


 return (VAR_3 | (VAR_3 << (48 - 12))) & (VAR_0 << 4);
}
