
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb4xx_spi {int ahb_freq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(struct rb4xx_spi *VAR_1, unsigned VAR_2,
        const char *VAR_3)
{
 unsigned VAR_4;

 VAR_4 = (VAR_1->ahb_freq - 1) / (2 * VAR_2);




 if (VAR_4 == 0)
  ++VAR_4;

 if (VAR_3) {
  unsigned VAR_5 = (VAR_1->ahb_freq + 500) / 1000;
  unsigned VAR_6 = 2 * (VAR_4 + 1);
  FUNC_0("rb4xx: %s SPI clock %u kHz (AHB %u kHz / %u)\n",
         VAR_3,
         VAR_5 / VAR_6,
         VAR_5, VAR_6);
 }

 return VAR_0 + VAR_4;
}
