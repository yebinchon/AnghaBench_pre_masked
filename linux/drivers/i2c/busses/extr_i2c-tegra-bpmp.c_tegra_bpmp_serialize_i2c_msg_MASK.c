
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tegra_bpmp_i2c {int dummy; } ;
struct TYPE_2__ {char* data_buf; unsigned int data_size; } ;
struct mrq_i2c_request {TYPE_1__ xfer; } ;
struct i2c_msg {int addr; int len; char* buf; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct tegra_bpmp_i2c *VAR_1,
     struct mrq_i2c_request *VAR_2,
     struct i2c_msg *VAR_3,
     unsigned int VAR_4)
{
 char *VAR_5 = VAR_2->xfer.data_buf;
 unsigned int VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct i2c_msg *VAR_10 = &VAR_3[VAR_6];
  u16 VAR_11 = 0;

  VAR_9 = FUNC_0(VAR_10->flags, &VAR_11);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_5[VAR_8++] = VAR_10->addr & 0xff;
  VAR_5[VAR_8++] = (VAR_10->addr & 0xff00) >> 8;
  VAR_5[VAR_8++] = VAR_11 & 0xff;
  VAR_5[VAR_8++] = (VAR_11 & 0xff00) >> 8;
  VAR_5[VAR_8++] = VAR_10->len & 0xff;
  VAR_5[VAR_8++] = (VAR_10->len & 0xff00) >> 8;

  if ((VAR_11 & VAR_0) == 0) {
   for (VAR_7 = 0; VAR_7 < VAR_10->len; VAR_7++)
    VAR_5[VAR_8++] = VAR_10->buf[VAR_7];
  }
 }

 VAR_2->xfer.data_size = VAR_8;

 return 0;
}
