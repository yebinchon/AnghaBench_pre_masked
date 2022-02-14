
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* tab; int finished; int sep; char const* p; } ;
typedef TYPE_1__ ks_tokaux_t ;



char *FUNC_0(const char *VAR_0, const char *VAR_1, ks_tokaux_t *VAR_2)
{
 const char *VAR_3, *VAR_4;
 if (VAR_1) {
  if (VAR_0 == 0 && (VAR_2->tab[0]&1)) return 0;
  VAR_2->finished = 0;
  if (VAR_1[1]) {
   VAR_2->sep = -1;
   VAR_2->tab[0] = VAR_2->tab[1] = VAR_2->tab[2] = VAR_2->tab[3] = 0;
   for (VAR_3 = VAR_1; *VAR_3; ++VAR_3) VAR_2->tab[*VAR_3>>6] |= 1ull<<(*VAR_3&0x3f);
  } else VAR_2->sep = VAR_1[0];
 }
 if (VAR_2->finished) return 0;
 else if (VAR_0) VAR_2->p = VAR_0 - 1, VAR_2->finished = 0;
 if (VAR_2->sep < 0) {
  for (VAR_3 = VAR_4 = VAR_2->p + 1; *VAR_3; ++VAR_3)
   if (VAR_2->tab[*VAR_3>>6]>>(*VAR_3&0x3f)&1) break;
 } else {
  for (VAR_3 = VAR_4 = VAR_2->p + 1; *VAR_3; ++VAR_3)
   if (*VAR_3 == VAR_2->sep) break;
 }
 VAR_2->p = VAR_3;
 if (*VAR_3 == 0) VAR_2->finished = 1;
 return (char*)VAR_4;
}
