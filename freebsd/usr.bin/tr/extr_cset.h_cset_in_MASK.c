
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wchar_t ;
struct cset {int* cs_cache; scalar_t__ cs_havecache; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cset*,size_t) ;

__attribute__((used)) static __inline bool
FUNC_1(struct cset *VAR_1, wchar_t VAR_2)
{

 if (VAR_2 < VAR_0 && VAR_1->cs_havecache)
  return (VAR_1->cs_cache[VAR_2]);
 return (FUNC_0(VAR_1, VAR_2));
}
