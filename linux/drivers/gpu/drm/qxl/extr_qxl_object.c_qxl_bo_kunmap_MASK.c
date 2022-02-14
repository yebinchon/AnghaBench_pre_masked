
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_bo {scalar_t__ map_count; int kmap; int * kptr; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qxl_bo *VAR_0)
{
 if (VAR_0->kptr == ((void*)0))
  return;
 VAR_0->map_count--;
 if (VAR_0->map_count > 0)
  return;
 VAR_0->kptr = ((void*)0);
 FUNC_0(&VAR_0->kmap);
}
