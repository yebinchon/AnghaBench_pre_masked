
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
typedef int msg ;


 int FUNC_0 (struct spi_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0,
        u8 VAR_1, u8 VAR_2, u16 VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 u8 VAR_6[3];
 VAR_5 = (VAR_1 << 20) | (VAR_2 << 16) | (VAR_3 << VAR_4);
 VAR_6[0] = VAR_5 >> 16;
 VAR_6[1] = VAR_5 >> 8;
 VAR_6[2] = VAR_5;

 return FUNC_0(VAR_0, VAR_6, sizeof(VAR_6));
}
