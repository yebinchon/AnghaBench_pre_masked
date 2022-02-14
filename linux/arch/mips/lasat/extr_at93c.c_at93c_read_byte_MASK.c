
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 () ;

__attribute__((used)) static u8 FUNC_1(void)
{
 int VAR_0;
 u8 VAR_1 = 0;

 for (VAR_0 = 0; VAR_0 <= 7; VAR_0++) {
  VAR_1 <<= 1;
  VAR_1 |= FUNC_0();
 }
 return VAR_1;
}
