
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct us5182d_data {int als_enabled; int px_enabled; int power_mode; int default_continuous; int client; int px_high_th; int px_low_th; scalar_t__ opmode; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 struct us5182d_data* FUNC_2 (struct iio_dev*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct us5182d_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6)
{
 struct us5182d_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;

 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->opmode = 0;
 VAR_7->power_mode = VAR_1;
 VAR_7->px_low_th = VAR_4;
 VAR_7->px_high_th = VAR_3;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  VAR_9 = FUNC_1(VAR_7->client,
      VAR_5[VAR_8].reg,
      VAR_5[VAR_8].val);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_7->als_enabled = 1;
 VAR_7->px_enabled = 1;

 if (!VAR_7->default_continuous) {
  VAR_9 = FUNC_4(VAR_7, VAR_0);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_7->power_mode = VAR_2;
 }

 return VAR_9;
}
