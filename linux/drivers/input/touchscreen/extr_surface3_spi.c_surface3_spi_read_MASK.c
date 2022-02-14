
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_ts_data {int rd_buf; struct spi_device* spi; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct spi_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct surface3_ts_data *VAR_0)
{
 struct spi_device *VAR_1 = VAR_0->spi;

 FUNC_0(VAR_0->rd_buf, 0, sizeof(VAR_0->rd_buf));
 return FUNC_1(VAR_1, VAR_0->rd_buf, sizeof(VAR_0->rd_buf));
}
