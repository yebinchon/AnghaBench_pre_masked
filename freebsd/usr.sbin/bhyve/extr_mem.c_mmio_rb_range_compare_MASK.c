
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmio_rb_range {scalar_t__ mr_end; scalar_t__ mr_base; } ;



__attribute__((used)) static int
FUNC_0(struct mmio_rb_range *VAR_0, struct mmio_rb_range *VAR_1)
{
 if (VAR_0->mr_end < VAR_1->mr_base)
  return (-1);
 else if (VAR_0->mr_base > VAR_1->mr_end)
  return (1);
 return (0);
}
