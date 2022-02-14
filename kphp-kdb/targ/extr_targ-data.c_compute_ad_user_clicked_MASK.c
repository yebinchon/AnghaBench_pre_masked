
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clicked_ads; } ;
typedef TYPE_1__ user_t ;
typedef int treeref_t ;
struct TYPE_5__ {int z; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3 (int VAR_1, int VAR_2) {
  user_t *VAR_3 = FUNC_1 (VAR_1);
  if (!VAR_3) {
    return 0;
  }
  treeref_t VAR_4 = FUNC_2 (VAR_0, VAR_3->clicked_ads, VAR_2);
  if (!VAR_4) {
    return 0;
  }
  int VAR_5 = FUNC_0(VAR_0, VAR_4)->z;
  return VAR_5 + (VAR_5 >= 0);
}
