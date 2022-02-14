
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp007_data {int client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct tmp007_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_13, void *VAR_14)
{
 struct iio_dev *VAR_15 = VAR_14;
 struct tmp007_data *VAR_16 = FUNC_3(VAR_15);
 int VAR_17;

 VAR_17 = FUNC_1(VAR_16->client, VAR_8);
 if ((VAR_17 < 0) || !(VAR_17 & (VAR_11 | VAR_12 |
    VAR_9 | VAR_10)))
  return VAR_7;

 if (VAR_17 & VAR_11)
  FUNC_4(VAR_15,
    FUNC_0(VAR_5, 0,
     VAR_4,
     VAR_2,
     VAR_1),
    FUNC_2(VAR_15));

 if (VAR_17 & VAR_12)
  FUNC_4(VAR_15,
    FUNC_0(VAR_5, 0,
     VAR_4,
     VAR_2,
     VAR_0),
    FUNC_2(VAR_15));

 if (VAR_17 & VAR_9)
  FUNC_4(VAR_15,
    FUNC_0(VAR_5, 0,
     VAR_3,
     VAR_2,
     VAR_1),
    FUNC_2(VAR_15));

 if (VAR_17 & VAR_10)
  FUNC_4(VAR_15,
    FUNC_0(VAR_5, 0,
     VAR_3,
     VAR_2,
     VAR_0),
    FUNC_2(VAR_15));

 return VAR_6;
}
