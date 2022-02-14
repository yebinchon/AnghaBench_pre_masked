
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 VAR_3 = VAR_0 / 3333;
 if ((VAR_3 % 10) >= 5)
  VAR_3 += 5;

 VAR_3 /= 10;

 VAR_2 = 100 * VAR_3 * VAR_1;
 VAR_2 = VAR_2 / 3;
 if (VAR_2 > 0xfffff) {
  FUNC_0("SGTC too large %d\n", VAR_2);
  VAR_2 = 0xfffff;
 }
 return VAR_2;
}
