
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l; int m; char* s; } ;
typedef TYPE_1__ kstring_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_0, kstring_t *VAR_1)
{
 if (VAR_1->l + 1 >= VAR_1->m) {
  VAR_1->m = VAR_1->l + 2;
  FUNC_0(VAR_1->m);
  VAR_1->s = (char*)FUNC_1(VAR_1->s, VAR_1->m);
 }
 VAR_1->s[VAR_1->l++] = VAR_0; VAR_1->s[VAR_1->l] = 0;
 return VAR_0;
}
