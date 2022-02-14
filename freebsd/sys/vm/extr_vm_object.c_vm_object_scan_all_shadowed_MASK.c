
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ size; int backing_object_offset; struct TYPE_15__* backing_object; } ;
struct TYPE_14__ {scalar_t__ pindex; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int *,int *) ;

__attribute__((used)) static bool
FUNC_9(vm_object_t VAR_3)
{
 vm_object_t VAR_4;
 vm_page_t VAR_5, VAR_6;
 vm_pindex_t VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_3(VAR_3);
 FUNC_3(VAR_3->backing_object);

 VAR_4 = VAR_3->backing_object;

 if (VAR_4->type != VAR_0 &&
     VAR_4->type != VAR_1)
  return (0);

 VAR_9 = VAR_7 = FUNC_1(VAR_3->backing_object_offset);
 VAR_5 = FUNC_5(VAR_4, VAR_9);
 VAR_10 = FUNC_4(VAR_4, VAR_9);





 for (;; VAR_9++) {
  if (VAR_5 != ((void*)0) && VAR_5->pindex < VAR_9)
   VAR_5 = FUNC_2(VAR_5, VAR_2);
  if (VAR_10 < VAR_9)
   VAR_10 = FUNC_4(VAR_4, VAR_9);
  if (VAR_5 == ((void*)0) && VAR_10 >= VAR_4->size)
   break;
  else if (VAR_5 == ((void*)0))
   VAR_9 = VAR_10;
  else
   VAR_9 = FUNC_0(VAR_5->pindex, VAR_10);

  VAR_8 = VAR_9 - VAR_7;
  if (VAR_8 >= VAR_3->size)
   break;
  VAR_6 = FUNC_6(VAR_3, VAR_8);




  if ((VAR_6 == ((void*)0) || FUNC_7(VAR_6)) &&
      !FUNC_8(VAR_3, VAR_8, ((void*)0), ((void*)0)))
   return (0);
 }
 return (1);
}
