
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hd_geometry {int cylinders; int sectors; int heads; } ;
struct floppy_struct {int track; int sect; int head; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_4__ {int fd_device; } ;
struct TYPE_3__ {scalar_t__ private_data; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int,int,struct floppy_struct**) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 int VAR_3 = (long)VAR_1->bd_disk->private_data;
 int VAR_4 = FUNC_0(VAR_0[VAR_3].fd_device);
 struct floppy_struct *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_2->heads = VAR_5->head;
 VAR_2->sectors = VAR_5->sect;
 VAR_2->cylinders = VAR_5->track;
 return 0;
}
