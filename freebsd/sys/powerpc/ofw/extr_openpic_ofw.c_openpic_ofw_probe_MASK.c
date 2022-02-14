
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0))
                return (VAR_0);

 if (!FUNC_3(VAR_2, "chrp,open-pic") &&
     FUNC_4(VAR_3, "open-pic") != 0)
                return (VAR_0);





 if (FUNC_0("/u4") != (phandle_t)-1)
  return (VAR_0);

 FUNC_1(VAR_2, VAR_1);
 return (0);
}
