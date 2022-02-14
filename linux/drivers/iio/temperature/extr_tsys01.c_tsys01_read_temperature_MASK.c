
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsys01_dev {int (* convert_and_read ) (int ,int ,int ,int,int*) ;scalar_t__* prom; int lock; int client; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,int) ;
 struct tsys01_dev* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       s32 *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;
 s64 VAR_8 = 0;
 struct tsys01_dev *VAR_9 = FUNC_1(VAR_3);

 FUNC_2(&VAR_9->lock);
 VAR_5 = VAR_9->convert_and_read(VAR_9->client,
      VAR_1,
      VAR_0, 9000, &VAR_7);
 FUNC_3(&VAR_9->lock);
 if (VAR_5)
  return VAR_5;

 VAR_7 >>= 8;


 for (VAR_6 = 4; VAR_6 > 0; VAR_6--) {
  VAR_8 += VAR_2[VAR_6] *
   (s64)VAR_9->prom[5 - VAR_6];
  VAR_8 *= (s64)VAR_7;
  VAR_8 = FUNC_0(VAR_8, 100000);
 }
 VAR_8 *= 10;
 VAR_8 += VAR_2[0] * (s64)VAR_9->prom[5];
 VAR_8 = FUNC_0(VAR_8, 100000);

 *VAR_4 = VAR_8;

 return 0;
}
