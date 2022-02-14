
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int cs_change; int len; int rx_buf; void* delay_usecs; int tx_buf; } ;
struct spi_message {int dummy; } ;
struct TYPE_2__ {void* spi_cs_delay; } ;
struct applespi_data {int tx_status; int tx_buffer; TYPE_1__ spi_settings; struct spi_transfer st_t; struct spi_transfer wr_t; struct spi_transfer wd_t; struct spi_transfer ww_t; struct spi_message wr_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;

__attribute__((used)) static void FUNC_3(struct applespi_data *VAR_3)
{
 struct spi_message *VAR_4 = &VAR_3->wr_m;
 struct spi_transfer *VAR_5 = &VAR_3->ww_t;
 struct spi_transfer *VAR_6 = &VAR_3->wd_t;
 struct spi_transfer *VAR_7 = &VAR_3->wr_t;
 struct spi_transfer *VAR_8 = &VAR_3->st_t;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 FUNC_0(VAR_8, 0, sizeof(*VAR_8));







 VAR_5->delay_usecs = VAR_2;
 VAR_5->cs_change = 1;

 VAR_6->delay_usecs = VAR_3->spi_settings.spi_cs_delay;

 VAR_7->tx_buf = VAR_3->tx_buffer;
 VAR_7->len = VAR_0;
 VAR_7->delay_usecs = VAR_2;

 VAR_8->rx_buf = VAR_3->tx_status;
 VAR_8->len = VAR_1;

 FUNC_2(VAR_4);
 FUNC_1(VAR_5, VAR_4);
 FUNC_1(VAR_6, VAR_4);
 FUNC_1(VAR_7, VAR_4);
 FUNC_1(VAR_8, VAR_4);
}
