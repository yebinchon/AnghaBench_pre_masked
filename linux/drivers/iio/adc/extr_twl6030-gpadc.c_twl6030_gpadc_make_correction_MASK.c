
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twl6030_ideal_code {int dummy; } ;
struct twl6030_gpadc_data {TYPE_2__* twl6030_cal_tbl; TYPE_1__* pdata; } ;
struct TYPE_4__ {int offset_error; int gain_error; } ;
struct TYPE_3__ {int nchannels; struct twl6030_ideal_code* ideal; } ;


 int FUNC_0 (struct twl6030_ideal_code const*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct twl6030_gpadc_data *VAR_0,
  int VAR_1, int VAR_2)
{
 const struct twl6030_ideal_code *VAR_3 = VAR_0->pdata->ideal;
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_0->pdata->nchannels);
 VAR_4 = ((VAR_2 * 1000) -
  VAR_0->twl6030_cal_tbl[VAR_5].offset_error) /
  VAR_0->twl6030_cal_tbl[VAR_5].gain_error;

 return VAR_4;
}
