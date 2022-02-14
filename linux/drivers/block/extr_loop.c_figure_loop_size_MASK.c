
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {scalar_t__ lo_offset; scalar_t__ lo_sizelimit; int lo_disk; struct block_device* lo_device; int lo_backing_file; } ;
struct block_device {int bd_disk; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,scalar_t__) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct loop_device *VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 loff_t VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_2->lo_backing_file);
 sector_t VAR_6 = (sector_t)VAR_5;
 struct block_device *VAR_7 = VAR_2->lo_device;

 if (FUNC_6((loff_t)VAR_6 != VAR_5))
  return -VAR_0;
 if (VAR_2->lo_offset != VAR_3)
  VAR_2->lo_offset = VAR_3;
 if (VAR_2->lo_sizelimit != VAR_4)
  VAR_2->lo_sizelimit = VAR_4;
 FUNC_5(VAR_2->lo_disk, VAR_6);
 FUNC_0(VAR_7, (loff_t)FUNC_2(VAR_7->bd_disk) << 9);

 FUNC_4(&FUNC_1(VAR_7->bd_disk)->kobj, VAR_1);
 return 0;
}
