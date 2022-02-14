
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void const* out; } ;
struct i3c_priv_xfer {int rnw; size_t len; TYPE_1__ data; } ;
struct i3c_device {int dummy; } ;
struct device {int dummy; } ;


 struct i3c_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i3c_device*,struct i3c_priv_xfer*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct device *VAR_3 = VAR_0;
 struct i3c_device *VAR_4 = FUNC_0(VAR_3);
 struct i3c_priv_xfer VAR_5[] = {
  {
   .rnw = 0,
   .len = VAR_2,
   .data.out = VAR_1,
  },
 };

 return FUNC_1(VAR_4, VAR_5, 1);
}
