
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (long,long) ;

long
FUNC_1 (long VAR_0, long VAR_1)
{
  long VAR_2;

  VAR_2 = FUNC_0((VAR_0 < 0 ? -VAR_0 : VAR_0),
                (VAR_1 < 0 ? -VAR_1 : VAR_1));
  if ( (VAR_0 < 0) ^ (VAR_1 < 0))
    return -VAR_2;
  else
    return VAR_2;
}
