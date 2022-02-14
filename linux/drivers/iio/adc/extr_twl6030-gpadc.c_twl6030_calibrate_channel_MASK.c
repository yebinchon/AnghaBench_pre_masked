
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twl6030_ideal_code {int volt2; int volt1; int code2; int code1; } ;
struct twl6030_gpadc_data {int dev; TYPE_2__* twl6030_cal_tbl; TYPE_1__* pdata; } ;
struct TYPE_4__ {int gain; int gain_error; int offset_error; } ;
struct TYPE_3__ {int nchannels; struct twl6030_ideal_code* ideal; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct twl6030_ideal_code const*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct twl6030_gpadc_data *VAR_0,
  int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 const struct twl6030_ideal_code *VAR_10 = VAR_0->pdata->ideal;

 VAR_9 = FUNC_1(VAR_10, VAR_1, VAR_0->pdata->nchannels);


 VAR_6 = ((VAR_10[VAR_9].volt2 - VAR_10[VAR_9].volt1) * 1000) /
  (VAR_10[VAR_9].code2 - VAR_10[VAR_9].code1);

 VAR_7 = VAR_10[VAR_9].code1;
 VAR_8 = VAR_10[VAR_9].code2;


 VAR_5 = 1000 + (((VAR_3 - VAR_2) * 1000) / (VAR_8 - VAR_7));


 VAR_4 = (VAR_2 * 1000) - (VAR_5 - 1000) * VAR_7;

 VAR_0->twl6030_cal_tbl[VAR_9].gain = VAR_6;
 VAR_0->twl6030_cal_tbl[VAR_9].gain_error = VAR_5;
 VAR_0->twl6030_cal_tbl[VAR_9].offset_error = VAR_4;

 FUNC_0(VAR_0->dev, "GPADC d1   for Chn: %d = %d\n", VAR_1, VAR_2);
 FUNC_0(VAR_0->dev, "GPADC d2   for Chn: %d = %d\n", VAR_1, VAR_3);
 FUNC_0(VAR_0->dev, "GPADC x1   for Chn: %d = %d\n", VAR_1, VAR_7);
 FUNC_0(VAR_0->dev, "GPADC x2   for Chn: %d = %d\n", VAR_1, VAR_8);
 FUNC_0(VAR_0->dev, "GPADC Gain for Chn: %d = %d\n", VAR_1, VAR_6);
 FUNC_0(VAR_0->dev, "GPADC k    for Chn: %d = %d\n", VAR_1, VAR_5);
 FUNC_0(VAR_0->dev, "GPADC b    for Chn: %d = %d\n", VAR_1, VAR_4);
}
