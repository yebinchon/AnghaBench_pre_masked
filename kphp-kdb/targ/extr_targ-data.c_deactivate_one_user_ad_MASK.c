
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inactive_ads; int active_ads; } ;
typedef TYPE_1__ user_t ;
typedef scalar_t__ treeref_t ;
struct TYPE_5__ {scalar_t__ z; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_4 (user_t *VAR_3, int VAR_4) {
  treeref_t VAR_5;
  VAR_3->active_ads = FUNC_3 (VAR_0, VAR_3->active_ads, VAR_4, &VAR_5);
  if (VAR_5) {
    --VAR_1;
    if (FUNC_0 (VAR_0, VAR_5)->z) {
      ++VAR_2;
      VAR_3->inactive_ads = FUNC_2 (VAR_0, VAR_3->inactive_ads, VAR_5);
    } else {
      FUNC_1 (VAR_0, VAR_5);
    }
  }
}
