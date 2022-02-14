
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inno_hdmi {TYPE_1__* i2c; } ;
struct i2c_msg {int len; scalar_t__ addr; int* buf; } ;
struct TYPE_2__ {int segment_addr; int ddc_addr; int cmp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inno_hdmi*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inno_hdmi *VAR_6, struct i2c_msg *VAR_7)
{





 if ((VAR_7->len != 1) ||
     ((VAR_7->addr != VAR_0) && (VAR_7->addr != VAR_1)))
  return -VAR_2;

 FUNC_1(&VAR_6->i2c->cmp);

 if (VAR_7->addr == VAR_1)
  VAR_6->i2c->segment_addr = VAR_7->buf[0];
 if (VAR_7->addr == VAR_0)
  VAR_6->i2c->ddc_addr = VAR_7->buf[0];


 FUNC_0(VAR_6, VAR_3, 0x00);


 FUNC_0(VAR_6, VAR_5, VAR_6->i2c->ddc_addr);


 FUNC_0(VAR_6, VAR_4, VAR_6->i2c->segment_addr);

 return 0;
}
