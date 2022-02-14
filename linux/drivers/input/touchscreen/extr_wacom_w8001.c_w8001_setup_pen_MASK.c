
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001_coord {scalar_t__ tilt_y; scalar_t__ tilt_x; scalar_t__ pen_pressure; scalar_t__ y; scalar_t__ x; } ;
struct w8001 {int id; scalar_t__ max_pen_y; scalar_t__ max_pen_x; int response; struct input_dev* pen_dev; } ;
struct input_dev {int propbit; int keybit; int evbit; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,struct w8001_coord*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (struct w8001*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct w8001 *VAR_15, char *VAR_16,
      size_t VAR_17)
{
 struct input_dev *VAR_18 = VAR_15->pen_dev;
 struct w8001_coord VAR_19;
 int VAR_20;


 VAR_20 = FUNC_5(VAR_15, VAR_13, 1);
 if (VAR_20)
  return VAR_20;

 FUNC_0(VAR_11, VAR_18->evbit);
 FUNC_0(VAR_10, VAR_18->evbit);
 FUNC_0(VAR_9, VAR_18->keybit);
 FUNC_0(VAR_7, VAR_18->keybit);
 FUNC_0(VAR_8, VAR_18->keybit);
 FUNC_0(VAR_5, VAR_18->keybit);
 FUNC_0(VAR_6, VAR_18->keybit);
 FUNC_0(VAR_12, VAR_18->propbit);

 FUNC_3(VAR_15->response, &VAR_19);
 VAR_15->max_pen_x = VAR_19.x;
 VAR_15->max_pen_y = VAR_19.y;

 FUNC_2(VAR_18, VAR_3, 0, VAR_19.x, 0, 0);
 FUNC_2(VAR_18, VAR_4, 0, VAR_19.y, 0, 0);
 FUNC_1(VAR_18, VAR_3, VAR_14);
 FUNC_1(VAR_18, VAR_4, VAR_14);
 FUNC_2(VAR_18, VAR_0, 0, VAR_19.pen_pressure, 0, 0);
 if (VAR_19.tilt_x && VAR_19.tilt_y) {
  FUNC_2(VAR_18, VAR_1, 0, VAR_19.tilt_x, 0, 0);
  FUNC_2(VAR_18, VAR_2, 0, VAR_19.tilt_y, 0, 0);
 }

 VAR_15->id = 0x90;
 FUNC_4(VAR_16, " Penabled", VAR_17);

 return 0;
}
