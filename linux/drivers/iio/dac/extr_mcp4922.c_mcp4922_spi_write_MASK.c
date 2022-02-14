
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mcp4922_state {int* mosi; int spi; } ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct mcp4922_state *VAR_0, u8 VAR_1, u32 VAR_2)
{
 VAR_0->mosi[1] = VAR_2 & 0xff;
 VAR_0->mosi[0] = (VAR_1 == 0) ? 0x00 : 0x80;
 VAR_0->mosi[0] |= 0x30 | ((VAR_2 >> 8) & 0x0f);

 return FUNC_0(VAR_0->spi, VAR_0->mosi, 2);
}
