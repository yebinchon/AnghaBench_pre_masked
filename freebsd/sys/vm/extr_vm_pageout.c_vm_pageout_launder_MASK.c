
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vm_pagequeue {int pq_cnt; } ;
struct vm_domain {struct vm_pagequeue* vmd_pagequeues; TYPE_1__* vmd_markers; } ;
struct scan_state {int scanned; } ;
struct mtx {int dummy; } ;
struct TYPE_27__ {scalar_t__ ref_count; int flags; scalar_t__ type; } ;
struct TYPE_26__ {int flags; int aflags; scalar_t__ dirty; int act_count; TYPE_2__* object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_2__**) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (struct mtx*) ;
 int FUNC_9 (struct mtx*) ;
 int VAR_11 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,struct mtx**) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 scalar_t__ FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*,int*) ;
 int FUNC_28 (struct scan_state*) ;
 int FUNC_29 (struct scan_state*,struct vm_pagequeue*,TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_30 (struct scan_state*,int) ;
 int FUNC_31 (struct vm_pagequeue*) ;
 int FUNC_32 (struct vm_pagequeue*) ;

__attribute__((used)) static int
FUNC_33(struct vm_domain *VAR_15, int VAR_16, bool VAR_17)
{
 struct scan_state VAR_18;
 struct vm_pagequeue *VAR_19;
 struct mtx *VAR_20;
 vm_object_t VAR_21;
 vm_page_t VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;
 bool VAR_30;

 VAR_20 = ((void*)0);
 VAR_21 = ((void*)0);
 VAR_28 = VAR_16;
 VAR_29 = 0;
 if (FUNC_6(&VAR_12))
  VAR_27 = VAR_9;
 else
  VAR_27 = VAR_8;

scan:
 VAR_23 = &VAR_15->vmd_markers[VAR_27];
 VAR_19 = &VAR_15->vmd_pagequeues[VAR_27];
 FUNC_31(VAR_19);
 FUNC_29(&VAR_18, VAR_19, VAR_23, ((void*)0), VAR_19->pq_cnt);
 while (VAR_16 > 0 && (VAR_22 = FUNC_30(&VAR_18, 0)) != ((void*)0)) {
  if (FUNC_5((VAR_22->flags & VAR_7) != 0))
   continue;

  FUNC_15(VAR_22, &VAR_20);

recheck:






  if (FUNC_20(VAR_22) != VAR_27)
   continue;





  if ((VAR_22->aflags & VAR_6) != 0) {
   FUNC_19(VAR_22, VAR_27);
   continue;
  }
  if (FUNC_25(VAR_22)) {
   FUNC_16(VAR_22);
   continue;
  }

  if (VAR_21 != VAR_22->object) {
   if (VAR_21 != ((void*)0))
    FUNC_4(VAR_21);





   VAR_21 = (vm_object_t)FUNC_7(&VAR_22->object);
   if (VAR_21 != ((void*)0) && !FUNC_2(VAR_21)) {
    FUNC_9(VAR_20);

    FUNC_3(VAR_21);
    FUNC_8(VAR_20);
    goto recheck;
   }
  }
  if (FUNC_5(VAR_22->object == ((void*)0)))



   continue;
  FUNC_0(VAR_22->object == VAR_21, ("page %p does not belong to %p",
      VAR_22, VAR_21));

  if (FUNC_24(VAR_22) == 0)
   continue;
  if (FUNC_5(FUNC_25(VAR_22))) {
   FUNC_26(VAR_22);
   FUNC_16(VAR_22);
   continue;
  }





  if (FUNC_18(VAR_22))
   goto free_page;
  if (VAR_21->ref_count != 0)
   VAR_24 = FUNC_11(VAR_22);
  else {
   FUNC_0(!FUNC_10(VAR_22),
       ("page %p is mapped", VAR_22));
   VAR_24 = 0;
  }
  if ((VAR_22->aflags & VAR_5) != 0) {
   FUNC_14(VAR_22, VAR_5);
   VAR_24++;
  }
  if (VAR_24 != 0) {
   if (VAR_21->ref_count != 0) {
    FUNC_26(VAR_22);
    FUNC_1(VAR_14);
    FUNC_13(VAR_22);
    VAR_22->act_count += VAR_24 + VAR_0;
    if (!VAR_17)
     VAR_16--;
    continue;
   } else if ((VAR_21->flags & VAR_4) == 0) {
    FUNC_26(VAR_22);
    FUNC_21(VAR_22);
    continue;
   }
  }
  if (VAR_21->ref_count != 0) {
   FUNC_22(VAR_22);
   if (VAR_22->dirty == 0 && !FUNC_23(VAR_22)) {
    FUNC_26(VAR_22);
    FUNC_16(VAR_22);
    continue;
   }
  }







  if (VAR_22->dirty == 0) {
free_page:
   FUNC_17(VAR_22);
   FUNC_1(VAR_13);
  } else if ((VAR_21->flags & VAR_4) == 0) {
   if (VAR_21->type != VAR_3 &&
       VAR_21->type != VAR_2)
    VAR_30 = 1;
   else if (VAR_10)
    VAR_30 = 0;
   else
    VAR_30 = 1;
   if (!VAR_30) {
    FUNC_26(VAR_22);
    FUNC_21(VAR_22);
    continue;
   }
   VAR_25 = FUNC_27(VAR_22, &VAR_26);
   if (VAR_25 == 0) {
    VAR_16 -= VAR_26;
    VAR_18.scanned += VAR_26;
   } else if (VAR_25 == VAR_1) {
    VAR_11++;
    VAR_29++;
   }
   VAR_20 = ((void*)0);
   VAR_21 = ((void*)0);
  } else
   FUNC_26(VAR_22);
 }
 if (VAR_20 != ((void*)0)) {
  FUNC_9(VAR_20);
  VAR_20 = ((void*)0);
 }
 if (VAR_21 != ((void*)0)) {
  FUNC_4(VAR_21);
  VAR_21 = ((void*)0);
 }
 FUNC_31(VAR_19);
 FUNC_28(&VAR_18);
 FUNC_32(VAR_19);

 if (VAR_16 > 0 && VAR_27 == VAR_9) {
  VAR_27 = VAR_8;
  goto scan;
 }





 if (VAR_29 > 0 && VAR_16 > 0)
  (void)FUNC_12();

 return (VAR_28 - VAR_16);
}
