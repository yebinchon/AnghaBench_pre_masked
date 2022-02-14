
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; int * bus; } ;
struct gio_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct gio_device *VAR_2)
{
 VAR_2->dev.bus = &VAR_1;
 VAR_2->dev.parent = &VAR_0;
 return FUNC_0(&VAR_2->dev);
}
