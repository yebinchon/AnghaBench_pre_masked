
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i3c_master_controller {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct i3c_master_controller*,struct device_node*,int *) ;
 int FUNC_2 (struct i3c_master_controller*,struct device_node*,int *) ;
 int FUNC_3 (struct device_node*,char*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct i3c_master_controller *VAR_1,
     struct device_node *VAR_2)
{
 u32 VAR_3[3];
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_2, "reg", VAR_3, FUNC_0(VAR_3));
 if (VAR_4)
  return VAR_4;





 if (!VAR_3[1])
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
