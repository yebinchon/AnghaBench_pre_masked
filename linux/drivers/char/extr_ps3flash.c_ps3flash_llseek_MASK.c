
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_storage_device {size_t region_idx; int blk_size; TYPE_1__* regions; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int,int ,int) ;
 struct ps3_storage_device* VAR_1 ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct ps3_storage_device *VAR_5 = VAR_1;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0,
   VAR_5->regions[VAR_5->region_idx].size*VAR_5->blk_size);
}
