
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_btree_info {int dummy; } ;
typedef int root_le ;
typedef int __le64 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct dm_btree_info*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,void const*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, const void *VAR_1)
{
 struct dm_btree_info *VAR_2 = VAR_0;
 __le64 VAR_3;
 uint64_t VAR_4;

 FUNC_3(&VAR_3, VAR_1, sizeof(VAR_3));
 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_1(VAR_2, VAR_4))
  FUNC_0("btree delete failed");
}
