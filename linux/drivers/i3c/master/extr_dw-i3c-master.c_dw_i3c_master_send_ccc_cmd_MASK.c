
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_master_controller {int dummy; } ;
struct i3c_ccc_cmd {scalar_t__ id; scalar_t__ rnw; } ;
struct dw_i3c_master {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dw_i3c_master*,struct i3c_ccc_cmd*) ;
 int FUNC_1 (struct dw_i3c_master*,struct i3c_ccc_cmd*) ;
 struct dw_i3c_master* FUNC_2 (struct i3c_master_controller*) ;

__attribute__((used)) static int FUNC_3(struct i3c_master_controller *VAR_2,
          struct i3c_ccc_cmd *VAR_3)
{
 struct dw_i3c_master *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;

 if (VAR_3->id == VAR_1)
  return -VAR_0;

 if (VAR_3->rnw)
  VAR_5 = FUNC_0(VAR_4, VAR_3);
 else
  VAR_5 = FUNC_1(VAR_4, VAR_3);

 return VAR_5;
}
