
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_array_cursor {int cursor; int * ab; int * block; int info; scalar_t__ index; } ;
typedef int __le64 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,int ,int **,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dm_array_cursor *VAR_0)
{
 int VAR_1;
 __le64 VAR_2;
 uint64_t VAR_3;

 if (VAR_0->block)
  FUNC_5(VAR_0->info, VAR_0->block);

 VAR_0->block = ((void*)0);
 VAR_0->ab = ((void*)0);
 VAR_0->index = 0;

 VAR_1 = FUNC_2(&VAR_0->cursor, &VAR_3, &VAR_2);
 if (VAR_1) {
  FUNC_0("dm_btree_cursor_get_value failed");
  FUNC_1(&VAR_0->cursor);

 } else {
  VAR_1 = FUNC_3(VAR_0->info, FUNC_4(VAR_2), &VAR_0->block, &VAR_0->ab);
  if (VAR_1) {
   FUNC_0("get_ablock failed");
   FUNC_1(&VAR_0->cursor);
  }
 }

 return VAR_1;
}
