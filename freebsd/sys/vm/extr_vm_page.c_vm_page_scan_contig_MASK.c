
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef TYPE_2__* vm_object_t ;
typedef int u_long ;
struct mtx {int dummy; } ;
struct TYPE_18__ {scalar_t__ type; scalar_t__ memattr; } ;
struct TYPE_17__ {int flags; int ref_count; int oflags; int order; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mtx*) ;
 int FUNC_7 (struct mtx*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,struct mtx**) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int) ;

vm_page_t
FUNC_20(u_long VAR_13, vm_page_t VAR_14, vm_page_t VAR_15,
    u_long VAR_16, vm_paddr_t VAR_17, int VAR_18)
{
 struct mtx *VAR_19;
 vm_object_t VAR_20;
 vm_paddr_t VAR_21;
 vm_page_t VAR_22, VAR_23;



 int VAR_24, VAR_25, VAR_26, VAR_27;

 FUNC_0(VAR_13 > 0, ("npages is 0"));
 FUNC_0(FUNC_9(VAR_16), ("alignment is not a power of 2"));
 FUNC_0(FUNC_9(VAR_17), ("boundary is not a power of 2"));
 VAR_23 = ((void*)0);
 VAR_27 = 0;
 VAR_19 = ((void*)0);
 for (VAR_22 = VAR_14; VAR_22 < VAR_15 && VAR_27 < VAR_13; VAR_22 += VAR_24) {
  FUNC_0((VAR_22->flags & VAR_4) == 0,
      ("page %p is PG_MARKER", VAR_22));
  FUNC_0((VAR_22->flags & VAR_3) == 0 || VAR_22->ref_count >= 1,
      ("fictitious page %p has invalid ref count", VAR_22));
  if (VAR_27 == 0) {
   FUNC_0(VAR_23 == ((void*)0), ("m_run != NULL"));
   if (VAR_22 + VAR_13 > VAR_15)
    break;
   VAR_21 = FUNC_4(VAR_22);
   if ((VAR_21 & (VAR_16 - 1)) != 0) {
    VAR_24 = FUNC_5(FUNC_12(VAR_21, VAR_16) - VAR_21);
    continue;
   }
   if (FUNC_11(VAR_21 ^ (VAR_21 + FUNC_10(VAR_13) - 1),
       VAR_17) != 0) {
    VAR_24 = FUNC_5(FUNC_12(VAR_21, VAR_17) - VAR_21);
    continue;
   }
  } else
   FUNC_0(VAR_23 != ((void*)0), ("m_run == NULL"));

  FUNC_14(VAR_22, &VAR_19);
  VAR_24 = 1;
retry:
  if (FUNC_16(VAR_22))
   VAR_26 = 0;
  else if ((VAR_20 = VAR_22->object) != ((void*)0)) {





   if (!FUNC_3(VAR_20)) {
    FUNC_7(VAR_19);
    FUNC_1(VAR_20);
    FUNC_6(VAR_19);
    if (VAR_22->object != VAR_20) {



     FUNC_2(VAR_20);
     goto retry;
    }
   }

   if (VAR_20->type != VAR_0 &&
       VAR_20->type != VAR_1 &&
       VAR_20->type != VAR_2) {
    VAR_26 = 0;
   } else if (VAR_20->memattr == VAR_6 &&
       FUNC_15(VAR_22) != VAR_5 && !FUNC_13(VAR_22) &&
       !FUNC_16(VAR_22)) {





    FUNC_0(FUNC_8(VAR_22) ==
        VAR_6,
        ("page %p has an unexpected memattr", VAR_22));
    FUNC_0((VAR_22->oflags & (VAR_8 |
        VAR_9 | VAR_10)) == 0,
        ("page %p has unexpected oflags", VAR_22));

    VAR_26 = 1;
   } else
    VAR_26 = 0;
   FUNC_2(VAR_20);
  } else if ((VAR_25 = VAR_22->order) < VAR_7) {







   VAR_26 = 1 << VAR_25;
   VAR_24 = 1 << VAR_25;
  } else {
   VAR_26 = 0;
  }




  if (VAR_26 > 0) {
   if (VAR_27 == 0)
    VAR_23 = VAR_22;
   VAR_27 += VAR_26;
  } else {
   if (VAR_27 > 0) {
    VAR_23 = ((void*)0);
    VAR_27 = 0;
   }
  }
 }
 if (VAR_19 != ((void*)0))
  FUNC_7(VAR_19);
 if (VAR_27 >= VAR_13)
  return (VAR_23);
 return (((void*)0));
}
