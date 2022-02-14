
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int ide_drive_t ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,unsigned int,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct block_device*,unsigned int,unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(ide_drive_t *VAR_3, struct block_device *VAR_4, fmode_t VAR_5,
     unsigned int VAR_6, unsigned long VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_1);
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7, VAR_2);
 if (VAR_8 != -VAR_0)
  goto out;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7);
out:
 FUNC_3(&VAR_1);
 return VAR_8;
}
