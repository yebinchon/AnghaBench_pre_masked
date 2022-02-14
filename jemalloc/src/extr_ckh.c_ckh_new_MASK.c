
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
typedef int ckhc_t ;
struct TYPE_3__ {int prng_state; unsigned int lg_minbuckets; unsigned int lg_curbuckets; int * tab; int * keycomp; int * hash; scalar_t__ count; scalar_t__ nrelocs; scalar_t__ ninserts; scalar_t__ nshrinkfails; scalar_t__ nshrinks; scalar_t__ ngrows; } ;
typedef TYPE_1__ ckh_t ;
typedef int ckh_keycomp_t ;
typedef int ckh_hash_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,int,int *,int,int ) ;
 size_t FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

bool
FUNC_7(tsd_t *VAR_3, ckh_t *VAR_4, size_t VAR_5, ckh_hash_t *VAR_6,
    ckh_keycomp_t *VAR_7) {
 bool VAR_8;
 size_t VAR_9, VAR_10;
 unsigned VAR_11;

 FUNC_2(VAR_5 > 0);
 FUNC_2(VAR_6 != ((void*)0));
 FUNC_2(VAR_7 != ((void*)0));
 VAR_4->prng_state = 42;
 VAR_4->count = 0;
 FUNC_2(VAR_1 > 0);
 VAR_9 = ((VAR_5 + (3 - (VAR_5 % 3))) / 3) << 2;
 for (VAR_11 = VAR_1;
     (FUNC_0(1) << VAR_11) < VAR_9;
     VAR_11++) {

 }
 VAR_4->lg_minbuckets = VAR_11 - VAR_1;
 VAR_4->lg_curbuckets = VAR_11 - VAR_1;
 VAR_4->hash = VAR_6;
 VAR_4->keycomp = VAR_7;

 VAR_10 = FUNC_4(sizeof(ckhc_t) << VAR_11, VAR_0);
 if (FUNC_6(VAR_10 == 0 || VAR_10 > VAR_2)) {
  VAR_8 = 1;
  goto label_return;
 }
 VAR_4->tab = (ckhc_t *)FUNC_3(FUNC_5(VAR_3), VAR_10, VAR_0, 1,
     ((void*)0), 1, FUNC_1(VAR_3, ((void*)0)));
 if (VAR_4->tab == ((void*)0)) {
  VAR_8 = 1;
  goto label_return;
 }

 VAR_8 = 0;
label_return:
 return VAR_8;
}
