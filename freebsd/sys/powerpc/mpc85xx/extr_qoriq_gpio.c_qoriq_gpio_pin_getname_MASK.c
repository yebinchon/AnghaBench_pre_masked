
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{

 if (!FUNC_0(VAR_3))
  return (VAR_0);

 FUNC_2(VAR_4, VAR_1, "qoriq_gpio%d.%d",
     FUNC_1(VAR_2), VAR_3);
 VAR_4[VAR_1-1] = '\0';

 return (0);
}
