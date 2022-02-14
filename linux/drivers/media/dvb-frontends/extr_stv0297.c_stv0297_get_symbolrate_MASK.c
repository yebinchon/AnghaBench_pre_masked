
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct stv0297_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stv0297_state*,int) ;

__attribute__((used)) static u32 FUNC_1(struct stv0297_state *VAR_1)
{
 u64 VAR_2;

 VAR_2 = (u64)(FUNC_0(VAR_1, 0x55)
      | (FUNC_0(VAR_1, 0x56) << 8)
      | (FUNC_0(VAR_1, 0x57) << 16)
      | (FUNC_0(VAR_1, 0x58) << 24));

 VAR_2 *= VAR_0;
 VAR_2 >>= 32;

 return (u32) VAR_2;
}
