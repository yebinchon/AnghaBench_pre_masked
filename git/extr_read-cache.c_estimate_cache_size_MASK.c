
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ondisk_cache_entry {int dummy; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (long,int ) ;

__attribute__((used)) static size_t FUNC_1(size_t VAR_0, unsigned int VAR_1)
{
 long VAR_2 = sizeof(struct cache_entry) - sizeof(struct ondisk_cache_entry);




 VAR_2 += FUNC_0(VAR_2, 0);
 return VAR_0 + VAR_1 * VAR_2;
}
