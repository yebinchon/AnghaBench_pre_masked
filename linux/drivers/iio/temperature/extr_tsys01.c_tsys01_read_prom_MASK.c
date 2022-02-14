
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsys01_dev {int (* read_prom_word ) (int ,scalar_t__,int*) ;int* prom; int client; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 struct tsys01_dev* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,scalar_t__,int*) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3)
{
 int VAR_4, VAR_5;
 struct tsys01_dev *VAR_6 = FUNC_2(VAR_3);
 char VAR_7[7 * VAR_2 + 1];
 char *VAR_8 = VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_6->read_prom_word(VAR_6->client,
            VAR_1 + (VAR_4 << 1),
            &VAR_6->prom[VAR_4]);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_3(VAR_8, "0x%04x ", VAR_6->prom[VAR_4]);
  VAR_8 += VAR_5;
 }

 if (!FUNC_5(VAR_6->prom)) {
  FUNC_0(&VAR_3->dev, "prom crc check error\n");
  return -VAR_0;
 }
 *VAR_8 = 0;
 FUNC_1(&VAR_3->dev, "PROM coefficients : %s\n", VAR_7);

 return 0;
}
