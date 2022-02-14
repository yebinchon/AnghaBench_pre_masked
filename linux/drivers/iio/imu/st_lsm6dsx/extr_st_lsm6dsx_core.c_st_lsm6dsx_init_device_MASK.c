
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st_lsm6dsx_hw {int regmap; TYPE_1__* settings; } ;
struct TYPE_2__ {int reset_addr; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,int *) ;
 int FUNC_4 (struct st_lsm6dsx_hw*) ;
 int FUNC_5 (struct st_lsm6dsx_hw*) ;

__attribute__((used)) static int FUNC_6(struct st_lsm6dsx_hw *VAR_5)
{
 u8 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_2(VAR_5->regmap, VAR_5->settings->reset_addr,
     VAR_4,
     FUNC_0(VAR_4, 1));
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(50);


 VAR_7 = FUNC_2(VAR_5->regmap, VAR_5->settings->reset_addr,
     VAR_2,
     FUNC_0(VAR_2, 1));
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(50);


 VAR_7 = FUNC_2(VAR_5->regmap, VAR_0,
     VAR_1,
     FUNC_0(VAR_1, 1));
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_3(VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_6,
     VAR_3,
     FUNC_0(VAR_3,
         1));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_4(VAR_5);
}
