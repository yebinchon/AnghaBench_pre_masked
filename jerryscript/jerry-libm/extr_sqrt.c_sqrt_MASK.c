
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; unsigned int lo; } ;
struct TYPE_4__ {scalar_t__ dbl; TYPE_1__ as_int; } ;
typedef TYPE_2__ double_accessor ;


 int FUNC_0 (double) ;
 unsigned int FUNC_1 (double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

double
FUNC_2 (double VAR_2)
{
  int VAR_3 = (int) 0x80000000;
  unsigned VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

  VAR_9 = FUNC_0 (VAR_2);
  VAR_7 = FUNC_1 (VAR_2);


  if ((VAR_9 & 0x7ff00000) == 0x7ff00000)
  {
    return VAR_2 * VAR_2 + VAR_2;
  }

  if (VAR_9 <= 0)
  {
    if (((VAR_9 & (~VAR_3)) | VAR_7) == 0)
    {
      return VAR_2;
    }
    else if (VAR_9 < 0)
    {
      return (VAR_2 - VAR_2) / (VAR_2 - VAR_2);
    }
  }

  VAR_12 = (VAR_9 >> 20);
  if (VAR_12 == 0)
  {
    while (VAR_9 == 0)
    {
      VAR_12 -= 21;
      VAR_9 |= (VAR_7 >> 11);
      VAR_7 <<= 21;
    }
    for (VAR_14 = 0; (VAR_9 & 0x00100000) == 0; VAR_14++)
    {
      VAR_9 <<= 1;
    }
    VAR_12 -= VAR_14 - 1;
    VAR_9 |= (VAR_7 >> (32 - VAR_14));
    VAR_7 <<= VAR_14;
  }
  VAR_12 -= 1023;
  VAR_9 = (VAR_9 & 0x000fffff) | 0x00100000;
  if (VAR_12 & 1)
  {
    VAR_9 += VAR_9 + ((VAR_7 & VAR_3) >> 31);
    VAR_7 += VAR_7;
  }
  VAR_12 >>= 1;


  VAR_9 += VAR_9 + ((VAR_7 & VAR_3) >> 31);
  VAR_7 += VAR_7;
  VAR_11 = VAR_8 = VAR_10 = VAR_6 = 0;
  VAR_4 = 0x00200000;

  while (VAR_4 != 0)
  {
    VAR_13 = VAR_10 + VAR_4;
    if (VAR_13 <= VAR_9)
    {
      VAR_10 = VAR_13 + VAR_4;
      VAR_9 -= VAR_13;
      VAR_11 += VAR_4;
    }
    VAR_9 += VAR_9 + ((VAR_7 & VAR_3) >> 31);
    VAR_7 += VAR_7;
    VAR_4 >>= 1;
  }

  VAR_4 = VAR_3;
  while (VAR_4 != 0)
  {
    VAR_5 = VAR_6 + VAR_4;
    VAR_13 = VAR_10;
    if ((VAR_13 < VAR_9) || ((VAR_13 == VAR_9) && (VAR_5 <= VAR_7)))
    {
      VAR_6 = VAR_5 + VAR_4;
      if (((VAR_5 & VAR_3) == VAR_3) && (VAR_6 & VAR_3) == 0)
      {
        VAR_10 += 1;
      }
      VAR_9 -= VAR_13;
      if (VAR_7 < VAR_5)
      {
        VAR_9 -= 1;
      }
      VAR_7 -= VAR_5;
      VAR_8 += VAR_4;
    }
    VAR_9 += VAR_9 + ((VAR_7 & VAR_3) >> 31);
    VAR_7 += VAR_7;
    VAR_4 >>= 1;
  }

  double_accessor VAR_15;


  if ((VAR_9 | VAR_7) != 0)
  {
    VAR_15.dbl = VAR_0 - VAR_1;
    if (VAR_15.dbl >= VAR_0)
    {
      VAR_15.dbl = VAR_0 + VAR_1;
      if (VAR_8 == (unsigned) 0xffffffff)
      {
        VAR_8 = 0;
        VAR_11 += 1;
      }
      else if (VAR_15.dbl > VAR_0)
      {
        if (VAR_8 == (unsigned) 0xfffffffe)
        {
          VAR_11 += 1;
        }
        VAR_8 += 2;
      }
      else
      {
        VAR_8 += (VAR_8 & 1);
      }
    }
  }
  VAR_9 = (VAR_11 >> 1) + 0x3fe00000;
  VAR_7 = VAR_8 >> 1;
  if ((VAR_11 & 1) == 1)
  {
    VAR_7 |= VAR_3;
  }
  VAR_9 += (VAR_12 << 20);
  VAR_15.as_int.hi = VAR_9;
  VAR_15.as_int.lo = VAR_7;
  return VAR_15.dbl;
}
