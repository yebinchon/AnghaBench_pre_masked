
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_array_cursor {scalar_t__ index; int cursor; TYPE_1__* ab; int block; } ;
struct TYPE_2__ {int nr_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dm_array_cursor*) ;

int FUNC_3(struct dm_array_cursor *VAR_1)
{
 int VAR_2;

 if (!VAR_1->block)
  return -VAR_0;

 VAR_1->index++;

 if (VAR_1->index >= FUNC_1(VAR_1->ab->nr_entries)) {
  VAR_2 = FUNC_0(&VAR_1->cursor);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
