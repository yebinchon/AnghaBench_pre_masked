
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gendisk {unsigned int first_minor; int queue; int disk_name; int major; } ;
struct TYPE_4__ {char index; int major; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dn; int queue; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 char VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,char) ;

void FUNC_1(struct gendisk *VAR_2, ide_drive_t *VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_3->hwif;
 unsigned int VAR_5 = VAR_3->dn & 1;

 VAR_2->major = VAR_4->major;
 VAR_2->first_minor = VAR_5 << VAR_1;
 FUNC_0(VAR_2->disk_name, "hd%c", 'a' + VAR_4->index * VAR_0 + VAR_5);
 VAR_2->queue = VAR_3->queue;
}
