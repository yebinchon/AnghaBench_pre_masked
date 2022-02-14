
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; } ;
struct fsl_espi_softc {int sc_num_cs; int sc_flags; scalar_t__ sc_len; int sc_dev; int sc_mtx; scalar_t__ sc_written; scalar_t__ sc_read; struct spi_command* sc_cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct fsl_espi_softc*) ;
 int FUNC_4 (struct fsl_espi_softc*) ;
 int FUNC_5 (struct fsl_espi_softc*,int ,int) ;
 int FUNC_6 (int,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ) ;
 struct fsl_espi_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int,int) ;
 int VAR_21 ;
 int FUNC_11 (int,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *,int ,char*,int) ;
 int FUNC_14 (int ,int*) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,int*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_22, device_t VAR_23, struct spi_command *VAR_24)
{
 struct fsl_espi_softc *VAR_25;
 u_long VAR_26;
 uint32_t VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32;

 VAR_25 = FUNC_8(VAR_22);

 FUNC_6(VAR_24->tx_cmd_sz == VAR_24->rx_cmd_sz,
     ("TX/RX command sizes should be equal"));
 FUNC_6(VAR_24->tx_data_sz == VAR_24->rx_data_sz,
     ("TX/RX data sizes should be equal"));


 if (VAR_24->tx_cmd_sz + VAR_24->tx_data_sz > VAR_10 + 1) {
  return (VAR_0);
 }


 FUNC_15(VAR_23, &VAR_30);
 if (VAR_30 < 0 || VAR_30 > VAR_25->sc_num_cs) {
  FUNC_9(VAR_22,
      "Invalid chip select %d requested by %s\n", VAR_30,
      FUNC_7(VAR_23));
  return (VAR_0);
 }
 FUNC_14(VAR_23, &VAR_28);
 FUNC_16(VAR_23, &VAR_29);

 FUNC_3(VAR_25);


 while (VAR_25->sc_flags & VAR_16)
  FUNC_13(VAR_22, &VAR_25->sc_mtx, 0, "fsl_espi", 0);


 VAR_25->sc_flags = VAR_16;


 VAR_25->sc_cmd = VAR_24;
 VAR_25->sc_read = 0;
 VAR_25->sc_written = 0;
 VAR_25->sc_len = VAR_24->tx_cmd_sz + VAR_24->tx_data_sz;

 VAR_26 = FUNC_12();
 VAR_28 = FUNC_11(VAR_28, VAR_26 / (16 * 16));
 if (VAR_26 == 0) {
  FUNC_9(VAR_22,
      "unable to get platform clock, giving up.\n");
  return (VAR_0);
 }
 VAR_27 = 0;
 if (VAR_26 > VAR_28 * 16 * 2) {
  VAR_27 |= VAR_4;
  VAR_26 /= 16;
 }
 VAR_32 = FUNC_10(VAR_26, VAR_28 * 2) - 1;
 if (VAR_32 < 0)
  VAR_32 = 1;
 if (VAR_32 > 15)
  VAR_32 = 15;

 VAR_27 |= (VAR_32 << VAR_5);
 VAR_27 |= VAR_7;
 if (VAR_29 == VAR_19 || VAR_29 == VAR_20)
  VAR_27 |= VAR_2;
 if (VAR_29 == VAR_18 || VAR_29 == VAR_20)
  VAR_27 |= VAR_3;
 if (!(VAR_30 & VAR_17))
  VAR_27 |= VAR_6;
 VAR_27 |= FUNC_2(7);
 VAR_27 |= FUNC_1(1);

 FUNC_5(VAR_25, VAR_8, (VAR_30 << VAR_9) | (VAR_25->sc_len - 1));
 FUNC_5(VAR_25, FUNC_0(VAR_30), VAR_27);

 FUNC_5(VAR_25, VAR_14,
     VAR_13 | VAR_11 | VAR_12);


 VAR_31 = FUNC_13(VAR_22, &VAR_25->sc_mtx, 0, "fsl_espi", VAR_21 * 2);
 FUNC_5(VAR_25, VAR_14, 0);


 VAR_25->sc_flags = 0;
 FUNC_17(VAR_22);
 FUNC_4(VAR_25);





 if (VAR_31 == VAR_15) {
  FUNC_9(VAR_25->sc_dev, "SPI error\n");
  VAR_31 = VAR_1;
 }

 return (VAR_31);
}
