
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_7__ {int count; int lg_curbuckets; int lg_minbuckets; TYPE_1__* tab; } ;
typedef TYPE_2__ ckh_t ;
struct TYPE_6__ {int * data; int * key; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_2__*,void const*) ;
 int FUNC_3 (int *,TYPE_2__*) ;

bool
FUNC_4(tsd_t *VAR_2, ckh_t *VAR_3, const void *VAR_4, void **VAR_5,
    void **VAR_6) {
 size_t VAR_7;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7 != VAR_1) {
  if (VAR_5 != ((void*)0)) {
   *VAR_5 = (void *)VAR_3->tab[VAR_7].key;
  }
  if (VAR_6 != ((void*)0)) {
   *VAR_6 = (void *)VAR_3->tab[VAR_7].data;
  }
  VAR_3->tab[VAR_7].key = ((void*)0);
  VAR_3->tab[VAR_7].data = ((void*)0);

  VAR_3->count--;

  if (VAR_3->count < (FUNC_0(1) << (VAR_3->lg_curbuckets
      + VAR_0 - 2)) && VAR_3->lg_curbuckets
      > VAR_3->lg_minbuckets) {

   FUNC_3(VAR_2, VAR_3);
  }

  return 0;
 }

 return 1;
}
