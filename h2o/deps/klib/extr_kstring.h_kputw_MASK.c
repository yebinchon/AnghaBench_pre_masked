
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ l; scalar_t__ m; char* s; } ;
typedef TYPE_1__ kstring_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(int VAR_1, kstring_t *VAR_2)
{
 char VAR_3[16];
 int VAR_4, VAR_5 = 0;
 unsigned int VAR_6 = VAR_1;
 if (VAR_1 < 0) VAR_6 = -VAR_6;
 do { VAR_3[VAR_5++] = VAR_6%10 + '0'; VAR_6 /= 10; } while (VAR_6 > 0);
 if (VAR_1 < 0) VAR_3[VAR_5++] = '-';
 if (VAR_2->l + VAR_5 + 1 >= VAR_2->m) {
  char *VAR_7;
  VAR_2->m = VAR_2->l + VAR_5 + 2;
  FUNC_0(VAR_2->m);
  if ((VAR_7 = (char*)FUNC_1(VAR_2->s, VAR_2->m)))
   VAR_2->s = VAR_7;
  else
   return VAR_0;
 }
 for (VAR_4 = VAR_5 - 1; VAR_4 >= 0; --VAR_4) VAR_2->s[VAR_2->l++] = VAR_3[VAR_4];
 VAR_2->s[VAR_2->l] = 0;
 return 0;
}
