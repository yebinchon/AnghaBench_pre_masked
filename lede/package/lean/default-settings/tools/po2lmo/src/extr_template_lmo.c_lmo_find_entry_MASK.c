
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int key_id; } ;
typedef TYPE_1__ lmo_entry_t ;
struct TYPE_6__ {int length; TYPE_1__* index; } ;
typedef TYPE_2__ lmo_archive_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static lmo_entry_t * FUNC_1(lmo_archive_t *VAR_0, uint32_t VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 uint32_t VAR_5;

 VAR_3 = 0;
 VAR_4 = VAR_0->length - 1;

 while (1)
 {
  VAR_2 = VAR_3 + ((VAR_4 - VAR_3) / 2);

  if (VAR_4 < VAR_3)
   break;

  VAR_5 = FUNC_0(VAR_0->index[VAR_2].key_id);

  if (VAR_5 == VAR_1)
   return &VAR_0->index[VAR_2];

  if (VAR_5 > VAR_1)
  {
   if (!VAR_2)
    break;

   VAR_4 = VAR_2 - 1;
  }
  else
  {
   VAR_3 = VAR_2 + 1;
  }
 }

 return ((void*)0);
}
