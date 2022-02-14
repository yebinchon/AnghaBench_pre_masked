
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_dev {int state; } ;
struct file {struct proxy_dev* private_data; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct file *VAR_1)
{
 struct proxy_dev *VAR_2 = VAR_1->private_data;

 VAR_2->state |= VAR_0;
}
