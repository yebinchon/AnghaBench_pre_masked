
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int online_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_8__ {int x; struct TYPE_8__* left; } ;
typedef TYPE_2__ stree_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_3 (user_t *VAR_4) {
  stree_t *VAR_5;
  VAR_1 = 0;
  VAR_4->online_tree = FUNC_1 (VAR_4->online_tree, VAR_3 - VAR_2);
  while (VAR_1) {
    VAR_5 = VAR_1;
    VAR_1 = VAR_5->left;

    FUNC_2 (VAR_4, -VAR_0 * VAR_5->x, 1, 9);
    FUNC_0 (VAR_5);
  }
}
