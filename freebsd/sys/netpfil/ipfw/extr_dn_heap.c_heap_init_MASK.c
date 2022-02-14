
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_heap {int ofs; scalar_t__ elements; } ;


 scalar_t__ FUNC_0 (struct dn_heap*,int) ;

int
FUNC_1(struct dn_heap *VAR_0, int VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1))
  return 1;
 VAR_0->elements = 0;
 VAR_0->ofs = VAR_2;
 return 0;
}
