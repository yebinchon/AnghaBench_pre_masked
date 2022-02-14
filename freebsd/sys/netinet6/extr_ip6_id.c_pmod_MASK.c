
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;



__attribute__((used)) static u_int32_t
FUNC_0(u_int32_t VAR_0, u_int32_t VAR_1, u_int32_t VAR_2)
{
 u_int64_t VAR_3, VAR_4, VAR_5;

 VAR_3 = 1;
 VAR_4 = VAR_0;
 VAR_5 = VAR_1;

 while (VAR_5) {
  if (VAR_5 & 1)
   VAR_3 = (VAR_3 * VAR_4) % VAR_2;
  VAR_5 >>= 1;
  VAR_4 = (VAR_4 * VAR_4) % VAR_2;
 }
 return (VAR_3);
}
