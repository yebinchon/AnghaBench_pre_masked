
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lo; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double VAR_13 ;
 double VAR_14 ;
 double VAR_15 ;

__attribute__((used)) static double
FUNC_3 (double VAR_16, double VAR_17, int VAR_18)
{
  double_accessor VAR_19;
  double VAR_20, VAR_21, VAR_22, VAR_23;
  int VAR_24, VAR_25;

  VAR_25 = FUNC_0 (VAR_16);
  VAR_24 = VAR_25 & 0x7fffffff;
  if (VAR_24 < 0x3e300000)
  {
    if ((int) VAR_16 == 0)
    {
      if (((VAR_24 | FUNC_1 (VAR_16)) | (VAR_18 + 1)) == 0)
      {
        return VAR_13 / FUNC_2 (VAR_16);
      }
      else
      {
        if (VAR_18 == 1)
        {
          return VAR_16;
        }
        else
        {
          double VAR_26;
          double_accessor VAR_27;

          VAR_19.dbl = VAR_22 = VAR_16 + VAR_17;
          VAR_19.as_int.lo = 0;
          VAR_21 = VAR_17 - (VAR_19.dbl - VAR_16);
          VAR_27.dbl = VAR_26 = -VAR_13 / VAR_22;
          VAR_27.as_int.lo = 0;
          VAR_23 = VAR_13 + VAR_27.dbl * VAR_19.dbl;
          return VAR_27.dbl + VAR_26 * (VAR_23 + VAR_27.dbl * VAR_21);
        }
      }
    }
  }
  if (VAR_24 >= 0x3FE59428)
  {
    if (VAR_25 < 0)
    {
      VAR_16 = -VAR_16;
      VAR_17 = -VAR_17;
    }
    VAR_19.dbl = VAR_14 - VAR_16;
    VAR_22 = VAR_15 - VAR_17;
    VAR_16 = VAR_19.dbl + VAR_22;
    VAR_17 = 0.0;
  }
  VAR_19.dbl = VAR_16 * VAR_16;
  VAR_22 = VAR_19.dbl * VAR_19.dbl;





  VAR_20 = VAR_1 + VAR_22 * (VAR_6 + VAR_22 * (VAR_8 + VAR_22 * (VAR_10 + VAR_22 * (VAR_12 + VAR_22 * VAR_3))));
  VAR_21 = VAR_19.dbl * (VAR_5 + VAR_22 * (VAR_7 + VAR_22 * (VAR_9 + VAR_22 * (VAR_11 + VAR_22 * (VAR_2 + VAR_22 * VAR_4)))));
  VAR_23 = VAR_19.dbl * VAR_16;
  VAR_20 = VAR_17 + VAR_19.dbl * (VAR_23 * (VAR_20 + VAR_21) + VAR_17);
  VAR_20 += VAR_0 * VAR_23;
  VAR_22 = VAR_16 + VAR_20;
  if (VAR_24 >= 0x3FE59428)
  {
    VAR_21 = (double) VAR_18;
    return (double) (1 - ((VAR_25 >> 30) & 2)) * (VAR_21 - 2.0 * (VAR_16 - (VAR_22 * VAR_22 / (VAR_22 + VAR_21) - VAR_20)));
  }
  if (VAR_18 == 1)
  {
    return VAR_22;
  }
  else
  {





    double VAR_28;
    double_accessor VAR_29;

    VAR_19.dbl = VAR_22;
    VAR_19.as_int.lo = 0;
    VAR_21 = VAR_20 - (VAR_19.dbl - VAR_16);
    VAR_29.dbl = VAR_28 = -1.0 / VAR_22;
    VAR_29.as_int.lo = 0;
    VAR_23 = 1.0 + VAR_29.dbl * VAR_19.dbl;
    return VAR_29.dbl + VAR_28 * (VAR_23 + VAR_29.dbl * VAR_21);
  }
}
