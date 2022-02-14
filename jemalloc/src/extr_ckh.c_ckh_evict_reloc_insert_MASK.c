
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* key; void* data; } ;
typedef TYPE_1__ ckhc_t ;
struct TYPE_6__ {int lg_curbuckets; int (* hash ) (void const*,size_t*) ;int nrelocs; TYPE_1__* tab; int prng_state; } ;
typedef TYPE_2__ ckh_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,size_t,void const*,void const*) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 int FUNC_4 (void const*,size_t*) ;

__attribute__((used)) static bool
FUNC_5(ckh_t *VAR_1, size_t VAR_2, void const **VAR_3,
    void const **VAR_4) {
 const void *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 ckhc_t *VAR_9;
 size_t VAR_10[2], VAR_11, VAR_12;
 unsigned VAR_13;

 VAR_11 = VAR_2;
 VAR_5 = *VAR_3;
 VAR_6 = *VAR_4;
 while (1) {
  VAR_13 = (unsigned)FUNC_3(&VAR_1->prng_state,
      VAR_0);
  VAR_9 = &VAR_1->tab[(VAR_11 << VAR_0) + VAR_13];
  FUNC_1(VAR_9->key != ((void*)0));


  VAR_7 = VAR_9->key; VAR_8 = VAR_9->data;
  VAR_9->key = VAR_5; VAR_9->data = VAR_6;
  VAR_5 = VAR_7; VAR_6 = VAR_8;






  VAR_1->hash(VAR_5, VAR_10);
  VAR_12 = VAR_10[1] & ((FUNC_0(1) << VAR_1->lg_curbuckets) - 1);
  if (VAR_12 == VAR_11) {
   VAR_12 = VAR_10[0] & ((FUNC_0(1) << VAR_1->lg_curbuckets)
       - 1);
  }

  if (VAR_12 == VAR_2) {
   *VAR_3 = VAR_5;
   *VAR_4 = VAR_6;
   return 1;
  }

  VAR_11 = VAR_12;
  if (!FUNC_2(VAR_1, VAR_11, VAR_5, VAR_6)) {
   return 0;
  }
 }
}
