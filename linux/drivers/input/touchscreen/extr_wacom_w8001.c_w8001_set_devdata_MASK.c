
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct w8001 {int id; int phys; } ;
struct serio {int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int vendor; int version; int product; int bustype; } ;
struct input_dev {TYPE_1__ dev; int close; int open; TYPE_2__ id; int phys; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,struct w8001*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct input_dev *VAR_3, struct w8001 *VAR_4,
         struct serio *VAR_5)
{
 VAR_3->phys = VAR_4->phys;
 VAR_3->id.bustype = VAR_0;
 VAR_3->id.product = VAR_4->id;
 VAR_3->id.vendor = 0x056a;
 VAR_3->id.version = 0x0100;
 VAR_3->open = VAR_2;
 VAR_3->close = VAR_1;

 VAR_3->dev.parent = &VAR_5->dev;

 FUNC_0(VAR_3, VAR_4);
}
