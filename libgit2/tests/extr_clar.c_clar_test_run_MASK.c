
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clar_explicit {size_t suite_idx; int * filter; struct clar_explicit* next; } ;
struct TYPE_2__ {int total_errors; struct clar_explicit* explicit; } ;


 TYPE_1__ VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int *) ;

int
FUNC_1(void)
{
 size_t VAR_3;
 struct clar_explicit *VAR_4;

 if (VAR_0.explicit) {
  for (VAR_4 = VAR_0.explicit; VAR_4; VAR_4 = VAR_4->next)
   FUNC_0(&VAR_2[VAR_4->suite_idx], VAR_4->filter);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
   FUNC_0(&VAR_2[VAR_3], ((void*)0));
 }

 return VAR_0.total_errors;
}
