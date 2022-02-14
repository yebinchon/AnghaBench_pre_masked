
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_entry {int filled; scalar_t__ tagged; } ;
struct TYPE_3__ {unsigned int nr_objects; struct object_entry* objects; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct object_entry**,unsigned int*,struct object_entry*) ;
 int FUNC_1 (struct object_entry**,unsigned int*,struct object_entry*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct object_entry*) ;
 scalar_t__ FUNC_3 (struct object_entry*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4(struct object_entry **VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 struct object_entry *VAR_9 = VAR_3.objects;

 for (VAR_7 = 0; VAR_7 < VAR_3.nr_objects; VAR_7++) {
  if (VAR_9[VAR_7].tagged)
   break;
  FUNC_1(VAR_5, VAR_6, &VAR_9[VAR_7]);
 }
 VAR_8 = VAR_7;




 for (; VAR_7 < VAR_3.nr_objects; VAR_7++) {
  if (VAR_9[VAR_7].tagged)
   FUNC_1(VAR_5, VAR_6, &VAR_9[VAR_7]);
 }




 for (VAR_7 = VAR_8; VAR_7 < VAR_3.nr_objects; VAR_7++) {
  if (FUNC_3(&VAR_9[VAR_7]) != VAR_0 &&
      FUNC_3(&VAR_9[VAR_7]) != VAR_1)
   continue;
  FUNC_1(VAR_5, VAR_6, &VAR_9[VAR_7]);
 }




 for (VAR_7 = VAR_8; VAR_7 < VAR_3.nr_objects; VAR_7++) {
  if (FUNC_3(&VAR_9[VAR_7]) != VAR_2)
   continue;
  FUNC_1(VAR_5, VAR_6, &VAR_9[VAR_7]);
 }




 for (VAR_7 = VAR_8; VAR_7 < VAR_3.nr_objects; VAR_7++) {
  if (!VAR_9[VAR_7].filled && FUNC_2(&VAR_3, &VAR_9[VAR_7]) == VAR_4)
   FUNC_0(VAR_5, VAR_6, &VAR_9[VAR_7]);
 }
}
