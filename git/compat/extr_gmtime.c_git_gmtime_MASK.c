
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int const*,struct tm*) ;

struct tm *FUNC_1(const time_t *VAR_0)
{
 static struct tm VAR_1;
 return FUNC_0(VAR_0, &VAR_1);
}
