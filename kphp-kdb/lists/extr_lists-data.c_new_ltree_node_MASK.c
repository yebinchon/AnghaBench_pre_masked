
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ltree_x_t ;
struct TYPE_5__ {int y; int x; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ ltree_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static ltree_t *FUNC_3 (ltree_x_t VAR_3, int VAR_4) {
  ltree_t *VAR_5 = FUNC_2 (VAR_1);
  FUNC_0 (VAR_5);
  VAR_0++;
  VAR_5->left = VAR_5->right = 0;
  VAR_5->y = VAR_4;

  VAR_5->x = VAR_3;



  return VAR_5;
}
