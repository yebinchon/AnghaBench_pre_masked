
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buffer ;


 size_t FUNC_0 (int ,char*,size_t) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static uint8_t *
FUNC_2(char *VAR_0, size_t *VAR_1)
{
 static char VAR_2[16*1024];

 if (VAR_0 != ((void*)0)) {
  *VAR_1 = FUNC_1(VAR_0);
  return ((uint8_t *)VAR_0);
 }

 *VAR_1 = sizeof(VAR_2);
 *VAR_1 = FUNC_0(0, VAR_2, *VAR_1);
 return ((uint8_t *)VAR_2);
}
