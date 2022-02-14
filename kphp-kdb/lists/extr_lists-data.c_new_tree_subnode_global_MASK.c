
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int rpos; int z; int x; int right; int left; } ;
typedef TYPE_1__ tree_ext_global_t ;
typedef int object_id_t ;
typedef int global_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static inline tree_ext_global_t *FUNC_3 (global_id_t VAR_4, int VAR_5, int VAR_6, object_id_t VAR_7) {
  tree_ext_global_t *VAR_8;
  VAR_8 = FUNC_2 (VAR_3);
  FUNC_0 (VAR_8);
  VAR_1++;
  VAR_8->left = VAR_8->right = VAR_0;
  VAR_8->y = VAR_5;
  VAR_8->rpos = VAR_6;
  VAR_8->x = VAR_4;




  VAR_8->z = VAR_7;


  return VAR_8;
}
