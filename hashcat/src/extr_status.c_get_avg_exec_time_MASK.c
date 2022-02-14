
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* exec_msec; scalar_t__ exec_pos; } ;
typedef TYPE_1__ hc_device_param_t ;


 int VAR_0 ;

double FUNC_0 (hc_device_param_t *VAR_1, const int VAR_2)
{
  int VAR_3 = (int) VAR_1->exec_pos - VAR_2;

  if (VAR_3 < 0) VAR_3 += VAR_0;

  double VAR_4 = 0;

  int VAR_5 = 0;

  for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  {
    double VAR_7 = VAR_1->exec_msec[(VAR_3 + VAR_6) % VAR_0];

    if (VAR_7 > 0)
    {
      VAR_4 += VAR_7;

      VAR_5++;
    }
  }

  if (VAR_5 == 0) return 0;

  return VAR_4 / VAR_5;
}
