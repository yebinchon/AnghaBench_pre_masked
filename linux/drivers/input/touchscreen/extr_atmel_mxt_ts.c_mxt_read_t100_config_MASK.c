
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mxt_object {scalar_t__ start_address; } ;
struct mxt_data {int xsize; int ysize; int xy_switch; int invertx; int inverty; int t100_aux_area; int t100_aux_ampl; int t100_aux_vect; void* max_y; void* max_x; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef int range_y ;
typedef int range_x ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,int,int*) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 void* FUNC_2 (int*) ;
 struct mxt_object* FUNC_3 (struct mxt_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct mxt_data *VAR_14)
{
 struct i2c_client *VAR_15 = VAR_14->client;
 int VAR_16;
 struct mxt_object *VAR_17;
 u16 VAR_18, VAR_19;
 u8 VAR_20, VAR_21;
 u8 VAR_22;

 VAR_17 = FUNC_3(VAR_14, VAR_13);
 if (!VAR_17)
  return -VAR_0;


 VAR_16 = FUNC_0(VAR_15,
          VAR_17->start_address + VAR_9,
          sizeof(VAR_18), &VAR_18);
 if (VAR_16)
  return VAR_16;

 VAR_14->max_x = FUNC_2(&VAR_18);

 VAR_16 = FUNC_0(VAR_15,
          VAR_17->start_address + VAR_11,
          sizeof(VAR_19), &VAR_19);
 if (VAR_16)
  return VAR_16;

 VAR_14->max_y = FUNC_2(&VAR_19);

 VAR_16 = FUNC_0(VAR_15,
          VAR_17->start_address + VAR_10,
          sizeof(VAR_14->xsize), &VAR_14->xsize);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_0(VAR_15,
          VAR_17->start_address + VAR_12,
          sizeof(VAR_14->ysize), &VAR_14->ysize);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_0(VAR_15,
    VAR_17->start_address + VAR_1,
    1, &VAR_20);
 if (VAR_16)
  return VAR_16;

 VAR_14->xy_switch = VAR_20 & VAR_4;
 VAR_14->invertx = VAR_20 & VAR_2;
 VAR_14->inverty = VAR_20 & VAR_3;


 VAR_16 = FUNC_0(VAR_15,
    VAR_17->start_address + VAR_5,
    1, &VAR_21);
 if (VAR_16)
  return VAR_16;

 VAR_22 = 6;

 if (VAR_21 & VAR_8)
  VAR_14->t100_aux_vect = VAR_22++;

 if (VAR_21 & VAR_6)
  VAR_14->t100_aux_ampl = VAR_22++;

 if (VAR_21 & VAR_7)
  VAR_14->t100_aux_area = VAR_22++;

 FUNC_1(&VAR_15->dev,
  "T100 aux mappings vect:%u ampl:%u area:%u\n",
  VAR_14->t100_aux_vect, VAR_14->t100_aux_ampl, VAR_14->t100_aux_area);

 return 0;
}
