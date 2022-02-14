
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wint_t ;
struct cmap {size_t* cm_cache; scalar_t__ cm_havecache; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct cmap*,size_t) ;

__attribute__((used)) static __inline wint_t
FUNC_1(struct cmap *VAR_1, wint_t VAR_2)
{

 if (VAR_2 < VAR_0 && VAR_1->cm_havecache)
  return (VAR_1->cm_cache[VAR_2]);
 return (FUNC_0(VAR_1, VAR_2));
}
