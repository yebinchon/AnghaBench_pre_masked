
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ps8622_bridge {int max_lane_count; int lane_count; TYPE_2__* bl; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int brightness; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct ps8622_bridge *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3 = 0;


 VAR_3 = FUNC_0(VAR_2, 0x02, 0xa1, 0x01);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x14, 0x01);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0xe3, 0x20);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0xe2, 0x80);
 if (VAR_3)
  goto error;





 VAR_3 = FUNC_0(VAR_2, 0x04, 0x8a, 0x0c);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x89, 0x08);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x71, 0x2d);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x7d, 0x07);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x7b, 0x00);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x7a, 0xfd);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0xc0, 0x12);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0xc1, 0x92);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0xc2, 0x1c);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x32, 0x80);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x00, 0xb0);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x15, 0x40);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x54, 0x10);
 if (VAR_3)
  goto error;



 VAR_3 = FUNC_0(VAR_2, 0x01, 0x02, 0x80 | VAR_1->max_lane_count);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0x21, 0x80 | VAR_1->lane_count);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_0(VAR_2, 0x00, 0x52, 0x20);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x00, 0xf1, 0x03);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_0(VAR_2, 0x00, 0x62, 0x41);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x00, 0xf6, 0x01);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x00, 0x77, 0x06);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x00, 0x4c, 0x04);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc0, 0x00);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc1, 0x1c);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc2, 0xf8);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc3, 0x44);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc4, 0x32);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc5, 0x53);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc6, 0x4c);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc7, 0x56);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xc8, 0x35);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xca, 0x01);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xcb, 0x05);
 if (VAR_3)
  goto error;


 if (VAR_1->bl) {

  VAR_3 = FUNC_0(VAR_2, 0x01, 0xa5, 0xa0);
  if (VAR_3)
   goto error;


  VAR_3 = FUNC_0(VAR_2, 0x01, 0xa7,
    VAR_1->bl->props.brightness);
  if (VAR_3)
   goto error;
 } else {

  VAR_3 = FUNC_0(VAR_2, 0x01, 0xa5, 0x80);
  if (VAR_3)
   goto error;
 }


 VAR_3 = FUNC_0(VAR_2, 0x01, 0xcc, 0x13);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x02, 0xb1, 0x20);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x10, 0x16);
 if (VAR_3)
  goto error;



 VAR_3 = FUNC_0(VAR_2, 0x04, 0x59, 0x60);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x04, 0x54, 0x14);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_0(VAR_2, 0x02, 0xa1, 0x91);

error:
 return VAR_3 ? -VAR_0 : 0;
}
