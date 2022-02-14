
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {struct gendisk* disk; } ;
struct gendisk {int dummy; } ;



struct gendisk *FUNC_0(struct mapped_device *VAR_0)
{
 return VAR_0->disk;
}
