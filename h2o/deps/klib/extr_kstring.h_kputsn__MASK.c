
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ l; scalar_t__ m; char* s; } ;
typedef TYPE_1__ kstring_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,void const*,int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(const void *VAR_1, int VAR_2, kstring_t *VAR_3)
{
 if (VAR_3->l + VAR_2 > VAR_3->m) {
  char *VAR_4;
  VAR_3->m = VAR_3->l + VAR_2;
  FUNC_0(VAR_3->m);
  if ((VAR_4 = (char*)FUNC_2(VAR_3->s, VAR_3->m)))
   VAR_3->s = VAR_4;
  else
   return VAR_0;
 }
 FUNC_1(VAR_3->s + VAR_3->l, VAR_1, VAR_2);
 VAR_3->l += VAR_2;
 return VAR_2;
}
