
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct inno_hdmi {TYPE_1__* i2c; } ;
struct i2c_msg {int len; int * buf; } ;
struct TYPE_2__ {int cmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inno_hdmi*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct inno_hdmi *VAR_3, struct i2c_msg *VAR_4)
{
 int VAR_5 = VAR_4->len;
 u8 *VAR_6 = VAR_4->buf;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_3->i2c->cmp, VAR_2 / 10);
 if (!VAR_7)
  return -VAR_0;

 while (VAR_5--)
  *VAR_6++ = FUNC_0(VAR_3, VAR_1);

 return 0;
}
