
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hd_geometry {int cylinders; void* sectors; void* heads; } ;
struct carm_port {int dev_geom_cyl; scalar_t__ dev_geom_sect; scalar_t__ dev_geom_head; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct carm_port* private_data; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{
 struct carm_port *VAR_2 = VAR_0->bd_disk->private_data;

 VAR_1->heads = (u8) VAR_2->dev_geom_head;
 VAR_1->sectors = (u8) VAR_2->dev_geom_sect;
 VAR_1->cylinders = VAR_2->dev_geom_cyl;
 return 0;
}
