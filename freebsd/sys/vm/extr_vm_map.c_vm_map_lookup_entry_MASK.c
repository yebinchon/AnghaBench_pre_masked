
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ start; scalar_t__ end; struct TYPE_10__* right; struct TYPE_10__* left; } ;
struct TYPE_9__ {TYPE_2__ header; int lock; TYPE_2__* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,scalar_t__) ;

boolean_t
FUNC_5(
 vm_map_t VAR_2,
 vm_offset_t VAR_3,
 vm_map_entry_t *VAR_4)
{
 vm_map_entry_t VAR_5, VAR_6;
 boolean_t VAR_7;





 VAR_5 = VAR_2->root;
 if (VAR_5 == ((void*)0)) {
  *VAR_4 = &VAR_2->header;
  return (VAR_0);
 }
 if (VAR_3 >= VAR_5->start && VAR_5->end > VAR_3) {
  *VAR_4 = VAR_5;
  return (VAR_1);
 }
 if ((VAR_7 = FUNC_3(VAR_2)) ||
     FUNC_2(&VAR_2->lock)) {






  VAR_5 = FUNC_4(VAR_2, VAR_3);
  if (!VAR_7) {
   FUNC_0(VAR_2);
   FUNC_1(&VAR_2->lock);
  }






  if (VAR_3 < VAR_5->start) {
   *VAR_4 = &VAR_2->header;
   return (VAR_0);
  }
  *VAR_4 = VAR_5;
  return (VAR_3 < VAR_5->end);
 }




 VAR_6 = &VAR_2->header;
 do {
  if (VAR_3 < VAR_5->start) {
   VAR_5 = VAR_5->left;
  } else if (VAR_5->end <= VAR_3) {
   VAR_6 = VAR_5;
   VAR_5 = VAR_5->right;
  } else {
   *VAR_4 = VAR_5;
   return (VAR_1);
  }
 } while (VAR_5 != ((void*)0));
 *VAR_4 = VAR_6;
 return (VAR_0);
}
