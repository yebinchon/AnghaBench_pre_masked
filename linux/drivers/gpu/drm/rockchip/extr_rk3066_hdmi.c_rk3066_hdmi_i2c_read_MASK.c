
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rk3066_hdmi {TYPE_1__* i2c; } ;
struct i2c_msg {int len; int * buf; } ;
struct TYPE_2__ {int stat; int cmpltn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rk3066_hdmi*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct rk3066_hdmi *VAR_4, struct i2c_msg *VAR_5)
{
 int VAR_6 = VAR_5->len;
 u8 *VAR_7 = VAR_5->buf;
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_4->i2c->cmpltn, VAR_3 / 10);
 if (!VAR_8 || VAR_4->i2c->stat & VAR_2)
  return -VAR_0;

 while (VAR_6--)
  *VAR_7++ = FUNC_0(VAR_4, VAR_1);

 return 0;
}
