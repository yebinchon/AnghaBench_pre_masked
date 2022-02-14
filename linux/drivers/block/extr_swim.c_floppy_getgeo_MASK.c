
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_geometry {int cylinders; int sectors; int heads; } ;
struct floppy_struct {int track; int sect; int head; } ;
struct floppy_state {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct floppy_state* private_data; } ;


 int FUNC_0 (struct floppy_state*,int ,struct floppy_struct**) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct floppy_state *VAR_2 = VAR_0->bd_disk->private_data;
 struct floppy_struct *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->heads = VAR_3->head;
 VAR_1->sectors = VAR_3->sect;
 VAR_1->cylinders = VAR_3->track;

 return 0;
}
