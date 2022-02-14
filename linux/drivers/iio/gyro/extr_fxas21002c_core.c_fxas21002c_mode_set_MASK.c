
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int mode; int prev_mode; int * regmap_fields; } ;
typedef enum fxas21002c_mode_state { ____Placeholder_fxas21002c_mode_state } fxas21002c_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct fxas21002c_data *VAR_7,
          enum fxas21002c_mode_state VAR_8)
{
 int VAR_9;

 if (VAR_8 == VAR_7->mode)
  return 0;

 if (VAR_8 == VAR_1)
  VAR_9 = FUNC_1(VAR_7->regmap_fields[VAR_6], 1);
 else
  VAR_9 = FUNC_1(VAR_7->regmap_fields[VAR_6], 0);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 == VAR_0)
  VAR_9 = FUNC_1(VAR_7->regmap_fields[VAR_5], 1);
 else
  VAR_9 = FUNC_1(VAR_7->regmap_fields[VAR_5], 0);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_8 == VAR_0 &&
     VAR_7->mode == VAR_2)
  FUNC_0(VAR_4);

 if (VAR_7->mode == VAR_1)
  FUNC_0(VAR_3);

 VAR_7->prev_mode = VAR_7->mode;
 VAR_7->mode = VAR_8;

 return VAR_9;
}
