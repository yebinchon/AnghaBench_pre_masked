
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_i2c_dev {int cmd_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct wmt_i2c_dev *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->cmd_status & VAR_2)
  VAR_5 = -VAR_0;

 if (VAR_4->cmd_status & VAR_3)
  VAR_5 = -VAR_1;

 return VAR_5;
}
