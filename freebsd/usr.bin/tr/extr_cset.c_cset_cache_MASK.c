
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wchar_t ;
struct cset {int cs_havecache; int * cs_cache; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cset*,size_t) ;

void
FUNC_1(struct cset *VAR_1)
{
 wchar_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->cs_cache[VAR_2] = FUNC_0(VAR_1, VAR_2);

 VAR_1->cs_havecache = 1;
}
