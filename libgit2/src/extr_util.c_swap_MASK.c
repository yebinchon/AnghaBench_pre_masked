
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int tmp ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 char VAR_3[256];

 while (VAR_2) {
  size_t VAR_4 = VAR_2 < sizeof(VAR_3) ? VAR_2 : sizeof(VAR_3);
  FUNC_0(VAR_3, VAR_0 + VAR_2 - VAR_4, VAR_4);
  FUNC_0(VAR_0 + VAR_2 - VAR_4, VAR_1 + VAR_2 - VAR_4, VAR_4);
  FUNC_0(VAR_1 + VAR_2 - VAR_4, VAR_3, VAR_4);
  VAR_2 -= VAR_4;
 }
}
