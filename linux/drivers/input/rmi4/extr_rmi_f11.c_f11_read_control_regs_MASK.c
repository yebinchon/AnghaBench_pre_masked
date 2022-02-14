
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rmi_function {int dev; struct rmi_device* rmi_dev; } ;
struct rmi_device {int dummy; } ;
struct f11_2d_ctrl {int ctrl0_11; int ctrl0_11_address; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rmi_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rmi_function *VAR_1,
    struct f11_2d_ctrl *VAR_2, u16 VAR_3) {
 struct rmi_device *VAR_4 = VAR_1->rmi_dev;
 int VAR_5 = 0;

 VAR_2->ctrl0_11_address = VAR_3;
 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_2->ctrl0_11,
    VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_1->dev, "Failed to read ctrl0, code: %d.\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
