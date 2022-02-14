
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct timeval {int dummy; } ;


 int FUNC_0 (char const*,struct timeval const*,int*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char const*,int *,int*) ;

timestamp_t FUNC_3(const char *VAR_0)
{
 struct timeval VAR_1;
 timestamp_t VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 if (!FUNC_2(VAR_0, &VAR_2, &VAR_3))
  return VAR_2;

 FUNC_1(&VAR_1);
 return FUNC_0(VAR_0, (const struct timeval *) &VAR_1, &VAR_4);
}
