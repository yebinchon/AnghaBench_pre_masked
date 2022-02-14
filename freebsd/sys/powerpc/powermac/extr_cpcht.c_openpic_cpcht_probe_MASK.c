
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_3, "open-pic") != 0)
                return (VAR_0);

 FUNC_0(VAR_2, VAR_1);
 return (0);
}
