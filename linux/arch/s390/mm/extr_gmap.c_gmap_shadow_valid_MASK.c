
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {unsigned long orig_asce; int edat_level; scalar_t__ removed; } ;



int FUNC_0(struct gmap *VAR_0, unsigned long VAR_1, int VAR_2)
{
 if (VAR_0->removed)
  return 0;
 return VAR_0->orig_asce == VAR_1 && VAR_0->edat_level == VAR_2;
}
