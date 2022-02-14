
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_mbus_framefmt {int field; } ;
struct ipu_csi {TYPE_1__* ipu; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ipu_csi*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct ipu_csi *VAR_4,
    const struct v4l2_mbus_framefmt *VAR_5,
    const struct v4l2_mbus_framefmt *VAR_6,
    v4l2_std_id VAR_7)
{
 enum v4l2_field VAR_8, VAR_9;
 bool VAR_10;


 VAR_8 = FUNC_2(VAR_5->field, VAR_7);
 VAR_9 = FUNC_2(VAR_6->field, VAR_7);
 VAR_10 = (FUNC_0(VAR_8) &&
         FUNC_0(VAR_9) &&
         VAR_8 != VAR_9);

 if (!VAR_10) {






  FUNC_3(VAR_4, 0x40596 | VAR_3,
         VAR_0);
  FUNC_3(VAR_4, 0xD07DF, VAR_1);
 } else {
  FUNC_1(VAR_4->ipu->dev, "capture field swap\n");


  FUNC_3(VAR_4, 0xD07DF | VAR_3,
         VAR_0);
  FUNC_3(VAR_4, 0x40596, VAR_1);
 }

 FUNC_3(VAR_4, 0xFF0000, VAR_2);

 return 0;
}
