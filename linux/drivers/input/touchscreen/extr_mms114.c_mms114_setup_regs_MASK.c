
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchscreen_properties {int max_x; int max_y; } ;
struct mms114_data {scalar_t__ type; int contact_threshold; int moving_threshold; struct touchscreen_properties props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mms114_data*) ;
 int FUNC_1 (struct mms114_data*,int) ;
 int FUNC_2 (struct mms114_data*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mms114_data *VAR_6)
{
 const struct touchscreen_properties *VAR_7 = &VAR_6->props;
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_6->type == VAR_5)
  return 0;

 VAR_9 = FUNC_1(VAR_6, 1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = (VAR_7->max_x >> 8) & 0xf;
 VAR_8 |= ((VAR_7->max_y >> 8) & 0xf) << 4;
 VAR_9 = FUNC_2(VAR_6, VAR_2, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7->max_x & 0xff;
 VAR_9 = FUNC_2(VAR_6, VAR_3, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7->max_x & 0xff;
 VAR_9 = FUNC_2(VAR_6, VAR_4, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6->contact_threshold) {
  VAR_9 = FUNC_2(VAR_6, VAR_0,
    VAR_6->contact_threshold);
  if (VAR_9 < 0)
   return VAR_9;
 }

 if (VAR_6->moving_threshold) {
  VAR_9 = FUNC_2(VAR_6, VAR_1,
    VAR_6->moving_threshold);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}
