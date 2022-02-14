
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_prom_translation {scalar_t__ virt; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct linux_prom_translation *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->virt > VAR_3->virt)
  return 1;
 if (VAR_2->virt < VAR_3->virt)
  return -1;
 return 0;
}
