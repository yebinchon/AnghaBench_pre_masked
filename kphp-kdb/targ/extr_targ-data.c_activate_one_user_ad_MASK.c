
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_ads; int clicked_ads; int inactive_ads; } ;
typedef TYPE_1__ user_t ;
typedef scalar_t__ treeref_t ;
struct intree_node {int x; scalar_t__ z; } ;


 int VAR_0 ;
 struct intree_node* FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6 (user_t *VAR_3, int VAR_4) {
  treeref_t VAR_5;
  VAR_3->inactive_ads = FUNC_4 (VAR_0, VAR_3->inactive_ads, VAR_4, &VAR_5);
  if (!VAR_5) {
    if (FUNC_3 (VAR_0, VAR_3->clicked_ads, VAR_4)) {
      return;
    }
    VAR_5 = FUNC_5 (VAR_0);
    struct intree_node *VAR_6 = FUNC_0 (VAR_0, VAR_5);
    VAR_6->x = VAR_4;
    VAR_6->z = 0;
  } else {
    --VAR_2;
  }
  ++VAR_1;
  FUNC_1 (!FUNC_3 (VAR_0, VAR_3->active_ads, VAR_4));
  VAR_3->active_ads = FUNC_2 (VAR_0, VAR_3->active_ads, VAR_5);
}
