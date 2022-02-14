
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int tx ;
struct spi_transfer {scalar_t__ len; int const* tx_buf; } ;
struct spi_message {int dummy; } ;
struct cxd2880_spi_device {int spi; } ;
struct cxd2880_spi {struct cxd2880_spi_device* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct cxd2880_spi *VAR_2,
        const u8 *VAR_3, u32 VAR_4)
{
 struct cxd2880_spi_device *VAR_5 = ((void*)0);
 struct spi_message VAR_6;
 struct spi_transfer VAR_7;
 int VAR_8 = 0;

 if (!VAR_2 || !VAR_2->user || !VAR_3 || VAR_4 == 0)
  return -VAR_0;

 VAR_5 = VAR_2->user;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.tx_buf = VAR_3;
 VAR_7.len = VAR_4;

 FUNC_2(&VAR_6);
 FUNC_1(&VAR_7, &VAR_6);
 VAR_8 = FUNC_3(VAR_5->spi, &VAR_6);

 if (VAR_8 < 0)
  return -VAR_1;

 return 0;
}
