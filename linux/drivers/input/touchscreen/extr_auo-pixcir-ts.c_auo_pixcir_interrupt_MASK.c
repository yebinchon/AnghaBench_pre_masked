
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auo_point_t {scalar_t__ coord_x; scalar_t__ coord_y; scalar_t__ area_major; scalar_t__ area_minor; scalar_t__ orientation; } ;
struct auo_pixcir_ts_platdata {int gpio_int; } ;
struct auo_pixcir_ts {int stopped; int wait; scalar_t__ touch_ind_mode; int input; struct auo_pixcir_ts_platdata* pdata; } ;
typedef int irqreturn_t ;


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
 int VAR_10 ;
 int FUNC_0 (struct auo_pixcir_ts*,struct auo_point_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct auo_pixcir_ts *VAR_13 = VAR_12;
 const struct auo_pixcir_ts_platdata *VAR_14 = VAR_13->pdata;
 struct auo_point_t VAR_15[VAR_8];
 int VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = -1;

 while (!VAR_13->stopped) {


  if (VAR_13->touch_ind_mode) {
   if (FUNC_1(VAR_14->gpio_int) == 0) {
    FUNC_2(VAR_13->input);
    FUNC_4(VAR_13->input, VAR_9, 0);
    FUNC_5(VAR_13->input);
    break;
   }
  }

  VAR_17 = FUNC_0(VAR_13, VAR_15);
  if (VAR_17 < 0) {

   if (!VAR_13->touch_ind_mode)
    break;

   FUNC_7(VAR_13->wait, VAR_13->stopped,
    FUNC_6(VAR_7));
   continue;
  }

  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
   if (VAR_15[VAR_16].coord_x > 0 || VAR_15[VAR_16].coord_y > 0) {
    FUNC_3(VAR_13->input, VAR_1,
       VAR_15[VAR_16].coord_x);
    FUNC_3(VAR_13->input, VAR_2,
       VAR_15[VAR_16].coord_y);
    FUNC_3(VAR_13->input, VAR_3,
       VAR_15[VAR_16].area_major);
    FUNC_3(VAR_13->input, VAR_4,
       VAR_15[VAR_16].area_minor);
    FUNC_3(VAR_13->input, VAR_0,
       VAR_15[VAR_16].orientation);
    FUNC_2(VAR_13->input);


    if (VAR_18 == 0)
     VAR_19 = VAR_16;




    VAR_18++;
   }
  }

  FUNC_4(VAR_13->input, VAR_9, VAR_18 > 0);

  if (VAR_19 > -1) {
   FUNC_3(VAR_13->input, VAR_5, VAR_15[VAR_19].coord_x);
   FUNC_3(VAR_13->input, VAR_6, VAR_15[VAR_19].coord_y);
  }

  FUNC_5(VAR_13->input);


  if (!VAR_13->touch_ind_mode)
   break;

  FUNC_7(VAR_13->wait, VAR_13->stopped,
     FUNC_6(VAR_7));
 }

 return VAR_10;
}
