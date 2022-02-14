
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct max31722_data {int mode; struct spi_device* spi_device; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int**,int) ;

__attribute__((used)) static int FUNC_2(struct max31722_data *VAR_3, u8 VAR_4)
{
 int VAR_5;
 struct spi_device *VAR_6 = VAR_3->spi_device;
 u8 VAR_7[2] = {
  VAR_1 | VAR_2,
  (VAR_3->mode & VAR_0) | VAR_4
 };

 VAR_5 = FUNC_1(VAR_6, &VAR_7, sizeof(VAR_7));
 if (VAR_5 < 0) {
  FUNC_0(&VAR_6->dev, "failed to set sensor mode.\n");
  return VAR_5;
 }
 VAR_3->mode = (VAR_3->mode & VAR_0) | VAR_4;

 return 0;
}
