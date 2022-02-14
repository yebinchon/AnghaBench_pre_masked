
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nokia_modem_device {int nokia_modem_rst_ind_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct nokia_modem_device *VAR_3 = (struct nokia_modem_device *)VAR_2;

 FUNC_0(&VAR_3->nokia_modem_rst_ind_tasklet);

 return VAR_0;
}
