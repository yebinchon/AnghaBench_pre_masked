
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumpreg {int addr; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct dumpreg *VAR_2 = *(const struct dumpreg **)VAR_0;
 const struct dumpreg *VAR_3 = *(const struct dumpreg **)VAR_1;
 return VAR_2->addr - VAR_3->addr;
}
