
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_board_info {int addr; int flags; struct device_node* of_node; int type; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,struct device_node*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_3 (struct device_node*,int ,int) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;

int FUNC_6(struct device *VAR_7, struct device_node *VAR_8,
     struct i2c_board_info *VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));

 if (FUNC_3(VAR_8, VAR_9->type, sizeof(VAR_9->type)) < 0) {
  FUNC_0(VAR_7, "of_i2c: modalias failure on %pOF\n", VAR_8);
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_8, "reg", &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_7, "of_i2c: invalid reg on %pOF\n", VAR_8);
  return VAR_11;
 }

 if (VAR_10 & VAR_6) {
  VAR_10 &= ~VAR_6;
  VAR_9->flags |= VAR_3;
 }

 if (VAR_10 & VAR_5) {
  VAR_10 &= ~VAR_5;
  VAR_9->flags |= VAR_2;
 }

 VAR_9->addr = VAR_10;
 VAR_9->of_node = VAR_8;

 if (FUNC_4(VAR_8, "host-notify"))
  VAR_9->flags |= VAR_1;

 if (FUNC_2(VAR_8, "wakeup-source", ((void*)0)))
  VAR_9->flags |= VAR_4;

 return 0;
}
