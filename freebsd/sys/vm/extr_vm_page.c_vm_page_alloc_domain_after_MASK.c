
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_page_t ;
typedef TYPE_3__* vm_object_t ;
typedef int uintmax_t ;
struct vm_domain {TYPE_1__* vmd_pgcache; } ;
struct TYPE_27__ {int flags; int memattr; } ;
struct TYPE_26__ {int flags; int ref_count; scalar_t__ pindex; void* busy_lock; void* oflags; int * object; scalar_t__ act_count; scalar_t__ aflags; } ;
struct TYPE_25__ {int * zone; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct vm_domain* FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 void* FUNC_5 (int) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct vm_domain*,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (struct vm_domain*,int,int) ;
 int FUNC_10 (struct vm_domain*) ;
 int FUNC_11 (struct vm_domain*) ;
 int FUNC_12 (struct vm_domain*,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,TYPE_3__*,scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_18 (int,int,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 () ;
 TYPE_2__* FUNC_21 (TYPE_3__*,scalar_t__,int,int,TYPE_2__*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;

vm_page_t
FUNC_25(vm_object_t VAR_20, vm_pindex_t VAR_21, int VAR_22,
    int VAR_23, vm_page_t VAR_24)
{
 struct vm_domain *VAR_25;
 vm_page_t VAR_26;
 int VAR_27, VAR_28;

 FUNC_0((VAR_20 != ((void*)0)) == ((VAR_23 & VAR_8) == 0) &&
     (VAR_20 != ((void*)0) || (VAR_23 & VAR_9) == 0) &&
     ((VAR_23 & (VAR_6 | VAR_9)) !=
     (VAR_6 | VAR_9)),
     ("inconsistent object(%p)/req(%x)", VAR_20, VAR_23));
 FUNC_0(VAR_20 == ((void*)0) || (VAR_23 & VAR_11) == 0,
     ("Can't sleep and retry object insertion."));
 FUNC_0(VAR_24 == ((void*)0) || VAR_24->pindex < VAR_21,
     ("mpred %p doesn't precede pindex 0x%jx", VAR_24,
     (uintmax_t)VAR_21));
 if (VAR_20 != ((void*)0))
  FUNC_2(VAR_20);

 VAR_27 = 0;
 VAR_26 = ((void*)0);
 VAR_28 = VAR_20 != ((void*)0) ? VAR_14 : VAR_15;
again:
 VAR_25 = FUNC_1(VAR_22);
 if (VAR_25->vmd_pgcache[VAR_28].zone != ((void*)0)) {
  VAR_26 = FUNC_7(VAR_25->vmd_pgcache[VAR_28].zone, VAR_0);
  if (VAR_26 != ((void*)0)) {
   VAR_27 |= VAR_4;
   goto found;
  }
 }
 if (FUNC_9(VAR_25, VAR_23, 1)) {



  FUNC_10(VAR_25);
  VAR_26 = FUNC_18(VAR_22, VAR_28, 0);
  FUNC_11(VAR_25);
  if (VAR_26 == ((void*)0)) {
   FUNC_12(VAR_25, 1);




  }
 }
 if (VAR_26 == ((void*)0)) {



  if (FUNC_8(VAR_25, VAR_20, VAR_23))
   goto again;
  return (((void*)0));
 }




found:
 FUNC_15(VAR_26);
 FUNC_14(VAR_26);




 if ((VAR_23 & VAR_13) != 0)
  VAR_27 |= (VAR_26->flags & VAR_5);
 if ((VAR_23 & VAR_7) != 0)
  VAR_27 |= VAR_3;
 VAR_26->flags = VAR_27;
 VAR_26->aflags = 0;
 VAR_26->oflags = VAR_20 == ((void*)0) || (VAR_20->flags & VAR_2) != 0 ?
     VAR_19 : 0;
 VAR_26->busy_lock = VAR_18;
 if ((VAR_23 & (VAR_6 | VAR_8 | VAR_9)) == 0)
  VAR_26->busy_lock = VAR_17;
 if ((VAR_23 & VAR_9) != 0)
  VAR_26->busy_lock = FUNC_5(1);
 if (VAR_23 & VAR_12) {




  FUNC_23(1);
  VAR_26->ref_count = 1;
 }
 VAR_26->act_count = 0;

 if (VAR_20 != ((void*)0)) {
  if (FUNC_17(VAR_26, VAR_20, VAR_21, VAR_24)) {
   if (VAR_23 & VAR_12) {
    FUNC_24(1);
    VAR_26->ref_count = 0;
   }
   FUNC_0(VAR_26->object == ((void*)0), ("page %p has object", VAR_26));
   VAR_26->oflags = VAR_19;
   VAR_26->busy_lock = VAR_18;

   FUNC_16(VAR_26);
   if (VAR_23 & VAR_10) {
    FUNC_4(VAR_20);
    FUNC_20();
    FUNC_3(VAR_20);
   }
   return (((void*)0));
  }


  if (VAR_20->memattr != VAR_16 &&
      (VAR_20->flags & VAR_1) == 0)
   FUNC_6(VAR_26, VAR_20->memattr);
 } else
  VAR_26->pindex = VAR_21;

 return (VAR_26);
}
