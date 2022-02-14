
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bitset_cursor {int current_bits; scalar_t__ bit_index; int array_index; int cursor; } ;
typedef int __le64 ;


 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dm_bitset_cursor *VAR_0)
{
 int VAR_1;
 __le64 *VAR_2;

 VAR_1 = FUNC_1(&VAR_0->cursor);
 if (VAR_1)
  return VAR_1;

 FUNC_0(&VAR_0->cursor, (void **) &VAR_2);
 VAR_0->array_index++;
 VAR_0->bit_index = 0;
 VAR_0->current_bits = FUNC_2(*VAR_2);
 return 0;
}
