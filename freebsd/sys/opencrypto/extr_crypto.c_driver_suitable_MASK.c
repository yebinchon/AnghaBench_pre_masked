
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {size_t cri_alg; struct cryptoini* cri_next; } ;
struct cryptocap {scalar_t__* cc_alg; } ;



__attribute__((used)) static int
FUNC_0(const struct cryptocap *VAR_0, const struct cryptoini *VAR_1)
{
 const struct cryptoini *VAR_2;


 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->cri_next)
  if (VAR_0->cc_alg[VAR_2->cri_alg] == 0)
   return 0;
 return 1;
}
