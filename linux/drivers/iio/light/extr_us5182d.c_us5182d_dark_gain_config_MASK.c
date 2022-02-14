
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int client; int upper_dark_gain; int lower_dark_gain; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 struct us5182d_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct us5182d_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5)
{
 struct us5182d_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->client,
     VAR_2,
     VAR_6->lower_dark_gain);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->client,
     VAR_1,
     VAR_6->upper_dark_gain);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(VAR_6->client, VAR_3,
      VAR_4);
}
