
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int tv_sec; } ;
struct TYPE_4__ {TYPE_1__ timeout; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*) ;

int32_t
FUNC_3(char *VAR_2)
{
 int32_t VAR_3, VAR_4;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_4 = VAR_0;
 VAR_0 = 0;

 VAR_3 = FUNC_1(VAR_2, ((void*)0), 10);
 if (VAR_0 != 0) {
  FUNC_2("Error parsing timeout value");
  VAR_0 = VAR_4;
  return (-1);
 }

 VAR_1.timeout.tv_sec = VAR_3;
 VAR_0 = VAR_4;
 return (2);
}
