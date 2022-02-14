
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rate_weight {int p; } ;
typedef int item_t ;


 int FUNC_0 (int *,int ) ;
 double FUNC_1 (int) ;

__attribute__((used)) static double FUNC_2 (item_t *VAR_0, struct rate_weight *VAR_1) {
  int VAR_2 = FUNC_0 (VAR_0, VAR_1->p);
  if (VAR_2 < 0) { VAR_2 = 0; }
  return 1.0 - FUNC_1 (VAR_2 + 1.0) * 0.046538549706095;
}
