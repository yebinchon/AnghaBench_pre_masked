
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ti_dac_chip {int resolution; int* buf; int spi; } ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct ti_dac_chip *VAR_0, u8 VAR_1, u16 VAR_2)
{
 u8 VAR_3 = 14 - VAR_0->resolution;

 VAR_0->buf[0] = (VAR_2 << VAR_3) & 0xFF;
 VAR_0->buf[1] = (VAR_1 << 6) | (VAR_2 >> (8 - VAR_3));
 return FUNC_0(VAR_0->spi, VAR_0->buf, 2);
}
