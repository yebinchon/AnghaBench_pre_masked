
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int* reg_val_types; } ;
typedef enum reg_val_type { ____Placeholder_reg_val_type } reg_val_type ;



__attribute__((used)) static enum reg_val_type FUNC_0(const struct jit_ctx *VAR_0,
       int VAR_1, int VAR_2)
{
 return (VAR_0->reg_val_types[VAR_1] >> (VAR_2 * 3)) & 7;
}
