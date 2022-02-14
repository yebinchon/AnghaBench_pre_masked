
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct cm3323_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 struct cm3323_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 int VAR_3;
 struct iio_dev *VAR_4 = VAR_2;
 struct cm3323_data *VAR_5 = FUNC_2(VAR_4);

 VAR_3 = FUNC_1(VAR_5->client, VAR_0,
     VAR_1);
 if (VAR_3 < 0)
  FUNC_0(&VAR_5->client->dev, "Error writing reg_conf\n");
}
