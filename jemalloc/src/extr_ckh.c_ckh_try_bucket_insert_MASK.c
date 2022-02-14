
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void const* data; int * key; } ;
typedef TYPE_1__ ckhc_t ;
struct TYPE_5__ {int count; TYPE_1__* tab; int prng_state; } ;
typedef TYPE_2__ ckh_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static bool
FUNC_2(ckh_t *VAR_1, size_t VAR_2, const void *VAR_3,
    const void *VAR_4) {
 ckhc_t *VAR_5;
 unsigned VAR_6, VAR_7;





 VAR_6 = (unsigned)FUNC_1(&VAR_1->prng_state,
     VAR_0);
 for (VAR_7 = 0; VAR_7 < (FUNC_0(1) << VAR_0); VAR_7++) {
  VAR_5 = &VAR_1->tab[(VAR_2 << VAR_0) +
      ((VAR_7 + VAR_6) & ((FUNC_0(1) << VAR_0) - 1))];
  if (VAR_5->key == ((void*)0)) {
   VAR_5->key = VAR_3;
   VAR_5->data = VAR_4;
   VAR_1->count++;
   return 0;
  }
 }

 return 1;
}
