
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int uintmax_t ;
struct buf {int b_bcount; int b_bufsize; int b_npages; int b_pgbefore; int b_pgafter; scalar_t__ b_blkno; int b_bufobj; void* b_wcred; void* b_rcred; int b_iodone; int b_iocmd; int b_flags; TYPE_1__** b_pages; } ;
typedef int intmax_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_20__ {int td_ucred; } ;
struct TYPE_19__ {int handle; } ;
struct TYPE_18__ {int pindex; int oflags; scalar_t__ valid; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,int ,char*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_10 (int ) ;
 int VAR_13 ;
 int FUNC_11 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (char*,int ,int ,int) ;
 int FUNC_13 (TYPE_2__*,int,int*,int*) ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (TYPE_2__*,int,int ) ;
 int FUNC_15 (struct buf*) ;
 int VAR_17 ;
 TYPE_6__ VAR_18 ;
 struct buf* FUNC_16 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_18 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int
FUNC_19(vm_object_t VAR_22, vm_page_t *VAR_23, int VAR_24, int *VAR_25,
    int *VAR_26)
{
 struct buf *VAR_27;
 vm_page_t VAR_28, VAR_29, VAR_30, VAR_31;
 vm_pindex_t VAR_32;
 daddr_t VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37;

 VAR_37 = VAR_24;
 if (!FUNC_13(VAR_22, VAR_23[0]->pindex, &VAR_36, &VAR_35))
  return (VAR_8);




 if (VAR_26 != ((void*)0)) {
  FUNC_1(VAR_37 - 1 <= VAR_35,
      ("page count %d extends beyond swap block", VAR_37));
  *VAR_26 = FUNC_11(*VAR_26, VAR_35 - (VAR_37 - 1));
  VAR_32 = VAR_23[VAR_37 - 1]->pindex;
  VAR_30 = FUNC_3(VAR_23[VAR_37 - 1], VAR_14);
  if (VAR_30 != ((void*)0) && VAR_30->pindex - VAR_32 - 1 < *VAR_26)
   *VAR_26 = VAR_30->pindex - VAR_32 - 1;
 }
 if (VAR_25 != ((void*)0)) {
  *VAR_25 = FUNC_11(*VAR_25, VAR_36);
  VAR_32 = VAR_23[0]->pindex;
  VAR_29 = FUNC_4(VAR_23[0], VAR_15, VAR_14);
  if (VAR_29 != ((void*)0) && VAR_32 - VAR_29->pindex - 1 < *VAR_25)
   *VAR_25 = VAR_32 - VAR_29->pindex - 1;
 }

 VAR_28 = VAR_23[0];
 for (VAR_34 = 0; VAR_34 < VAR_24; VAR_34++)
  VAR_23[VAR_34]->oflags |= VAR_11;




 if (VAR_25 != ((void*)0)) {
  for (VAR_34 = 1; VAR_34 <= *VAR_25; VAR_34++) {
   VAR_31 = FUNC_18(VAR_22, VAR_23[0]->pindex - VAR_34,
       VAR_6);
   if (VAR_31 == ((void*)0))
    break;
   VAR_31->oflags |= VAR_11;
   VAR_28 = VAR_31;
  }
  *VAR_25 = VAR_34 - 1;
 }
 if (VAR_26 != ((void*)0)) {
  for (VAR_34 = 0; VAR_34 < *VAR_26; VAR_34++) {
   VAR_31 = FUNC_18(VAR_22,
       VAR_23[VAR_37 - 1]->pindex + VAR_34 + 1, VAR_6);
   if (VAR_31 == ((void*)0))
    break;
   VAR_31->oflags |= VAR_11;
  }
  *VAR_26 = VAR_34;
 }
 if (VAR_25 != ((void*)0))
  VAR_24 += *VAR_25;
 if (VAR_26 != ((void*)0))
  VAR_24 += *VAR_26;

 FUNC_17(VAR_22, VAR_24);

 VAR_32 = VAR_28->pindex;
 VAR_33 = FUNC_14(VAR_22, VAR_32, 0);
 FUNC_1(VAR_33 != VAR_5,
     ("no swap blocking containing %p(%jx)", VAR_22, (uintmax_t)VAR_32));

 FUNC_9(VAR_22);
 VAR_27 = FUNC_16(VAR_17, VAR_2);

 for (VAR_34 = 0, VAR_31 = VAR_28; VAR_34 < VAR_24; VAR_34++, VAR_31 = FUNC_3(VAR_31, VAR_14)) {
  FUNC_2(VAR_31->pindex == VAR_28->pindex + VAR_34);
  VAR_27->b_pages[VAR_34] = VAR_31;
 }

 VAR_27->b_flags |= VAR_1;
 VAR_27->b_iocmd = VAR_0;
 VAR_27->b_iodone = VAR_16;
 VAR_27->b_rcred = FUNC_10(VAR_18);
 VAR_27->b_wcred = FUNC_10(VAR_18);
 VAR_27->b_blkno = VAR_33;
 VAR_27->b_bcount = VAR_3 * VAR_24;
 VAR_27->b_bufsize = VAR_3 * VAR_24;
 VAR_27->b_npages = VAR_24;
 VAR_27->b_pgbefore = VAR_25 != ((void*)0) ? *VAR_25 : 0;
 VAR_27->b_pgafter = VAR_26 != ((void*)0) ? *VAR_26 : 0;

 FUNC_6(VAR_20);
 FUNC_5(VAR_21, VAR_24);
 FUNC_0(VAR_27);
 FUNC_15(VAR_27);






 FUNC_8(VAR_22);
 while ((VAR_23[0]->oflags & VAR_11) != 0) {
  VAR_23[0]->oflags |= VAR_12;
  FUNC_6(VAR_19);
  if (FUNC_7(VAR_22, &VAR_22->handle, VAR_4,
      "swread", VAR_13 * 20)) {
   FUNC_12(
"swap_pager: indefinite wait buffer: bufobj: %p, blkno: %jd, size: %ld\n",
       VAR_27->b_bufobj, (intmax_t)VAR_27->b_blkno, VAR_27->b_bcount);
  }
 }




 for (VAR_34 = 0; VAR_34 < VAR_37; VAR_34++)
  if (VAR_23[VAR_34]->valid != VAR_10)
   return (VAR_7);

 return (VAR_9);







}
