
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv6110x_state {int regs; } ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct stv6110x_state *VAR_0)
{
 u8 VAR_1[] = {0x07, 0x11, 0xdc, 0x85, 0x17, 0x01, 0xe6, 0x1e};

 FUNC_0(VAR_0->regs, VAR_1, 8);
}
