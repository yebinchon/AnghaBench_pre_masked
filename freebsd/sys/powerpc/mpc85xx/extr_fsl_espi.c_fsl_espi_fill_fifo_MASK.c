
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct spi_command {size_t tx_cmd_sz; scalar_t__ tx_data; scalar_t__ tx_cmd; } ;
struct fsl_espi_softc {scalar_t__ sc_written; scalar_t__ sc_len; struct spi_command* sc_cmd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct fsl_espi_softc*,int ) ;
 int FUNC_1 (struct fsl_espi_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct fsl_espi_softc *VAR_3)
{
 struct spi_command *VAR_4;
 uint32_t VAR_5, VAR_6;
 uint8_t *VAR_7;

 VAR_4 = VAR_3->sc_cmd;
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 while (VAR_3->sc_written < VAR_3->sc_len &&
     (VAR_5 & VAR_1)) {
  VAR_7 = (uint8_t *)VAR_4->tx_cmd;
  VAR_6 = VAR_3->sc_written++;
  if (VAR_6 >= VAR_4->tx_cmd_sz) {
   VAR_7 = (uint8_t *)VAR_4->tx_data;
   VAR_6 -= VAR_4->tx_cmd_sz;
  }
  FUNC_1(VAR_3, VAR_2, VAR_7[VAR_6]);
  VAR_5 = FUNC_0(VAR_3, VAR_0);
 }
}
