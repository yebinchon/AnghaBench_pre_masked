
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct mpl115_spi_buf {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mpl115_spi_buf* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct spi_device*,struct mpl115_spi_buf*) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_2(VAR_2);
 struct mpl115_spi_buf *VAR_4;

 VAR_4 = FUNC_0(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_4);

 return 0;
}
