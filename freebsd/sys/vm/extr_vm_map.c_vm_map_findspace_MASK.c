
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_26__ {scalar_t__ start; scalar_t__ end; scalar_t__ max_free; struct TYPE_26__* right; struct TYPE_26__* left; } ;
struct TYPE_25__ {TYPE_2__ header; int * root; } ;


 void* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__,TYPE_2__**,TYPE_2__**) ;

vm_offset_t
FUNC_10(vm_map_t VAR_0, vm_offset_t VAR_1, vm_size_t VAR_2)
{
 vm_map_entry_t VAR_3, VAR_4, VAR_5, VAR_6;
 vm_size_t VAR_7;
 vm_offset_t VAR_8;





 VAR_1 = FUNC_0(VAR_1, FUNC_7(VAR_0));
 if (VAR_1 >= FUNC_6(VAR_0) || VAR_2 > FUNC_6(VAR_0) - VAR_1)
  return (FUNC_6(VAR_0) - VAR_2 + 1);


 if (VAR_0->root == ((void*)0))
  return (VAR_1);
 VAR_5 = FUNC_9(VAR_0, VAR_1, VAR_2, &VAR_3, &VAR_4);
 VAR_8 = VAR_4->start;
 if (VAR_5 != ((void*)0)) {
  VAR_1 = VAR_5->end;
  if (VAR_5->right != ((void*)0))
   VAR_8 = VAR_1;
 } else if (VAR_4 != &VAR_0->header) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_5->left;
  VAR_5->left = ((void*)0);
 } else {
  VAR_5 = VAR_3;
  VAR_3 = VAR_5->right;
  VAR_5->right = ((void*)0);
 }
 FUNC_8(VAR_0, VAR_5, VAR_3, VAR_4);
 FUNC_3(VAR_0);
 if (VAR_2 <= VAR_8 - VAR_1)
  return (VAR_1);


 if (VAR_5->right == ((void*)0) || VAR_2 > VAR_5->right->max_free)
  return (FUNC_6(VAR_0) - VAR_2 + 1);




 VAR_3 = VAR_4 = &VAR_0->header;
 for (VAR_7 = 0;;
     VAR_7 = FUNC_4(VAR_5, VAR_3)) {
  if (VAR_2 <= VAR_7)
   FUNC_1(VAR_5, VAR_6, VAR_4,
       VAR_2 <= FUNC_4(VAR_6, VAR_3));
  else
   FUNC_2(VAR_5, VAR_6, VAR_3,
       VAR_2 > FUNC_4(VAR_6, VAR_5));
  if (VAR_5 == ((void*)0))
   break;
 }
 VAR_5 = VAR_3;
 VAR_3 = VAR_5->right;
 VAR_5->right = ((void*)0);
 if (VAR_4 != &VAR_0->header) {
  VAR_6 = VAR_4;
  VAR_4 = VAR_6->left;
  VAR_6->left = ((void*)0);
  FUNC_8(VAR_0, VAR_6, &VAR_0->header, VAR_4);
  VAR_6->max_free = FUNC_0(
      FUNC_4(VAR_6, VAR_5),
      FUNC_5(VAR_6, &VAR_0->header));
  VAR_5->right = VAR_6;
 }
 FUNC_8(VAR_0, VAR_5, VAR_3, &VAR_0->header);
 FUNC_3(VAR_0);
 return (VAR_5->end);
}
