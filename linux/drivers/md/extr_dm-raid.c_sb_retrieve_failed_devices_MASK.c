
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_raid_superblock {int * extended_failed_devices; int compat_features; int failed_devices; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dm_raid_superblock *VAR_1, uint64_t *VAR_2)
{
 VAR_2[0] = FUNC_2(VAR_1->failed_devices);
 FUNC_3(VAR_2 + 1, 0, sizeof(VAR_1->extended_failed_devices));

 if (FUNC_1(VAR_1->compat_features) & VAR_0) {
  int VAR_3 = FUNC_0(VAR_1->extended_failed_devices);

  while (VAR_3--)
   VAR_2[VAR_3+1] = FUNC_2(VAR_1->extended_failed_devices[VAR_3]);
 }
}
