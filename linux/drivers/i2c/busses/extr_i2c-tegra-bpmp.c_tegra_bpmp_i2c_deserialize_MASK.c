
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_i2c {int dummy; } ;
struct TYPE_2__ {size_t data_size; char* data_buf; } ;
struct mrq_i2c_response {TYPE_1__ xfer; } ;
struct i2c_msg {int flags; scalar_t__ len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct tegra_bpmp_i2c *VAR_2,
          struct mrq_i2c_response *VAR_3,
          struct i2c_msg *VAR_4,
          unsigned int VAR_5)
{
 size_t VAR_6 = VAR_3->xfer.data_size, VAR_7 = 0, VAR_8 = 0;
 char *VAR_9 = VAR_3->xfer.data_buf;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  if (VAR_4[VAR_10].flags & VAR_1)
   VAR_7 += VAR_4[VAR_10].len;

 if (VAR_7 != VAR_6)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_4[VAR_10].flags & VAR_1) {
   FUNC_0(VAR_4[VAR_10].buf, VAR_9 + VAR_8, VAR_4[VAR_10].len);
   VAR_8 += VAR_4[VAR_10].len;
  }
 }

 return 0;
}
