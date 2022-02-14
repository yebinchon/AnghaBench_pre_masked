
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cns3xxx_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cns3xxx_spi*) ;
 int FUNC_1 (struct cns3xxx_spi*) ;

u8 FUNC_2(struct cns3xxx_spi *VAR_2, u8 VAR_3, u8 VAR_4, u32 VAR_5)
{

        while (!FUNC_0(VAR_2)) ;

        while (!FUNC_1(VAR_2)) ;

        VAR_1 &= ~(0x7);
        VAR_1 |= (VAR_3 & 0x3) | ((VAR_4 & 0x1) << 2);

        VAR_0 = VAR_5;

        return 1;
}
