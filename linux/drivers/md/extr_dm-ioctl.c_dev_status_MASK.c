
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct file {int dummy; } ;
struct dm_ioctl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mapped_device*,struct dm_ioctl*) ;
 int FUNC_1 (struct mapped_device*) ;
 struct mapped_device* FUNC_2 (struct dm_ioctl*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, struct dm_ioctl *VAR_2, size_t VAR_3)
{
 struct mapped_device *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4);

 return 0;
}
