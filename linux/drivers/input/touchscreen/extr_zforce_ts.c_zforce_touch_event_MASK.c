
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zforce_ts_platdata {int x_max; int y_max; } ;
struct zforce_ts {int input; struct zforce_ts_platdata* pdata; struct i2c_client* client; } ;
struct zforce_point {int coord_x; int coord_y; int state; int id; int area_major; int area_minor; int orientation; int pressure; int prblty; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct zforce_ts *VAR_8, u8 *VAR_9)
{
 struct i2c_client *VAR_10 = VAR_8->client;
 const struct zforce_ts_platdata *VAR_11 = VAR_8->pdata;
 struct zforce_point VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 VAR_13 = VAR_9[0];
 if (VAR_13 > VAR_7) {
  FUNC_1(&VAR_10->dev,
    "too many coordinates %d, expected max %d\n",
    VAR_13, VAR_7);
  VAR_13 = VAR_7;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_12.coord_x =
   VAR_9[9 * VAR_14 + 2] << 8 | VAR_9[9 * VAR_14 + 1];
  VAR_12.coord_y =
   VAR_9[9 * VAR_14 + 4] << 8 | VAR_9[9 * VAR_14 + 3];

  if (VAR_12.coord_x > VAR_11->x_max ||
      VAR_12.coord_y > VAR_11->y_max) {
   FUNC_1(&VAR_10->dev, "coordinates (%d,%d) invalid\n",
    VAR_12.coord_x, VAR_12.coord_y);
   VAR_12.coord_x = VAR_12.coord_y = 0;
  }

  VAR_12.state = VAR_9[9 * VAR_14 + 5] & 0x0f;
  VAR_12.id = (VAR_9[9 * VAR_14 + 5] & 0xf0) >> 4;


  VAR_12.area_major = FUNC_8(VAR_9[9 * VAR_14 + 6],
       VAR_9[9 * VAR_14 + 7]);
  VAR_12.area_minor = FUNC_9(VAR_9[9 * VAR_14 + 6],
       VAR_9[9 * VAR_14 + 7]);
  VAR_12.orientation = VAR_9[9 * VAR_14 + 6] > VAR_9[9 * VAR_14 + 7];

  VAR_12.pressure = VAR_9[9 * VAR_14 + 8];
  VAR_12.prblty = VAR_9[9 * VAR_14 + 9];

  FUNC_0(&VAR_10->dev,
   "point %d/%d: state %d, id %d, pressure %d, prblty %d, x %d, y %d, amajor %d, aminor %d, ori %d\n",
   VAR_14, VAR_13, VAR_12.state, VAR_12.id,
   VAR_12.pressure, VAR_12.prblty,
   VAR_12.coord_x, VAR_12.coord_y,
   VAR_12.area_major, VAR_12.area_minor,
   VAR_12.orientation);


  FUNC_4(VAR_8->input, VAR_12.id - 1);

  FUNC_3(VAR_8->input, VAR_5,
      VAR_12.state != VAR_6);

  if (VAR_12.state != VAR_6) {
   FUNC_6(VAR_8->input, VAR_1,
      VAR_12.coord_x);
   FUNC_6(VAR_8->input, VAR_2,
      VAR_12.coord_y);
   FUNC_6(VAR_8->input, VAR_3,
      VAR_12.area_major);
   FUNC_6(VAR_8->input, VAR_4,
      VAR_12.area_minor);
   FUNC_6(VAR_8->input, VAR_0,
      VAR_12.orientation);
   VAR_15++;
  }
 }

 FUNC_5(VAR_8->input);

 FUNC_2(VAR_8->input, VAR_15);

 FUNC_7(VAR_8->input);

 return 0;
}
