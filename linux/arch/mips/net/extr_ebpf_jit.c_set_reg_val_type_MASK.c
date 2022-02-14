
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef enum reg_val_type { ____Placeholder_reg_val_type } reg_val_type ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, int VAR_1, enum reg_val_type VAR_2)
{
 *VAR_0 &= ~(7ull << (VAR_1 * 3));
 *VAR_0 |= ((u64)VAR_2 << (VAR_1 * 3));
}
