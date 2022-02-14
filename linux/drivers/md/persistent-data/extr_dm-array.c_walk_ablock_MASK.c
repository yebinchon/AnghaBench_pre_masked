
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct walk_info {int (* fn ) (int ,unsigned int,int ) ;int info; int context; } ;
struct dm_block {int dummy; } ;
struct array_block {int nr_entries; int max_entries; } ;
typedef int block_le ;
typedef int __le64 ;


 int FUNC_0 (int ,struct array_block*,unsigned int) ;
 int FUNC_1 (int ,int ,struct dm_block**,struct array_block**) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int ,unsigned int,int ) ;
 int FUNC_6 (int ,struct dm_block*) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, uint64_t *VAR_1, void *VAR_2)
{
 struct walk_info *VAR_3 = VAR_0;

 int VAR_4;
 unsigned VAR_5;
 __le64 VAR_6;
 unsigned VAR_7, VAR_8;
 struct dm_block *VAR_9;
 struct array_block *VAR_10;

 FUNC_4(&VAR_6, VAR_2, sizeof(VAR_6));
 VAR_4 = FUNC_1(VAR_3->info, FUNC_3(VAR_6), &VAR_9, &VAR_10);
 if (VAR_4)
  return VAR_4;

 VAR_8 = FUNC_2(VAR_10->max_entries);
 VAR_7 = FUNC_2(VAR_10->nr_entries);
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  VAR_4 = VAR_3->fn(VAR_3->context, VAR_1[0] * VAR_8 + VAR_5,
      FUNC_0(VAR_3->info, VAR_10, VAR_5));

  if (VAR_4)
   break;
 }

 FUNC_6(VAR_3->info, VAR_9);
 return VAR_4;
}
