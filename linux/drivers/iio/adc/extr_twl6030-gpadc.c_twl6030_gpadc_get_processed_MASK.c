
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twl6030_ideal_code {int dummy; } ;
struct twl6030_gpadc_data {int dev; TYPE_1__* twl6030_cal_tbl; TYPE_2__* pdata; } ;
struct TYPE_4__ {int nchannels; struct twl6030_ideal_code* ideal; } ;
struct TYPE_3__ {int gain; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct twl6030_gpadc_data*,int,int*) ;
 int FUNC_2 (struct twl6030_ideal_code const*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct twl6030_gpadc_data *VAR_0,
  int VAR_1, int *VAR_2)
{
 const struct twl6030_ideal_code *VAR_3 = VAR_0->pdata->ideal;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_1, VAR_0->pdata->nchannels);
 VAR_5 = VAR_4 *
   VAR_0->twl6030_cal_tbl[VAR_6].gain;


 VAR_5 /= 1000;

 FUNC_0(VAR_0->dev, "GPADC corrected code: %d", VAR_4);
 FUNC_0(VAR_0->dev, "GPADC value: %d", VAR_5);

 *VAR_2 = VAR_5;

 return VAR_7;
}
