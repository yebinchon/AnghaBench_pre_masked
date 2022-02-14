
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_ioc_transfer {unsigned long tx_buf; unsigned long rx_buf; size_t len; int tx_nbits; int rx_nbits; int bits_per_word; int speed_hz; int delay_usecs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int const*,size_t,int,char*) ;
 int FUNC_2 (int,int ,struct spi_ioc_transfer*) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_4(int VAR_10, uint8_t const *VAR_11, uint8_t const *VAR_12, size_t VAR_13)
{
 int VAR_14;

 struct spi_ioc_transfer VAR_15 = {
  .tx_buf = (unsigned long)VAR_11,
  .rx_buf = (unsigned long)VAR_12,
  .len = VAR_13,
  .delay_usecs = VAR_6,
  .speed_hz = VAR_8,
  .bits_per_word = VAR_5,
 };

 if (VAR_7 & VAR_4)
  VAR_15.tx_nbits = 4;
 else if (VAR_7 & VAR_3)
  VAR_15.tx_nbits = 2;
 if (VAR_7 & VAR_2)
  VAR_15.rx_nbits = 4;
 else if (VAR_7 & VAR_1)
  VAR_15.rx_nbits = 2;
 if (!(VAR_7 & VAR_0)) {
  if (VAR_7 & (VAR_4 | VAR_3))
   VAR_15.rx_buf = 0;
  else if (VAR_7 & (VAR_2 | VAR_1))
   VAR_15.tx_buf = 0;
 }

 VAR_14 = FUNC_2(VAR_10, FUNC_0(1), &VAR_15);
 if (VAR_14 < 1)
  FUNC_3("can't send spi message");

 if (VAR_9)
  FUNC_1(VAR_11, VAR_13, 32, "TX");
 FUNC_1(VAR_12, VAR_13, 32, "RX");
}
