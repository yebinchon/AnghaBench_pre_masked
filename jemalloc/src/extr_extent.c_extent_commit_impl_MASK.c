
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_6__ {scalar_t__ (* commit ) (TYPE_1__*,int ,int ,size_t,size_t,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_1__**) ;
 TYPE_1__ VAR_1 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ,size_t,size_t,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_11(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, extent_t *VAR_5, size_t VAR_6,
    size_t VAR_7, bool VAR_8) {
 FUNC_10(FUNC_9(VAR_2),
     VAR_0, VAR_8 ? 1 : 0);

 FUNC_6(VAR_3, VAR_4);
 if (*VAR_4 != &VAR_1) {
  FUNC_5(VAR_2, VAR_3);
 }
 bool VAR_9 = ((*VAR_4)->commit == ((void*)0) ||
     (*VAR_4)->commit(*VAR_4, FUNC_1(VAR_5),
     FUNC_7(VAR_5), VAR_6, VAR_7, FUNC_0(VAR_3)));
 if (*VAR_4 != &VAR_1) {
  FUNC_4(VAR_2);
 }
 FUNC_3(VAR_5, FUNC_2(VAR_5) || !VAR_9);
 return VAR_9;
}
