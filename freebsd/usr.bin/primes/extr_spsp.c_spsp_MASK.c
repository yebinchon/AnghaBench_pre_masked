
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int
FUNC_1(uint64_t VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2;
 uint64_t VAR_3 = VAR_0 - 1;
 int VAR_4 = 0;


 while ((VAR_3 & 1) == 0) {
  VAR_4++;
  VAR_3 >>= 1;
 }


 VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_0);
 if (VAR_2 == 1)
  return (1);


 while (VAR_4 > 0) {
  if (VAR_2 == VAR_0 - 1)
   return (1);
  VAR_2 = FUNC_0(VAR_2, 2, VAR_0);
  VAR_4--;
 }


 return (0);
}
