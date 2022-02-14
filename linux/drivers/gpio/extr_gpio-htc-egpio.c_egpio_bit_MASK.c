
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct egpio_info {int reg_shift; } ;



__attribute__((used)) static inline int FUNC_0(struct egpio_info *VAR_0, int VAR_1)
{
 return 1 << (VAR_1 & ((1 << VAR_0->reg_shift)-1));
}
