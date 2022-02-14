
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resize {int info; int value; int old_nr_full_blocks; int root; } ;
struct dm_block {int dummy; } ;
struct array_block {int dummy; } ;


 int FUNC_0 (int ,struct array_block*,int ,int ) ;
 int FUNC_1 (int ,int *,int ,struct dm_block**,struct array_block**) ;
 int FUNC_2 (int ,struct dm_block*) ;

__attribute__((used)) static int FUNC_3(struct resize *VAR_0, uint32_t VAR_1)
{
 int VAR_2;
 struct dm_block *VAR_3;
 struct array_block *VAR_4;

 VAR_2 = FUNC_1(VAR_0->info, &VAR_0->root,
     VAR_0->old_nr_full_blocks, &VAR_3, &VAR_4);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_0->info, VAR_4, VAR_0->value, VAR_1);
 FUNC_2(VAR_0->info, VAR_3);

 return VAR_2;
}
