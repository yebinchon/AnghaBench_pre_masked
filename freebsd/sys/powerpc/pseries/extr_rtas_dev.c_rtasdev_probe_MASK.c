
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 const char *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_2, "rtas") != 0)
  return (VAR_0);
 if (!FUNC_2())
  return (VAR_0);

 FUNC_0(VAR_1, "Run-Time Abstraction Services");
 return (0);
}
