
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct i2c_msg {scalar_t__ len; scalar_t__* buf; int flags; int addr; } ;
struct cx24120_state {TYPE_2__* i2c; TYPE_1__* config; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ i2c_wr_max; int i2c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,struct i2c_msg*,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct cx24120_state *VAR_2,
        u8 VAR_3, const u8 *VAR_4, u16 VAR_5, u8 VAR_6)
{
 int VAR_7;
 u16 VAR_8 = VAR_2->config->i2c_wr_max > 0 ?
    VAR_2->config->i2c_wr_max :
    VAR_5;

 struct i2c_msg VAR_9 = {
  .addr = VAR_2->config->i2c_addr,
  .flags = 0,
 };

 VAR_9.buf = FUNC_4(VAR_8 + 1, VAR_1);
 if (!VAR_9.buf)
  return -VAR_0;

 while (VAR_5) {
  VAR_9.buf[0] = VAR_3;
  VAR_9.len = VAR_5 > VAR_8 ? VAR_8 : VAR_5;
  FUNC_5(&VAR_9.buf[1], VAR_4, VAR_9.len);

  VAR_5 -= VAR_9.len;
  VAR_4 += VAR_9.len;

  if (VAR_6)
   VAR_3 += VAR_9.len;
  VAR_9.len++;

  VAR_7 = FUNC_2(VAR_2->i2c, &VAR_9, 1);
  if (VAR_7 != 1) {
   FUNC_1("i2c_write error(err == %i, 0x%02x)\n", VAR_7, VAR_3);
   goto out;
  }

  FUNC_0(&VAR_2->i2c->dev, "reg=0x%02x; data=%*ph\n",
   VAR_3, VAR_9.len - 1, VAR_9.buf + 1);
 }

 VAR_7 = 0;

out:
 FUNC_3(VAR_9.buf);
 return VAR_7;
}
