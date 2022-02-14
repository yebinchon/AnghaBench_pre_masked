
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us5182d_data {TYPE_1__* client; int default_continuous; int lower_dark_gain; int upper_dark_gain; int us5182d_dark_ths; int ga; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int *) ;
 struct us5182d_data* FUNC_5 (struct iio_dev*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct iio_dev *VAR_4)
{
 struct us5182d_data *VAR_5 = FUNC_5(VAR_4);

 if (FUNC_3(&VAR_5->client->dev, "upisemi,glass-coef",
         &VAR_5->ga))
  VAR_5->ga = VAR_0;
 if (FUNC_2(&VAR_5->client->dev,
        "upisemi,dark-ths",
        VAR_5->us5182d_dark_ths,
        FUNC_0(VAR_3)))
  VAR_5->us5182d_dark_ths = VAR_3;
 if (FUNC_4(&VAR_5->client->dev,
        "upisemi,upper-dark-gain",
        &VAR_5->upper_dark_gain))
  VAR_5->upper_dark_gain = VAR_1;
 if (FUNC_4(&VAR_5->client->dev,
        "upisemi,lower-dark-gain",
        &VAR_5->lower_dark_gain))
  VAR_5->lower_dark_gain = VAR_2;
 VAR_5->default_continuous = FUNC_1(&VAR_5->client->dev,
            "upisemi,continuous");
}
