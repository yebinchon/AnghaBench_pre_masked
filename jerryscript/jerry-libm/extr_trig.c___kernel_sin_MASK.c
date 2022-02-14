
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int FUNC_0 (double) ;
 double VAR_6 ;

__attribute__((used)) static double
FUNC_1 (double VAR_7, double VAR_8, int VAR_9)
{
  double VAR_10, VAR_11, VAR_12;
  int VAR_13;

  VAR_13 = FUNC_0 (VAR_7) & 0x7fffffff;
  if (VAR_13 < 0x3e400000)
  {
    if ((int) VAR_7 == 0)
    {
      return VAR_7;
    }
  }
  VAR_10 = VAR_7 * VAR_7;
  VAR_12 = VAR_10 * VAR_7;
  VAR_11 = VAR_1 + VAR_10 * (VAR_2 + VAR_10 * (VAR_3 + VAR_10 * (VAR_4 + VAR_10 * VAR_5)));
  if (VAR_9 == 0)
  {
    return VAR_7 + VAR_12 * (VAR_0 + VAR_10 * VAR_11);
  }
  else
  {
    return VAR_7 - ((VAR_10 * (VAR_6 * VAR_8 - VAR_12 * VAR_11) - VAR_8) - VAR_12 * VAR_0);
  }
}
