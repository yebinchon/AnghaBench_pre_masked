
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;



__attribute__((used)) static inline void
FUNC_0(mrb_value *VAR_0, const mrb_value *VAR_1, size_t VAR_2)
{
  while (VAR_2-- > 0) {
    *VAR_0++ = *VAR_1++;
  }
}
