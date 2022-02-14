
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dm_array_cursor {scalar_t__ index; TYPE_1__* ab; } ;
struct TYPE_2__ {int nr_entries; } ;


 int FUNC_0 (struct dm_array_cursor*) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct dm_array_cursor *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 do {
  uint32_t VAR_3 = FUNC_1(VAR_0->ab->nr_entries) - VAR_0->index;

  if (VAR_1 < VAR_3) {
   VAR_0->index += VAR_1;
   return 0;
  }

  VAR_1 -= VAR_3;
  VAR_2 = FUNC_0(VAR_0);

 } while (!VAR_2);

 return VAR_2;
}
