
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int vec; } ;
typedef TYPE_1__ prof_bt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

bool
FUNC_2(const void *VAR_1, const void *VAR_2) {
 const prof_bt_t *VAR_3 = (prof_bt_t *)VAR_1;
 const prof_bt_t *VAR_4 = (prof_bt_t *)VAR_2;

 FUNC_0(VAR_0);

 if (VAR_3->len != VAR_4->len) {
  return 0;
 }
 return (FUNC_1(VAR_3->vec, VAR_4->vec, VAR_3->len * sizeof(void *)) == 0);
}
