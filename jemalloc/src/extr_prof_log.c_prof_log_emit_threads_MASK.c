
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {char* thr_uid; char* name; struct TYPE_4__* next; } ;
typedef TYPE_1__ prof_thr_node_t ;
typedef int emitter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_1__*,int *,int *,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_3, emitter_t *VAR_4) {
 FUNC_1(VAR_4, "threads");
 prof_thr_node_t *VAR_5 = VAR_2;
 prof_thr_node_t *VAR_6;
 while (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_4);

  FUNC_2(VAR_4, "thr_uid", VAR_1,
      &VAR_5->thr_uid);

  char *VAR_7 = VAR_5->name;

  FUNC_2(VAR_4, "thr_name", VAR_0,
      &VAR_7);

  FUNC_4(VAR_4);
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
  FUNC_5(FUNC_6(VAR_3), VAR_6, ((void*)0), ((void*)0), 1, 1);
 }
 FUNC_0(VAR_4);
}
