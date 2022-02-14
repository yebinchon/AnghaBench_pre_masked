
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct spi_slave {int cs; } ;
struct ar71xx_spi_slave {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 struct ar71xx_spi_slave* FUNC_5 (struct spi_slave*) ;

int FUNC_6(struct spi_slave *VAR_10, unsigned int VAR_11, const void *VAR_12,
  void *VAR_13, unsigned long VAR_14)
{
 struct ar71xx_spi_slave *VAR_15 = FUNC_5(VAR_10);
 uint8_t *VAR_16 = VAR_13;
 const uint8_t *VAR_17 = VAR_12;
 uint8_t VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21 = VAR_11 / 8;
 uint32_t VAR_22;
 uint32_t VAR_23;

 FUNC_1("ar71xx_spi: spi_xfer: slave:%p bitlen:%08x dout:%p din:%p flags:%08x\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 if (VAR_14 & VAR_8) {
  FUNC_4(VAR_1, FUNC_0(VAR_0 + VAR_5));
  FUNC_4(VAR_3, FUNC_0(VAR_0 + VAR_6));
 }

 VAR_20 = (VAR_11 % 8);
 if (VAR_20 != 0)
  VAR_21++;


 VAR_22 = VAR_3 & ~(FUNC_2(VAR_10->cs));

 while (VAR_21--) {

  VAR_18 = 0;
  if (VAR_17) {
   VAR_18 = *VAR_17++;
  }

  if (VAR_20 != 0) {
   VAR_19 = VAR_20;
   VAR_18 <<= 8 - VAR_20;
  } else {
   VAR_19 = 8;
  }

  FUNC_1("ar71xx_spi: sending: data:%02x length:%d\n", VAR_18, VAR_19);


  for (VAR_18 <<= (8 - VAR_19); VAR_19; VAR_19--) {

   if (VAR_18 & (1 << 7))
    VAR_22 |= VAR_4;
   else
    VAR_22 &= ~(VAR_4);


   FUNC_4(VAR_22, FUNC_0(VAR_0 + VAR_6));

   FUNC_4(VAR_22 | VAR_2, FUNC_0(VAR_0 + VAR_6));

   VAR_18 <<= 1;
  }

  VAR_23 = FUNC_3(FUNC_0(VAR_0 + VAR_7));
  FUNC_1("ar71xx_spi: received:%02x\n", VAR_23);

  if (VAR_16) {
   if (VAR_20 == 0) {
    *VAR_16++ = VAR_23;
   } else {
    *VAR_16++ = (VAR_23 << (8 - VAR_20));
   }
  }
 }

 if (VAR_14 & VAR_9) {
  FUNC_4(FUNC_2(VAR_10->cs), FUNC_0(VAR_0 + VAR_6));
  FUNC_4(VAR_3, FUNC_0(VAR_0 + VAR_6));
  FUNC_4(0, FUNC_0(VAR_0 + VAR_5));
 }

 FUNC_1(" ---> out\n");

 return 0;
}
