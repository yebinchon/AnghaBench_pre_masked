
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int rpos; int x; int right; int left; } ;
typedef TYPE_1__ tree_ext_large_t ;
struct tree_payload {int dummy; } ;
typedef int object_id_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static inline tree_ext_large_t *FUNC_5 (object_id_t VAR_4, int VAR_5, int VAR_6) {
  tree_ext_large_t * VAR_7;
  VAR_7 = FUNC_4 (VAR_3);
  FUNC_1 (VAR_7);
  VAR_1++;
  VAR_7->left = VAR_7->right = VAR_0;
  VAR_7->y = VAR_5;
  VAR_7->rpos = VAR_6;




  VAR_7->x = VAR_4;

  FUNC_3 (FUNC_0 (VAR_7), 0, sizeof (struct tree_payload));
  return VAR_7;
}
