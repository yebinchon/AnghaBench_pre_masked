
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int dummy; } ;
struct picolcd_data {struct rc_dev* rc_dev; } ;


 int FUNC_0 (struct rc_dev*) ;

void FUNC_1(struct picolcd_data *VAR_0)
{
 struct rc_dev *VAR_1 = VAR_0->rc_dev;

 VAR_0->rc_dev = ((void*)0);
 FUNC_0(VAR_1);
}
