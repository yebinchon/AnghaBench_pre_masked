
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm; } ;
struct dm_array_info {TYPE_1__ btree_info; } ;
typedef int block_le ;
typedef int __le64 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void const*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const void *VAR_1)
{
 __le64 VAR_2;
 struct dm_array_info *VAR_3 = VAR_0;

 FUNC_2(&VAR_2, VAR_1, sizeof(VAR_2));
 FUNC_0(VAR_3->btree_info.tm, FUNC_1(VAR_2));
}
