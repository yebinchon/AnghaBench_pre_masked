
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_raid_superblock {void** extended_failed_devices; void* failed_devices; } ;


 int FUNC_0 (void**) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_raid_superblock *VAR_0, uint64_t *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->extended_failed_devices);

 VAR_0->failed_devices = FUNC_1(VAR_1[0]);
 while (VAR_2--)
  VAR_0->extended_failed_devices[VAR_2] = FUNC_1(VAR_1[VAR_2+1]);
}
