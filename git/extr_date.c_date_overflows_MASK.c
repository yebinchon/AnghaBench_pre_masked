
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int timestamp_t ;
typedef int time_t ;


 scalar_t__ VAR_0 ;

int FUNC_0(timestamp_t VAR_1)
{
 time_t VAR_2;


 if ((uintmax_t)VAR_1 >= VAR_0)
  return 1;






 VAR_2 = VAR_1;
 return VAR_1 != VAR_2 || (VAR_1 < 1) != (VAR_2 < 1);
}
