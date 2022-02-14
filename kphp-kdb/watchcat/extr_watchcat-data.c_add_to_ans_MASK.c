
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int root; } ;
struct TYPE_6__ {int id; TYPE_1__ keys; } ;
typedef TYPE_2__ watchcat ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2 (watchcat *VAR_2) {
  if (VAR_0 > 2) {
    FUNC_1 (VAR_1, "add to ans %p\n", VAR_2);
  }
  FUNC_0 (VAR_2->keys.root, VAR_2->id);
}
