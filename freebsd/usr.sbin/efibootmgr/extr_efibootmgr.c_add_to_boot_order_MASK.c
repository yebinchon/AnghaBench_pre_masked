
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int **,size_t*,int *) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,size_t) ;
 scalar_t__ FUNC_6 (char*,int *,size_t) ;
 int FUNC_7 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_3)
{
 size_t VAR_4;
 uint32_t VAR_5;
 uint16_t VAR_6;
 uint8_t *VAR_7, *VAR_8;

 VAR_6 = FUNC_7(&VAR_3[4], ((void*)0), 16);

 if (FUNC_0(VAR_0, "BootOrder", &VAR_7, &VAR_4, &VAR_5) < 0) {
  if (VAR_2 == VAR_1) {
   VAR_4 = 0;
   VAR_7 = ((void*)0);
  } else
   FUNC_1(1, "efi_get_variable BootOrder");
 }






 VAR_4 += sizeof(uint16_t);
 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8)
  FUNC_1(1, "malloc");

 FUNC_3(VAR_8, VAR_6);
 if (VAR_4 > sizeof(uint16_t))
  FUNC_5(VAR_8 + sizeof(uint16_t), VAR_7, VAR_4 - sizeof(uint16_t));

 if (FUNC_6("BootOrder", VAR_8, VAR_4) < 0)
  FUNC_1(1, "set_bootvar");
 FUNC_2(VAR_8);
}
