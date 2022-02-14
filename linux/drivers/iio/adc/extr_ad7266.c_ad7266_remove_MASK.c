
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad7266_state {int reg; int gpios; int fixed_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad7266_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 struct iio_dev* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_7(VAR_0);
 struct ad7266_state *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 if (!VAR_2->fixed_addr)
  FUNC_2(VAR_2->gpios, FUNC_0(VAR_2->gpios));
 if (!FUNC_1(VAR_2->reg))
  FUNC_6(VAR_2->reg);

 return 0;
}
