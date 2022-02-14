
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ref_cnt; int id; int * ev_first; } ;
typedef TYPE_1__ queue ;
struct TYPE_9__ {int data; } ;
typedef TYPE_2__ event ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int ,int,int,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6 (queue *VAR_2, char *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_2 == ((void*)0)) {
    if (VAR_1 > 2) {
      FUNC_1 (VAR_0, "Queue not found.\n");
    }
    return 0;
  }




  if (VAR_2->ref_cnt != 0 || VAR_2->ev_first != ((void*)0)) {
    if (VAR_1 > 2) {
      FUNC_1 (VAR_0, "  queue = %p\n", VAR_2);
    }
    event *VAR_8 = FUNC_0 (VAR_4 + 1);

    FUNC_2 (VAR_8->data, VAR_3, VAR_4 + 1);

    FUNC_4 (VAR_2, VAR_8);

    FUNC_3 (VAR_2);
  }

  if (VAR_7) {
    FUNC_5 (VAR_2->id, VAR_5, VAR_6, VAR_7, VAR_3, VAR_4);
  }


  return 1;
}
