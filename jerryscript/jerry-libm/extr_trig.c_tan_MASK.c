
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double,double*) ;
 double FUNC_2 (double,double,int) ;

double
FUNC_3 (double VAR_0)
{
  double VAR_1[2], VAR_2 = 0.0;
  int VAR_3, VAR_4;


  VAR_4 = FUNC_0 (VAR_0);


  VAR_4 &= 0x7fffffff;
  if (VAR_4 <= 0x3fe921fb)
  {
    return FUNC_2 (VAR_0, VAR_2, 1);
  }


  else if (VAR_4 >= 0x7ff00000)
  {
    return VAR_0 - VAR_0;
  }


  else
  {
    VAR_3 = FUNC_1 (VAR_0, VAR_1);
    return FUNC_2 (VAR_1[0], VAR_1[1], 1 - ((VAR_3 & 1) << 1));
  }
}
