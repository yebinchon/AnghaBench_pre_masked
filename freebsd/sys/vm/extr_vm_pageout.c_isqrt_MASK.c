
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u_int
FUNC_1(u_int VAR_0)
{
 u_int VAR_1, VAR_2, VAR_3;

 VAR_1 = VAR_0 != 0 ? (1u << ((FUNC_0(VAR_0) - 1) & ~1)) : 0;
 VAR_2 = 0;
 while (VAR_1 != 0) {
  VAR_3 = VAR_2 + VAR_1;
  VAR_2 >>= 1;
  if (VAR_0 >= VAR_3) {
   VAR_0 -= VAR_3;
   VAR_2 += VAR_1;
  }
  VAR_1 >>= 2;
 }
 return (VAR_2);
}
