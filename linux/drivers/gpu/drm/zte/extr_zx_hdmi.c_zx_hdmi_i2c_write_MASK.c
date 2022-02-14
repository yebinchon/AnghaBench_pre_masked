
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_hdmi {int dummy; } ;
struct i2c_msg {int len; int addr; int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zx_hdmi*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct zx_hdmi *VAR_6, struct i2c_msg *VAR_7)
{




 if ((VAR_7->len != 1) ||
     ((VAR_7->addr != VAR_0) && (VAR_7->addr != VAR_1)))
  return -VAR_2;

 if (VAR_7->addr == VAR_1)
  FUNC_0(VAR_6, VAR_5, VAR_7->addr << 1);
 else if (VAR_7->addr == VAR_0)
  FUNC_0(VAR_6, VAR_3, VAR_7->addr << 1);

 FUNC_0(VAR_6, VAR_4, VAR_7->buf[0]);

 return 0;
}
