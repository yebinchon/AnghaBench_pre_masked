
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int rx_buf; int delay_usecs; } ;
struct spi_message {int dummy; } ;
struct TYPE_2__ {int spi_cs_delay; } ;
struct applespi_data {int rx_buffer; TYPE_1__ spi_settings; struct spi_transfer rd_t; struct spi_transfer dl_t; struct spi_message rd_m; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;

__attribute__((used)) static void FUNC_3(struct applespi_data *VAR_1)
{
 struct spi_message *VAR_2 = &VAR_1->rd_m;
 struct spi_transfer *VAR_3 = &VAR_1->dl_t;
 struct spi_transfer *VAR_4 = &VAR_1->rd_t;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_3->delay_usecs = VAR_1->spi_settings.spi_cs_delay;

 VAR_4->rx_buf = VAR_1->rx_buffer;
 VAR_4->len = VAR_0;

 FUNC_2(VAR_2);
 FUNC_1(VAR_3, VAR_2);
 FUNC_1(VAR_4, VAR_2);
}
