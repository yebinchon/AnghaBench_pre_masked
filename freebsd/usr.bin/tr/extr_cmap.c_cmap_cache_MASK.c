
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wint_t ;
struct cmap {int cm_havecache; int * cm_cache; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cmap*,size_t) ;

void
FUNC_1(struct cmap *VAR_1)
{
 wint_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->cm_cache[VAR_2] = FUNC_0(VAR_1, VAR_2);

 VAR_1->cm_havecache = 1;
}
