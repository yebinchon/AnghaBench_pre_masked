
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_client {int dev; } ;
struct auo_point_t {int coord_x; int coord_y; int orientation; int area_minor; int area_major; } ;
struct auo_pixcir_ts_platdata {int x_max; int y_max; } ;
struct auo_pixcir_ts {struct auo_pixcir_ts_platdata* pdata; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct i2c_client*,int ,int,int*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct auo_pixcir_ts *VAR_3,
       struct auo_point_t *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_3->client;
 const struct auo_pixcir_ts_platdata *VAR_6 = VAR_3->pdata;
 uint8_t VAR_7[8];
 uint8_t VAR_8[4];
 int VAR_9, VAR_10;


 VAR_10 = FUNC_2(VAR_5, VAR_1,
         8, VAR_7);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_5->dev, "failed to read coordinate, %d\n", VAR_10);
  return VAR_10;
 }


 VAR_10 = FUNC_2(VAR_5, VAR_0,
         4, VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_5->dev, "could not read touch area, %d\n", VAR_10);
  return VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_4[VAR_9].coord_x =
   VAR_7[4 * VAR_9 + 1] << 8 | VAR_7[4 * VAR_9];
  VAR_4[VAR_9].coord_y =
   VAR_7[4 * VAR_9 + 3] << 8 | VAR_7[4 * VAR_9 + 2];

  if (VAR_4[VAR_9].coord_x > VAR_6->x_max ||
      VAR_4[VAR_9].coord_y > VAR_6->y_max) {
   FUNC_1(&VAR_5->dev, "coordinates (%d,%d) invalid\n",
    VAR_4[VAR_9].coord_x, VAR_4[VAR_9].coord_y);
   VAR_4[VAR_9].coord_x = VAR_4[VAR_9].coord_y = 0;
  }


  VAR_4[VAR_9].area_major = FUNC_3(VAR_8[2 * VAR_9], VAR_8[2 * VAR_9 + 1]);
  VAR_4[VAR_9].area_minor = FUNC_4(VAR_8[2 * VAR_9], VAR_8[2 * VAR_9 + 1]);
  VAR_4[VAR_9].orientation = VAR_8[2 * VAR_9] > VAR_8[2 * VAR_9 + 1];
 }

 return 0;
}
