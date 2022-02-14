
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *) ;

__attribute__((used)) static struct tm *FUNC_1(timestamp_t VAR_0)
{
 time_t VAR_1 = VAR_0;
 return FUNC_0(&VAR_1);
}
