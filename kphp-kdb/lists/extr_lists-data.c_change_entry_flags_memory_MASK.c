
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; } ;
typedef TYPE_1__ tree_ext_large_t ;
struct tree_payload {int flags; int global_id; } ;


 struct tree_payload* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static inline void FUNC_2 (tree_ext_large_t *VAR_0, int VAR_1) {
  struct tree_payload *VAR_2 = FUNC_0 (VAR_0);
  FUNC_1 (VAR_0->x, VAR_2->global_id, VAR_2->flags, VAR_1);
  VAR_2->flags = VAR_1;
}
