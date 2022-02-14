
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double percent_processing_unit_used; } ;
typedef TYPE_1__ SSTS0200 ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

void FUNC_1(double VAR_0[3]) {
  SSTS0200 VAR_1;

  if (FUNC_0(&VAR_1)) {
    VAR_0[0] = VAR_0[1] = VAR_0[2] = 0;
    return;
  }





  double VAR_2 =
    VAR_1.percent_processing_unit_used / 1000.0;

  VAR_0[0] = VAR_0[1] = VAR_0[2] = VAR_2;
}
