
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int eset_t ;
typedef int arena_t ;
struct TYPE_6__ {size_t* backlog; int mtx; } ;
typedef TYPE_1__ arena_decay_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*,int *,int,int ,int ,int) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *,TYPE_1__*,size_t) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static bool
FUNC_8(tsdn_t *VAR_2, arena_t *VAR_3, arena_decay_t *VAR_4,
    eset_t *VAR_5, bool VAR_6, bool VAR_7) {
 if (VAR_7) {
  FUNC_5(VAR_2, &VAR_4->mtx);
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, 0,
      FUNC_4(VAR_5), VAR_6);
  FUNC_7(VAR_2, &VAR_4->mtx);

  return 0;
 }

 if (FUNC_6(VAR_2, &VAR_4->mtx)) {

  return 1;
 }

 bool VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6);
 size_t VAR_9;
 if (VAR_8) {

  VAR_9 = VAR_4->backlog[VAR_0-1];
 }
 FUNC_7(VAR_2, &VAR_4->mtx);

 if (VAR_1 && FUNC_2() &&
     VAR_8 && !VAR_6) {
  FUNC_3(VAR_2, VAR_3, VAR_4,
      VAR_9);
 }

 return 0;
}
