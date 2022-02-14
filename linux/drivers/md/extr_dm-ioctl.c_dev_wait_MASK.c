
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct file {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int event_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mapped_device*,struct dm_ioctl*) ;
 struct dm_table* FUNC_1 (struct mapped_device*,struct dm_ioctl*,int*) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct mapped_device*,int) ;
 scalar_t__ FUNC_4 (struct mapped_device*,int ) ;
 struct mapped_device* FUNC_5 (struct dm_ioctl*) ;
 int FUNC_6 (struct dm_table*,struct dm_ioctl*,size_t) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2, struct dm_ioctl *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 struct mapped_device *VAR_6;
 struct dm_table *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6)
  return -VAR_0;




 if (FUNC_4(VAR_6, VAR_3->event_nr)) {
  VAR_5 = -VAR_1;
  goto out;
 }






 FUNC_0(VAR_6, VAR_3);

 VAR_7 = FUNC_1(VAR_6, VAR_3, &VAR_8);
 if (VAR_7)
  FUNC_6(VAR_7, VAR_3, VAR_4);
 FUNC_3(VAR_6, VAR_8);

out:
 FUNC_2(VAR_6);

 return VAR_5;
}
