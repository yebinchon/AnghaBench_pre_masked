
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {unsigned int reg_stride_order; unsigned int reg_stride; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct regmap *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_0->reg_stride_order >= 0)
  return VAR_1 << VAR_0->reg_stride_order;
 else
  return VAR_1 * VAR_0->reg_stride;
}
