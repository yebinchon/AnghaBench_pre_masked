
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 int FUNC_0 (double) ;
 unsigned int FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

double
FUNC_4 (double VAR_6, double VAR_7)
{
  double_accessor VAR_8;
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  unsigned VAR_15, VAR_16;

  VAR_11 = FUNC_0 (VAR_7);
  VAR_13 = VAR_11 & 0x7fffffff;
  VAR_15 = FUNC_1 (VAR_7);
  VAR_12 = FUNC_0 (VAR_6);
  VAR_14 = VAR_12 & 0x7fffffff;
  VAR_16 = FUNC_1 (VAR_6);
  if (((VAR_13 | ((VAR_15 | -VAR_15) >> 31)) > 0x7ff00000) || ((VAR_14 | ((VAR_16 | -VAR_16) >> 31)) > 0x7ff00000))
  {
    return VAR_7 + VAR_6;
  }
  if (((VAR_11 - 0x3ff00000) | VAR_15) == 0)
  {
    return FUNC_2 (VAR_6);
  }
  VAR_10 = ((VAR_12 >> 31) & 1) | ((VAR_11 >> 30) & 2);


  if ((VAR_14 | VAR_16) == 0)
  {
    switch (VAR_10)
    {
      case 0:
      case 1:
      {
        return VAR_6;
      }
      case 2:
      {
        return VAR_0 + VAR_4;
      }
      case 3:
      {
        return -VAR_0 - VAR_4;
      }
    }
  }

  if ((VAR_13 | VAR_15) == 0)
  {
    return (VAR_12 < 0) ? -VAR_2 - VAR_4 : VAR_2 + VAR_4;
  }


  if (VAR_13 == 0x7ff00000)
  {
    if (VAR_14 == 0x7ff00000)
    {
      switch (VAR_10)
      {
        case 0:
        {
          return VAR_3 + VAR_4;
        }
        case 1:
        {
          return -VAR_3 - VAR_4;
        }
        case 2:
        {
          return 3.0 * VAR_3 + VAR_4;
        }
        case 3:
        {
          return -3.0 * VAR_3 - VAR_4;
        }
      }
    }
    else
    {
      switch (VAR_10)
      {
        case 0:
        {
          return VAR_5;
        }
        case 1:
        {
          return -VAR_5;
        }
        case 2:
        {
          return VAR_0 + VAR_4;
        }
        case 3:
        {
          return -VAR_0 - VAR_4;
        }
      }
    }
  }

  if (VAR_14 == 0x7ff00000)
  {
    return (VAR_12 < 0) ? -VAR_2 - VAR_4 : VAR_2 + VAR_4;
  }


  VAR_9 = (VAR_14 - VAR_13) >> 20;
  if (VAR_9 > 60)
  {
    VAR_8.dbl = VAR_2 + 0.5 * VAR_1;
  }
  else if (VAR_11 < 0 && VAR_9 < -60)
  {
    VAR_8.dbl = 0.0;
  }
  else
  {
    VAR_8.dbl = FUNC_2 (FUNC_3 (VAR_6 / VAR_7));
  }
  switch (VAR_10)
  {
    case 0:
    {
      return VAR_8.dbl;
    }
    case 1:
    {
      VAR_8.as_int.hi ^= 0x80000000;
      return VAR_8.dbl;
    }
    case 2:
    {
      return VAR_0 - (VAR_8.dbl - VAR_1);
    }

    default:
    {
      return (VAR_8.dbl - VAR_1) - VAR_0;
    }
  }
}
