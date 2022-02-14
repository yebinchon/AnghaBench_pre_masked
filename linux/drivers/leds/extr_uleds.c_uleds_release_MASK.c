
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uleds_device {scalar_t__ state; int led_cdev; } ;
struct inode {int dummy; } ;
struct file {struct uleds_device* private_data; } ;
struct TYPE_2__ {int this_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct uleds_device*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct uleds_device *VAR_5 = VAR_4->private_data;

 if (VAR_5->state == VAR_0) {
  VAR_5->state = VAR_1;
  FUNC_0(VAR_2.this_device,
          &VAR_5->led_cdev);
 }
 FUNC_1(VAR_5);

 return 0;
}
