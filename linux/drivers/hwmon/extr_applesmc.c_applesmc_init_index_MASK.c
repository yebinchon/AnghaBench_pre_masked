
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applesmc_registers {unsigned int temp_begin; unsigned int temp_end; int index_count; int * index; int temp_count; } ;
struct applesmc_entry {int key; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct applesmc_entry const*) ;
 int VAR_2 ;
 struct applesmc_entry* FUNC_1 (unsigned int) ;
 int * FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct applesmc_registers *VAR_3)
{
 const struct applesmc_entry *VAR_4;
 unsigned int VAR_5;

 if (VAR_3->index)
  return 0;

 VAR_3->index = FUNC_2(VAR_3->temp_count, sizeof(VAR_3->index[0]), VAR_1);
 if (!VAR_3->index)
  return -VAR_0;

 for (VAR_5 = VAR_3->temp_begin; VAR_5 < VAR_3->temp_end; VAR_5++) {
  VAR_4 = FUNC_1(VAR_5);
  if (FUNC_0(VAR_4))
   continue;
  if (FUNC_3(VAR_4->type, VAR_2))
   continue;
  VAR_3->index[VAR_3->index_count++] = VAR_4->key;
 }

 return 0;
}
