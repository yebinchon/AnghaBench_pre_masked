
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cache_disk_superblock {int flags; } ;
typedef int (* flags_mutator ) (int ) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cache_disk_superblock *VAR_0,
    flags_mutator VAR_1)
{
 uint32_t VAR_2 = VAR_1(FUNC_1(VAR_0->flags));
 VAR_0->flags = FUNC_0(VAR_2);
}
