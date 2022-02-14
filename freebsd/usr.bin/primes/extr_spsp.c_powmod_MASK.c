
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static uint64_t
FUNC_1(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = 1;

 while (VAR_1 != 0) {
  if (VAR_1 & 1)
   VAR_3 = FUNC_0(VAR_0, VAR_3, VAR_2);
  VAR_0 = FUNC_0(VAR_0, VAR_0, VAR_2);
  VAR_1 >>= 1;
 }

 return (VAR_3);
}
