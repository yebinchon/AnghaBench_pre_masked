
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int client; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct mma8452_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct iio_dev *VAR_10)
{
 struct mma8452_data *VAR_11 = FUNC_3(VAR_10);
 s64 VAR_12 = FUNC_2(VAR_10);
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11->client, VAR_6);
 if (VAR_13 < 0)
  return;

 if (VAR_13 & VAR_7)
  FUNC_4(VAR_10,
          FUNC_0(VAR_0, 0, VAR_3,
        VAR_2,
        VAR_1),
          VAR_12);

 if (VAR_13 & VAR_8)
  FUNC_4(VAR_10,
          FUNC_0(VAR_0, 0, VAR_4,
        VAR_2,
        VAR_1),
          VAR_12);

 if (VAR_13 & VAR_9)
  FUNC_4(VAR_10,
          FUNC_0(VAR_0, 0, VAR_5,
        VAR_2,
        VAR_1),
          VAR_12);
}
