
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int user_id; int topmsg_tree; TYPE_1__* Sublists; TYPE_3__* mf; } ;
typedef TYPE_2__ user_t ;
struct TYPE_8__ {char* data; int aio; } ;
typedef TYPE_3__ core_mf_t ;
struct TYPE_6__ {scalar_t__ A; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,TYPE_2__*,int,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3 (user_t *VAR_4) {
  int VAR_5;
  core_mf_t *VAR_6 = VAR_4->mf;

  FUNC_0 (VAR_6 && !VAR_6->aio);
  char *VAR_7 = VAR_6->data;

  if (VAR_3 > 2) {
    FUNC_1 (VAR_1, "unbind_user_metafile(%p) : user_id=%d mf=%p\n", VAR_4, VAR_4->user_id, VAR_7);
  }

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    VAR_4->Sublists[VAR_5].A = 0;
  }

  FUNC_2 (VAR_4->topmsg_tree);
  VAR_4->topmsg_tree = VAR_0;
}
