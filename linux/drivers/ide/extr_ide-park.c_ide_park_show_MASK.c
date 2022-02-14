
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dev_flags; scalar_t__ sleep; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned long) ;
 TYPE_2__* FUNC_5 (struct device*) ;

ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
        char *VAR_6)
{
 ide_drive_t *VAR_7 = FUNC_5(VAR_4);
 ide_hwif_t *VAR_8 = VAR_7->hwif;
 unsigned long VAR_9;
 unsigned int VAR_10;

 if (VAR_7->dev_flags & VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_8->lock);
 VAR_9 = VAR_3;
 if (VAR_7->dev_flags & VAR_2 &&
     FUNC_4(VAR_7->sleep, VAR_9))
  VAR_10 = FUNC_0(VAR_7->sleep - VAR_9);
 else
  VAR_10 = 0;
 FUNC_3(&VAR_8->lock);

 return FUNC_1(VAR_6, 20, "%u\n", VAR_10);
}
