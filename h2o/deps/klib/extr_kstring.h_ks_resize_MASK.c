
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t m; char* s; } ;
typedef TYPE_1__ kstring_t ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char*,size_t) ;

__attribute__((used)) static inline int FUNC_2(kstring_t *VAR_0, size_t VAR_1)
{
 if (VAR_0->m < VAR_1) {
  char *VAR_2;
  VAR_0->m = VAR_1;
  FUNC_0(VAR_0->m);
  if ((VAR_2 = (char*)FUNC_1(VAR_0->s, VAR_0->m)))
   VAR_0->s = VAR_2;
  else
   return -1;
 }
 return 0;
}
