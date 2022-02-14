
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct ide_driver {int version; } ;
struct device {TYPE_2__* driver; } ;
struct TYPE_3__ {struct device gendev; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 struct ide_driver* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 ide_drive_t *VAR_2 = (ide_drive_t *)VAR_0->private;
 struct device *VAR_3 = &VAR_2->gendev;
 struct ide_driver *VAR_4;

 if (VAR_3->driver) {
  VAR_4 = FUNC_1(VAR_3->driver);
  FUNC_0(VAR_0, "%s version %s\n",
    VAR_3->driver->name, VAR_4->version);
 } else
  FUNC_0(VAR_0, "ide-default version 0.9.newide\n");
 return 0;
}
