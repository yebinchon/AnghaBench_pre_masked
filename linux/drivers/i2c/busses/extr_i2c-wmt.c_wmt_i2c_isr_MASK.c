
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_i2c_dev {int complete; scalar_t__ base; int cmd_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct wmt_i2c_dev *VAR_4 = VAR_3;


 VAR_4->cmd_status = FUNC_1(VAR_4->base + VAR_1);
 FUNC_2(VAR_4->cmd_status, VAR_4->base + VAR_1);

 FUNC_0(&VAR_4->complete);

 return VAR_0;
}
