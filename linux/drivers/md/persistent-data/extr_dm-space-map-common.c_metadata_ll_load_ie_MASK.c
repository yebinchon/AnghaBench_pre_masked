
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; } ;
struct ll_disk {TYPE_1__ mi_le; } ;
struct disk_index_entry {int dummy; } ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (struct disk_index_entry*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct ll_disk *VAR_0, dm_block_t VAR_1,
          struct disk_index_entry *VAR_2)
{
 FUNC_0(VAR_2, VAR_0->mi_le.index + VAR_1, sizeof(*VAR_2));
 return 0;
}
