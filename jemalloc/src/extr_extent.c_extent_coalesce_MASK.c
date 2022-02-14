
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int mtx; } ;
typedef TYPE_1__ eset_t ;
typedef int arena_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int *,int **,int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static bool
FUNC_7(tsdn_t *VAR_0, arena_t *VAR_1, extent_hooks_t **VAR_2,
    eset_t *VAR_3, extent_t *VAR_4, extent_t *VAR_5, bool VAR_6,
    bool VAR_7) {
 FUNC_0(FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5));

 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_5);

 FUNC_6(VAR_0, &VAR_3->mtx);
 bool VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_2,
     VAR_6 ? VAR_4 : VAR_5, VAR_6 ? VAR_5 : VAR_4, VAR_7);
 FUNC_5(VAR_0, &VAR_3->mtx);

 if (VAR_8) {
  FUNC_3(VAR_0, VAR_1, VAR_3, VAR_5);
 }

 return VAR_8;
}
