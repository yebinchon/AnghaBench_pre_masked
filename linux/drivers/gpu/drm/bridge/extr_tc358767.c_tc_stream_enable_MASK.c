
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct TYPE_6__ {int clock; } ;
struct tc_data {int regmap; TYPE_2__ link; TYPE_3__ mode; int refclk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct tc_data*,int ,int) ;
 int FUNC_4 (struct tc_data*,TYPE_3__*) ;
 int FUNC_5 (struct tc_data*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct tc_data *VAR_11)
{
 int VAR_12;
 u32 VAR_13;

 FUNC_1(VAR_11->dev, "enable video stream\n");


 if (VAR_10) {
  VAR_12 = FUNC_3(VAR_11, FUNC_0(VAR_11->refclk),
        1000 * VAR_11->mode.clock);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_11, &VAR_11->mode);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_13 = VAR_9 | VAR_4;
 if (VAR_11->link.base.capabilities & VAR_5)
  VAR_13 |= VAR_6;
 VAR_12 = FUNC_2(VAR_11->regmap, VAR_0, VAR_13);
 if (VAR_12)
  return VAR_12;







 FUNC_6(500, 1000);
 VAR_13 |= VAR_8;
 VAR_12 = FUNC_2(VAR_11->regmap, VAR_0, VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_13 = VAR_1;
 if (VAR_10)
  VAR_13 |= VAR_2;
 else
  VAR_13 |= VAR_3;
 VAR_12 = FUNC_2(VAR_11->regmap, VAR_7, VAR_13);
 if (VAR_12)
  return VAR_12;

 return 0;
}
