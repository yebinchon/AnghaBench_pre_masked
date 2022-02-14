
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_5__ {size_t len; int * vec; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__ bt; } ;
typedef TYPE_2__ prof_bt_node_t ;
typedef int emitter_t ;
typedef int buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char**) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*,int *,int *,int,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (char*,size_t,char*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_2, emitter_t *VAR_3) {
 FUNC_2(VAR_3, "stack_traces");
 prof_bt_node_t *VAR_4 = VAR_1;
 prof_bt_node_t *VAR_5;




 char VAR_6[2 * sizeof(intptr_t) + 3];
 size_t VAR_7 = sizeof(VAR_6);
 while (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_3);
  size_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_4->bt.len; VAR_8++) {
   FUNC_5(VAR_6, VAR_7, "%p", VAR_4->bt.vec[VAR_8]);
   char *VAR_9 = VAR_6;
   FUNC_3(VAR_3, VAR_0,
       &VAR_9);
  }
  FUNC_1(VAR_3);

  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
  FUNC_4(FUNC_6(VAR_2), VAR_5, ((void*)0), ((void*)0), 1, 1);
 }
 FUNC_1(VAR_3);
}
