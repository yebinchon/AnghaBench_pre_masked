
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* disk; int flags; } ;
struct cached_dev {int io_disable; TYPE_2__ disk; int backing_dev_name; } ;
struct TYPE_3__ {int disk_name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;

bool FUNC_4(struct cached_dev *VAR_1)
{
 if (!VAR_1 || FUNC_3(VAR_0, &VAR_1->disk.flags))
  return 0;

 VAR_1->io_disable = 1;

 FUNC_2();

 FUNC_1("stop %s: too many IO errors on backing device %s\n",
  VAR_1->disk.disk->disk_name, VAR_1->backing_dev_name);

 FUNC_0(&VAR_1->disk);
 return 1;
}
