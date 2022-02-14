
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_ts_data {struct spi_device* spi; } ;
struct spi_device {int bits_per_word; int irq; int dev; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct surface3_ts_data* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int ,char*,struct surface3_ts_data*) ;
 int FUNC_2 (struct spi_device*,struct surface3_ts_data*) ;
 int FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct surface3_ts_data*) ;
 int FUNC_5 (struct surface3_ts_data*) ;
 int FUNC_6 (struct surface3_ts_data*) ;
 int VAR_4 ;
 int FUNC_7 (struct surface3_ts_data*,int) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_5)
{
 struct surface3_ts_data *VAR_6;
 int VAR_7;


 VAR_5->bits_per_word = 8;
 VAR_5->mode = VAR_3;
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_0(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->spi = VAR_5;
 FUNC_2(VAR_5, VAR_6);

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_7(VAR_6, 1);
 FUNC_7(VAR_6, 0);
 FUNC_7(VAR_6, 1);

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(&VAR_5->dev, VAR_5->irq,
       ((void*)0), VAR_4,
       VAR_2,
       "Surface3-irq", VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
