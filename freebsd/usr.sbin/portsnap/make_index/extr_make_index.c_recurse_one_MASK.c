
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t n_rdep; TYPE_1__* rdep; } ;
struct TYPE_9__ {TYPE_5__* p; } ;
struct TYPE_8__ {TYPE_5__* p; } ;
typedef TYPE_2__ DEP ;


 int FUNC_0 (int,char*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static DEP *
FUNC_3(DEP * VAR_0, size_t * VAR_1)
{
 size_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_5 = *VAR_1;
 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
  FUNC_2(VAR_0[VAR_2].p);
  for (VAR_3 = 0; VAR_3 < VAR_0[VAR_2].p->n_rdep; VAR_3++) {
   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
    if (VAR_0[VAR_2].p->rdep[VAR_3].p == VAR_0[VAR_4].p)
     break;
   }
   if (VAR_4 == VAR_6) {
    VAR_6++;
    if (VAR_6 >= *VAR_1) {
     *VAR_1 += *VAR_1;
     VAR_0 = FUNC_1(VAR_0, *VAR_1 * sizeof(DEP));
     if (VAR_0 == ((void*)0))
      FUNC_0(1, "realloc(d)");
    }
    VAR_0[VAR_4].p = VAR_0[VAR_2].p->rdep[VAR_3].p;
   }
  }
 }
 *VAR_1 = VAR_6;

 return VAR_0;
}
