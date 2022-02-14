
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct regulator {int dummy; } ;
struct iio_dev {int dummy; } ;
struct adf4350_state {scalar_t__ clk; int * regs; struct regulator* reg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct adf4350_state*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct iio_dev*) ;
 struct adf4350_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct regulator*) ;
 struct iio_dev* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_6(VAR_2);
 struct adf4350_state *VAR_4 = FUNC_4(VAR_3);
 struct regulator *VAR_5 = VAR_4->reg;

 VAR_4->regs[VAR_0] |= VAR_1;
 FUNC_1(VAR_4);

 FUNC_3(VAR_3);

 if (VAR_4->clk)
  FUNC_2(VAR_4->clk);

 if (!FUNC_0(VAR_5))
  FUNC_5(VAR_5);

 return 0;
}
