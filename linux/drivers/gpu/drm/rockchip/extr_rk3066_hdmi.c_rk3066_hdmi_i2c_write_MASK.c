
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk3066_hdmi {TYPE_1__* i2c; } ;
struct i2c_msg {int len; scalar_t__ addr; int * buf; } ;
struct TYPE_2__ {int segment_addr; int ddc_addr; int cmpltn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rk3066_hdmi*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rk3066_hdmi *VAR_5, struct i2c_msg *VAR_6)
{





 if (VAR_6->len != 1 ||
     (VAR_6->addr != VAR_0 && VAR_6->addr != VAR_1))
  return -VAR_2;

 FUNC_1(&VAR_5->i2c->cmpltn);

 if (VAR_6->addr == VAR_1)
  VAR_5->i2c->segment_addr = VAR_6->buf[0];
 if (VAR_6->addr == VAR_0)
  VAR_5->i2c->ddc_addr = VAR_6->buf[0];


 FUNC_0(VAR_5, VAR_4, VAR_5->i2c->ddc_addr);


 FUNC_0(VAR_5, VAR_3, VAR_5->i2c->segment_addr);

 return 0;
}
