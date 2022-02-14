
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{

 if (!FUNC_0(VAR_3))
  return (VAR_0);

 FUNC_1(VAR_4, VAR_1, "GPIO%d", VAR_3);
 VAR_4[VAR_1-1] = '\0';

 return (0);
}
