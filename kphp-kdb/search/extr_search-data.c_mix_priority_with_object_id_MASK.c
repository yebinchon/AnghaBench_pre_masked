
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_id; } ;
typedef TYPE_1__ item_t ;


 long long VAR_0 ;
 long long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1 (item_t *VAR_3, int VAR_4) {
  long long VAR_5 = ((VAR_2 == 1) ? (5 - VAR_4) : (VAR_4 - 5)) * 200000000;
  VAR_5 += FUNC_0 (VAR_3->item_id);
  if (VAR_5 < VAR_1) { return VAR_1; }
  if (VAR_5 > VAR_0) { return VAR_0; }
  return VAR_5;
}
