
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int **,size_t*,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (char*,int *,size_t) ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(uint16_t VAR_1)
{
 uint32_t VAR_2;
 size_t VAR_3, VAR_4, VAR_5;
 uint8_t *VAR_6, *VAR_7;

 if (FUNC_0(VAR_0, "BootOrder", &VAR_7, &VAR_3, &VAR_2) < 0)
  return;

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 == ((void*)0))
  FUNC_1(1, "malloc");

 for (VAR_5 = VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += sizeof(uint16_t)) {
  if (FUNC_3(VAR_7 + VAR_4) == VAR_1)
   continue;
  FUNC_5(VAR_6 + VAR_5, VAR_7 + VAR_4, sizeof(uint16_t));
  VAR_5 += sizeof(uint16_t);
 }
 if (VAR_4 == VAR_5)
  FUNC_7("Boot variable %04x not in BootOrder", VAR_1);
 else if (FUNC_6("BootOrder", VAR_6, VAR_5) < 0)
  FUNC_1(1, "Unable to update BootOrder with new value");
 FUNC_2(VAR_6);
}
