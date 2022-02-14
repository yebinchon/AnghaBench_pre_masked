
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct adjd_s311_data {TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct adjd_s311_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3)
{
 struct adjd_s311_data *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = 10;

 int VAR_6 = FUNC_2(VAR_4->client, VAR_0,
  VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 while (VAR_5--) {
  VAR_6 = FUNC_1(VAR_4->client, VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
  if (!(VAR_6 & VAR_1))
   break;
  FUNC_4(20);
 }

 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->client->dev,
   "adjd_s311_req_data() failed, data not ready\n");
  return -VAR_2;
 }

 return 0;
}
