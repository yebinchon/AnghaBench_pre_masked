
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {int retries; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*) ;

int32_t
FUNC_3(char *VAR_2)
{
 uint32_t VAR_3;
 int32_t VAR_4;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_4 = VAR_0;
 VAR_0 = 0;

 VAR_3 = FUNC_1(VAR_2, ((void*)0), 10);
 if (VAR_0 != 0) {
  FUNC_2("Error parsing retries count");
  VAR_0 = VAR_4;
  return (-1);
 }

 VAR_1.retries = VAR_3;
 VAR_0 = VAR_4;
 return (2);
}
