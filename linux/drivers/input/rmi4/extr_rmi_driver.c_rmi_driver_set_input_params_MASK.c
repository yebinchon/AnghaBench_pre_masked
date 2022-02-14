
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_device {int dummy; } ;
struct TYPE_2__ {int bustype; int vendor; } ;
struct input_dev {TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct rmi_device *VAR_3,
    struct input_dev *VAR_4)
{
 VAR_4->name = VAR_1;
 VAR_4->id.vendor = VAR_2;
 VAR_4->id.bustype = VAR_0;
 return 0;
}
