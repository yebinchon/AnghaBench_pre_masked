
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; unsigned int lo; } ;
struct TYPE_4__ {double dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 double* VAR_0 ;
 int FUNC_0 (double) ;
 unsigned int FUNC_1 (double) ;

double
FUNC_2 (double VAR_1, double VAR_2)
{
  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  unsigned VAR_11, VAR_12, VAR_13;

  VAR_4 = FUNC_0 (VAR_1);
  VAR_11 = FUNC_1 (VAR_1);
  VAR_5 = FUNC_0 (VAR_2);
  VAR_12 = FUNC_1 (VAR_2);
  VAR_9 = VAR_4 & 0x80000000;
  VAR_4 ^= VAR_9;
  VAR_5 &= 0x7fffffff;


  if ((VAR_5 | VAR_12) == 0 || (VAR_4 >= 0x7ff00000) ||
      ((VAR_5 | ((VAR_12 | -VAR_12) >> 31)) > 0x7ff00000))
  {
    return (VAR_1 * VAR_2) / (VAR_1 * VAR_2);
  }
  if (VAR_4 <= VAR_5)
  {
    if ((VAR_4 < VAR_5) || (VAR_11 < VAR_12))
    {
      return VAR_1;
    }
    if (VAR_11 == VAR_12)
    {
      return VAR_0[(unsigned) VAR_9 >> 31];
    }
  }


  if (VAR_4 < 0x00100000)
  {
    if (VAR_4 == 0)
    {
      for (VAR_7 = -1043, VAR_10 = VAR_11; VAR_10 > 0; VAR_10 <<= 1)
      {
        VAR_7 -= 1;
      }
    }
    else
    {
      for (VAR_7 = -1022, VAR_10 = (VAR_4 << 11); VAR_10 > 0; VAR_10 <<= 1)
      {
        VAR_7 -= 1;
      }
    }
  }
  else
  {
    VAR_7 = (VAR_4 >> 20) - 1023;
  }


  if (VAR_5 < 0x00100000)
  {
    if (VAR_5 == 0)
    {
      for (VAR_8 = -1043, VAR_10 = VAR_12; VAR_10 > 0; VAR_10 <<= 1)
      {
        VAR_8 -= 1;
      }
    }
    else
    {
      for (VAR_8 = -1022, VAR_10 = (VAR_5 << 11); VAR_10 > 0; VAR_10 <<= 1)
      {
        VAR_8 -= 1;
      }
    }
  }
  else
  {
    VAR_8 = (VAR_5 >> 20) - 1023;
  }


  if (VAR_7 >= -1022)
  {
    VAR_4 = 0x00100000 | (0x000fffff & VAR_4);
  }
  else
  {
    VAR_3 = -1022 - VAR_7;
    if (VAR_3 <= 31)
    {
      VAR_4 = (VAR_4 << VAR_3) | (VAR_11 >> (32 - VAR_3));
      VAR_11 <<= VAR_3;
    }
    else
    {
      VAR_4 = VAR_11 << (VAR_3 - 32);
      VAR_11 = 0;
    }
  }
  if (VAR_8 >= -1022)
  {
    VAR_5 = 0x00100000 | (0x000fffff & VAR_5);
  }
  else
  {
    VAR_3 = -1022 - VAR_8;
    if (VAR_3 <= 31)
    {
      VAR_5 = (VAR_5 << VAR_3) | (VAR_12 >> (32 - VAR_3));
      VAR_12 <<= VAR_3;
    }
    else
    {
      VAR_5 = VAR_12 << (VAR_3 - 32);
      VAR_12 = 0;
    }
  }


  VAR_3 = VAR_7 - VAR_8;
  while (VAR_3--)
  {
    VAR_6 = VAR_4 - VAR_5;
    VAR_13 = VAR_11 - VAR_12;
    if (VAR_11 < VAR_12)
    {
      VAR_6 -= 1;
    }
    if (VAR_6 < 0)
    {
      VAR_4 = VAR_4 + VAR_4 + (VAR_11 >> 31);
      VAR_11 = VAR_11 + VAR_11;
    }
    else
    {
      if ((VAR_6 | VAR_13) == 0)
      {
        return VAR_0[(unsigned) VAR_9 >> 31];
      }
      VAR_4 = VAR_6 + VAR_6 + (VAR_13 >> 31);
      VAR_11 = VAR_13 + VAR_13;
    }
  }
  VAR_6 = VAR_4 - VAR_5;
  VAR_13 = VAR_11 - VAR_12;
  if (VAR_11 < VAR_12)
  {
    VAR_6 -= 1;
  }
  if (VAR_6 >= 0)
  {
    VAR_4 = VAR_6;
    VAR_11 = VAR_13;
  }


  if ((VAR_4 | VAR_11) == 0)
  {
    return VAR_0[(unsigned) VAR_9 >> 31];
  }
  while (VAR_4 < 0x00100000)
  {
    VAR_4 = VAR_4 + VAR_4 + (VAR_11 >> 31);
    VAR_11 = VAR_11 + VAR_11;
    VAR_8 -= 1;
  }

  double_accessor VAR_14;
  if (VAR_8 >= -1022)
  {
    VAR_4 = ((VAR_4 - 0x00100000) | ((VAR_8 + 1023) << 20));
    VAR_14.as_int.hi = VAR_4 | VAR_9;
    VAR_14.as_int.lo = VAR_11;
  }
  else
  {
    VAR_3 = -1022 - VAR_8;
    if (VAR_3 <= 20)
    {
      VAR_11 = (VAR_11 >> VAR_3) | ((unsigned) VAR_4 << (32 - VAR_3));
      VAR_4 >>= VAR_3;
    }
    else if (VAR_3 <= 31)
    {
      VAR_11 = (VAR_4 << (32 - VAR_3)) | (VAR_11 >> VAR_3);
      VAR_4 = VAR_9;
    }
    else
    {
      VAR_11 = VAR_4 >> (VAR_3 - 32);
      VAR_4 = VAR_9;
    }
    VAR_14.as_int.hi = VAR_4 | VAR_9;
    VAR_14.as_int.lo = VAR_11;
  }
  return VAR_14.dbl;
}
