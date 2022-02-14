
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zx_hdmi {int dev; } ;
struct i2c_msg {int len; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct zx_hdmi*,int ) ;
 int FUNC_2 (struct zx_hdmi*,int ,int) ;
 int FUNC_3 (struct zx_hdmi*,int ,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct zx_hdmi *VAR_10, struct i2c_msg *VAR_11)
{
 int VAR_12 = VAR_11->len;
 u8 *VAR_13 = VAR_11->buf;
 int VAR_14 = 0;
 int VAR_15 = 0;


 FUNC_2(VAR_10, VAR_8, (VAR_12 >> 8) & 0xff);

 FUNC_2(VAR_10, VAR_7, VAR_12 & 0xff);


 FUNC_3(VAR_10, VAR_5, VAR_1, VAR_0);


 FUNC_3(VAR_10, VAR_5, VAR_1,
    VAR_2);

 while (VAR_12 > 0) {
  int VAR_16, VAR_17;


  FUNC_4(500, 1000);

  VAR_16 = FUNC_1(VAR_10, VAR_9) & VAR_3;
  if (VAR_16 == 0) {
   if (++VAR_14 > 5) {
    FUNC_0(VAR_10->dev,
           "DDC FIFO read timed out!");
    return -VAR_4;
   }
   continue;
  }

  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
   *VAR_13++ = FUNC_1(VAR_10, VAR_6);
  VAR_12 -= VAR_16;
 }

 return VAR_15;
}
