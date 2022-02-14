
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms5611_state {int (* read_prom_word ) (int *,int,int *) ;TYPE_1__* chip_info; } ;
struct iio_dev {int dev; } ;
struct TYPE_2__ {int * prom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 struct ms5611_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2)
{
 int VAR_3, VAR_4;
 struct ms5611_state *VAR_5 = FUNC_1(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = VAR_5->read_prom_word(&VAR_2->dev,
      VAR_4, &VAR_5->chip_info->prom[VAR_4]);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_2->dev,
    "failed to read prom at %d\n", VAR_4);
   return VAR_3;
  }
 }

 if (!FUNC_2(VAR_5->chip_info->prom, VAR_1)) {
  FUNC_0(&VAR_2->dev, "PROM integrity check failed\n");
  return -VAR_0;
 }

 return 0;
}
