
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
typedef int ckhc_t ;
struct TYPE_4__ {unsigned int lg_curbuckets; int nshrinkfails; int * tab; int nshrinks; } ;
typedef TYPE_1__ ckh_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int,int) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,int,int *,int,int ) ;
 size_t FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_3, ckh_t *VAR_4) {
 ckhc_t *VAR_5, *VAR_6;
 size_t VAR_7;
 unsigned VAR_8, VAR_9;





 VAR_8 = VAR_4->lg_curbuckets;
 VAR_9 = VAR_4->lg_curbuckets + VAR_1 - 1;
 VAR_7 = FUNC_4(sizeof(ckhc_t) << VAR_9, VAR_0);
 if (FUNC_6(VAR_7 == 0 || VAR_7 > VAR_2)) {
  return;
 }
 VAR_5 = (ckhc_t *)FUNC_3(FUNC_5(VAR_3), VAR_7, VAR_0, 1, ((void*)0),
     1, FUNC_0(VAR_3, ((void*)0)));
 if (VAR_5 == ((void*)0)) {




  return;
 }

 VAR_6 = VAR_4->tab;
 VAR_4->tab = VAR_5;
 VAR_5 = VAR_6;
 VAR_4->lg_curbuckets = VAR_9 - VAR_1;

 if (!FUNC_1(VAR_4, VAR_5)) {
  FUNC_2(FUNC_5(VAR_3), VAR_5, ((void*)0), ((void*)0), 1, 1);



  return;
 }


 FUNC_2(FUNC_5(VAR_3), VAR_4->tab, ((void*)0), ((void*)0), 1, 1);
 VAR_4->tab = VAR_5;
 VAR_4->lg_curbuckets = VAR_8;



}
