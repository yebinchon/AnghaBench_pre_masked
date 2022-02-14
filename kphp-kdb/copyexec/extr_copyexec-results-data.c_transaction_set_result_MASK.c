
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int value; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_8__ {int root; } ;
typedef TYPE_2__ transaction_t ;
struct TYPE_9__ {int host_id; int volume_id; } ;
typedef TYPE_3__ host_t ;


 TYPE_2__* FUNC_0 (int ,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4 (host_t *VAR_0, int VAR_1, unsigned VAR_2) {
  transaction_t *VAR_3 = FUNC_0 (VAR_0->volume_id, VAR_1, 1);
  tree_t *VAR_4 = FUNC_3 (VAR_3->root, VAR_0->host_id);
  if (VAR_4 != ((void*)0)) {
    VAR_4->value = VAR_2;
  } else {
    VAR_3->root = FUNC_2 (VAR_3->root, VAR_0->host_id, FUNC_1 (), VAR_2);
  }
  return 0;
}
