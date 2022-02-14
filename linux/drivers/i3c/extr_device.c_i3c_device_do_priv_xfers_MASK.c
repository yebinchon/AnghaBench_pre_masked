
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in; } ;
struct i3c_priv_xfer {TYPE_1__ data; int len; } ;
struct i3c_device {int bus; int desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i3c_priv_xfer*,int) ;

int FUNC_3(struct i3c_device *VAR_1,
        struct i3c_priv_xfer *VAR_2,
        int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 < 1)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (!VAR_2[VAR_5].len || !VAR_2[VAR_5].data.in)
   return -VAR_0;
 }

 FUNC_0(VAR_1->bus);
 VAR_4 = FUNC_2(VAR_1->desc, VAR_2, VAR_3);
 FUNC_1(VAR_1->bus);

 return VAR_4;
}
