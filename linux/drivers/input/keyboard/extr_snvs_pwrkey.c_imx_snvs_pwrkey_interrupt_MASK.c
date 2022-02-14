
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pwrkey_drv_data {int snvs; int check_timer; TYPE_2__* input; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct pwrkey_drv_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct platform_device *VAR_7 = VAR_6;
 struct pwrkey_drv_data *VAR_8 = FUNC_2(VAR_7);
 u32 VAR_9;

 FUNC_3(VAR_8->input->dev.parent, 0);

 FUNC_4(VAR_8->snvs, VAR_2, &VAR_9);
 if (VAR_9 & VAR_3)
  FUNC_0(&VAR_8->check_timer, VAR_4 + FUNC_1(VAR_0));


 FUNC_5(VAR_8->snvs, VAR_2, VAR_3);

 return VAR_1;
}
