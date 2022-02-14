
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct cache_disk_superblock {int version; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cache_disk_superblock *VAR_3)
{
 uint32_t VAR_4 = FUNC_1(VAR_3->version);

 if (VAR_4 < VAR_2 || VAR_4 > VAR_1) {
  FUNC_0("Cache metadata version %u found, but only versions between %u and %u supported.",
        VAR_4, VAR_2, VAR_1);
  return -VAR_0;
 }

 return 0;
}
