
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_6__ {int (* destroy ) (TYPE_1__*,int *,scalar_t__,int ,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_1__**) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int *,scalar_t__,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ) ;

void
FUNC_15(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, extent_t *VAR_5) {
 FUNC_1(FUNC_3(VAR_5) != ((void*)0));
 FUNC_1(FUNC_11(VAR_5) != 0);
 FUNC_14(FUNC_13(VAR_2),
     VAR_0, 0);


 FUNC_6(VAR_2, VAR_5);

 FUNC_2(VAR_5, FUNC_3(VAR_5));

 FUNC_10(VAR_3, VAR_4);

 if (*VAR_4 == &VAR_1) {

  FUNC_7(FUNC_3(VAR_5),
      FUNC_11(VAR_5));
 } else if ((*VAR_4)->destroy != ((void*)0)) {
  FUNC_9(VAR_2, VAR_3);
  (*VAR_4)->destroy(*VAR_4,
      FUNC_3(VAR_5), FUNC_11(VAR_5),
      FUNC_4(VAR_5), FUNC_0(VAR_3));
  FUNC_8(VAR_2);
 }

 FUNC_5(VAR_2, VAR_3, VAR_5);
}
