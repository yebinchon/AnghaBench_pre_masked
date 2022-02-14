
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l; int m; char* s; } ;
typedef TYPE_1__ kstring_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;

__attribute__((used)) static inline int FUNC_3(const char *VAR_0, int VAR_1, kstring_t *VAR_2)
{
 if (VAR_2->l + VAR_1 + 1 >= VAR_2->m) {
  VAR_2->m = VAR_2->l + VAR_1 + 2;
  FUNC_0(VAR_2->m);
  VAR_2->s = (char*)FUNC_2(VAR_2->s, VAR_2->m);
 }
 FUNC_1(VAR_2->s + VAR_2->l, VAR_0, VAR_1);
 VAR_2->l += VAR_1;
 VAR_2->s[VAR_2->l] = 0;
 return VAR_1;
}
