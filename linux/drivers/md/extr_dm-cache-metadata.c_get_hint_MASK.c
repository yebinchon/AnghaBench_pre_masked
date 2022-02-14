
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_cache_policy {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_cache_policy*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_0, void *VAR_1, void *VAR_2)
{
 uint32_t VAR_3;
 struct dm_cache_policy *VAR_4 = VAR_2;

 VAR_3 = FUNC_1(VAR_4, FUNC_2(VAR_0));
 *((__le32 *) VAR_1) = FUNC_0(VAR_3);

 return 0;
}
