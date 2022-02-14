
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct dm_block {int dummy; } ;
struct TYPE_2__ {int tm; } ;
struct dm_array_info {TYPE_1__ btree_info; } ;
struct array_block {int dummy; } ;
typedef int block_le ;
typedef int __le64 ;


 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (struct dm_array_info*,struct array_block*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (struct dm_array_info*,scalar_t__,struct dm_block**,struct array_block**) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,void const*,int) ;
 int FUNC_7 (struct dm_array_info*,struct dm_block*) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, const void *VAR_1)
{
 int VAR_2;
 uint64_t VAR_3;
 __le64 VAR_4;
 uint32_t VAR_5;
 struct dm_block *VAR_6;
 struct array_block *VAR_7;
 struct dm_array_info *VAR_8 = VAR_0;

 FUNC_6(&VAR_4, VAR_1, sizeof(VAR_4));
 VAR_3 = FUNC_5(VAR_4);

 VAR_2 = FUNC_3(VAR_8->btree_info.tm, VAR_3, &VAR_5);
 if (VAR_2) {
  FUNC_0("couldn't get reference count for block %llu",
       (unsigned long long) VAR_3);
  return;
 }

 if (VAR_5 == 1) {




  VAR_2 = FUNC_4(VAR_8, VAR_3, &VAR_6, &VAR_7);
  if (VAR_2) {
   FUNC_0("couldn't get array block %llu",
        (unsigned long long) VAR_3);
   return;
  }

  FUNC_1(VAR_8, VAR_7);
  FUNC_7(VAR_8, VAR_6);
 }

 FUNC_2(VAR_8->btree_info.tm, VAR_3);
}
