
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct tm* FUNC_1 (int *) ;

__attribute__((used)) static struct tm *FUNC_2(timestamp_t VAR_0, int VAR_1)
{
 time_t VAR_2 = FUNC_0(VAR_0, VAR_1);
 return FUNC_1(&VAR_2);
}
