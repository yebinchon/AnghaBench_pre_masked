
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct timeval {int dummy; } ;


 int FUNC_0 (char const*,struct timeval*,int*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char const*,int *,int*) ;

timestamp_t FUNC_3(const char *VAR_0, int *VAR_1)
{
 struct timeval VAR_2;
 timestamp_t VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 if (!VAR_1)
  VAR_1 = &VAR_5;

 if (!FUNC_2(VAR_0, &VAR_3, &VAR_4)) {
  *VAR_1 = 0;
  return VAR_3;
 }

 FUNC_1(&VAR_2);
 return FUNC_0(VAR_0, &VAR_2, VAR_1);
}
