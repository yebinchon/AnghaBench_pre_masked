
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct virtio_blk {int vdev; } ;
struct gendisk {struct virtio_blk* private_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 struct gendisk* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 char** VAR_0 ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct gendisk *VAR_4 = FUNC_2(VAR_1);
 struct virtio_blk *VAR_5 = VAR_4->private_data;
 u8 VAR_6 = FUNC_4(VAR_5->vdev);

 FUNC_1(VAR_6 >= FUNC_0(VAR_0));
 return FUNC_3(VAR_3, 40, "%s\n", VAR_0[VAR_6]);
}
