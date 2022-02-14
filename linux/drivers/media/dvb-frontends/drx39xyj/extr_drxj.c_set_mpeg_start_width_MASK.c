
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {scalar_t__ mpeg_start_width; } ;
struct drx_demod_instance {struct drx_common_attr* my_common_attr; scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct TYPE_2__ {int static_clk; int enable_parallel; } ;
struct drx_common_attr {TYPE_1__ mpeg_cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int *,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_3)
{
 struct drxj_data *VAR_4 = (struct drxj_data *) (((void*)0));
 struct i2c_device_addr *VAR_5 = (struct i2c_device_addr *)(((void*)0));
 struct drx_common_attr *VAR_6 = (struct drx_common_attr *) ((void*)0);
 int VAR_7;
 u16 VAR_8 = 0;

 VAR_5 = VAR_3->my_i2c_dev_addr;
 VAR_4 = (struct drxj_data *) VAR_3->my_ext_attr;
 VAR_6 = VAR_3->my_common_attr;

 if ((VAR_6->mpeg_cfg.static_clk == 1)
     && (VAR_6->mpeg_cfg.enable_parallel == 0)) {
  VAR_7 = FUNC_0(VAR_5, VAR_2, &VAR_8, 0);
  if (VAR_7 != 0) {
   FUNC_2("error %d\n", VAR_7);
   goto rw_error;
  }
  VAR_8 &= ~VAR_1;
  if (VAR_4->mpeg_start_width == VAR_0)
   VAR_8 |= VAR_1;
  VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_8, 0);
  if (VAR_7 != 0) {
   FUNC_2("error %d\n", VAR_7);
   goto rw_error;
  }
 }

 return 0;
rw_error:
 return VAR_7;
}
