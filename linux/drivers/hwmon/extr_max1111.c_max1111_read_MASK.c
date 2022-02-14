
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct max1111_data {int* tx_buf; int sel_sh; int* rx_buf; int drvdata_lock; int msg; int spi; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct max1111_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, int VAR_7)
{
 struct max1111_data *VAR_8 = FUNC_1(VAR_6);
 uint8_t VAR_9, VAR_10;
 int VAR_11;


 FUNC_2(&VAR_8->drvdata_lock);

 VAR_8->tx_buf[0] = (VAR_7 << VAR_8->sel_sh) |
  VAR_1 | VAR_2 |
  VAR_3 | VAR_5 | VAR_4;

 VAR_11 = FUNC_4(VAR_8->spi, &VAR_8->msg);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "spi_sync failed with %d\n", VAR_11);
  FUNC_3(&VAR_8->drvdata_lock);
  return VAR_11;
 }

 VAR_9 = VAR_8->rx_buf[0];
 VAR_10 = VAR_8->rx_buf[1];

 FUNC_3(&VAR_8->drvdata_lock);

 if ((VAR_9 & 0xc0) || (VAR_10 & 0x3f))
  return -VAR_0;

 return (VAR_9 << 2) | (VAR_10 >> 6);
}
