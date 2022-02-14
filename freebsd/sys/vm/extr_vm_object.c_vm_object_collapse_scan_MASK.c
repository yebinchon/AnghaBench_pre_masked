
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_29__ {scalar_t__ size; scalar_t__ type; int memq; int backing_object_offset; struct TYPE_29__* backing_object; } ;
struct TYPE_28__ {scalar_t__ pindex; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_2__*,scalar_t__,int *,int *) ;
 int FUNC_17 (TYPE_1__*,TYPE_2__*,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_18(vm_object_t VAR_4, int VAR_5)
{
 vm_object_t VAR_6;
 vm_page_t VAR_7, VAR_8, VAR_9;
 vm_pindex_t VAR_10, VAR_11;

 FUNC_4(VAR_4);
 FUNC_4(VAR_4->backing_object);

 VAR_6 = VAR_4->backing_object;
 VAR_10 = FUNC_1(VAR_4->backing_object_offset);




 if ((VAR_5 & VAR_2) != 0)
  FUNC_8(VAR_6, VAR_1);




 for (VAR_8 = FUNC_2(&VAR_6->memq); VAR_8 != ((void*)0); VAR_8 = VAR_7) {
  VAR_7 = FUNC_3(VAR_8, VAR_3);
  VAR_11 = VAR_8->pindex - VAR_10;




  if (FUNC_14(VAR_8) == 0) {
   VAR_7 = FUNC_7(VAR_4, VAR_8, VAR_7, VAR_5);
   continue;
  }

  FUNC_0(VAR_8->object == VAR_6,
      ("vm_object_collapse_scan: object mismatch"));

  if (VAR_8->pindex < VAR_10 ||
      VAR_11 >= VAR_4->size) {
   if (VAR_6->type == VAR_0)
    FUNC_6(VAR_6, VAR_8->pindex,
        1);

   FUNC_0(!FUNC_5(VAR_8),
       ("freeing mapped page %p", VAR_8));
   if (FUNC_12(VAR_8))
    FUNC_9(VAR_8);
   else
    FUNC_15(VAR_8);
   continue;
  }

  VAR_9 = FUNC_10(VAR_4, VAR_11);
  if (VAR_9 != ((void*)0) && FUNC_14(VAR_9) == 0) {
   FUNC_15(VAR_8);
   VAR_7 = FUNC_7(VAR_4, VAR_9, VAR_7,
       VAR_5);
   continue;
  }

  FUNC_0(VAR_9 == ((void*)0) || !FUNC_11(VAR_9),
      ("unbusy invalid page %p", VAR_9));

  if (VAR_9 != ((void*)0) || FUNC_16(VAR_4, VAR_11, ((void*)0),
   ((void*)0))) {






   if (VAR_6->type == VAR_0)
    FUNC_6(VAR_6, VAR_8->pindex,
        1);
   FUNC_0(!FUNC_5(VAR_8),
       ("freeing mapped page %p", VAR_8));
   if (FUNC_12(VAR_8))
    FUNC_9(VAR_8);
   else
    FUNC_15(VAR_8);
   if (VAR_9 != ((void*)0))
    FUNC_15(VAR_9);
   continue;
  }
  if (FUNC_13(VAR_8, VAR_4, VAR_11)) {
   FUNC_15(VAR_8);
   if (VAR_9 != ((void*)0))
    FUNC_15(VAR_9);
   VAR_7 = FUNC_7(VAR_4, ((void*)0), VAR_7,
       VAR_5);
   continue;
  }


  if (VAR_6->type == VAR_0)
   FUNC_6(VAR_6,
       VAR_11 + VAR_10, 1);
  FUNC_15(VAR_8);
 }
 return (1);
}
