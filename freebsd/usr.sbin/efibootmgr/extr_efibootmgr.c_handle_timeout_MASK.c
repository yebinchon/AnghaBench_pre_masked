
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int timeout ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0)
{
 uint16_t VAR_1;

 FUNC_1(&VAR_1, VAR_0);
 if (FUNC_2("Timeout", (uint8_t *)&VAR_1, sizeof(VAR_1)) < 0)
  FUNC_0(1, "Can't set Timeout for booting.");
}
