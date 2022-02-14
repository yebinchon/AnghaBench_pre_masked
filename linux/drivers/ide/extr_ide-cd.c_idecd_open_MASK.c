
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_info {int devinfo; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,int ) ;
 int FUNC_1 (struct block_device*) ;
 struct cdrom_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct cdrom_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct cdrom_info *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_1(VAR_2);

 FUNC_4(&VAR_1);
 VAR_4 = FUNC_2(VAR_2->bd_disk);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_0(&VAR_4->devinfo, VAR_2, VAR_3);
 if (VAR_5 < 0)
  FUNC_3(VAR_4);
out:
 FUNC_5(&VAR_1);
 return VAR_5;
}
