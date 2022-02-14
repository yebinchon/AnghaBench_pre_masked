
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vm_pagequeue {scalar_t__ pq_cnt; } ;
struct vm_domain {scalar_t__ vmd_laundry_request; int vmd_clean_pages_freed; struct vm_pagequeue* vmd_pagequeues; TYPE_1__* vmd_markers; int vmd_pageout_deficit; } ;
struct vm_batchqueue {int dummy; } ;
struct scan_state {struct vm_batchqueue bq; } ;
struct mtx {int dummy; } ;
struct TYPE_27__ {scalar_t__ ref_count; int flags; } ;
struct TYPE_26__ {int flags; int aflags; scalar_t__ dirty; int queue; int act_count; TYPE_2__* object; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mtx*) ;
 int FUNC_11 (struct mtx*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (struct vm_batchqueue*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,struct mtx**) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 size_t FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (struct scan_state*) ;
 int FUNC_30 (struct scan_state*,struct vm_pagequeue*,TYPE_1__*,int *,scalar_t__) ;
 int FUNC_31 (struct vm_domain*,int,int) ;
 TYPE_1__* FUNC_32 (struct scan_state*,int) ;
 int FUNC_33 (struct scan_state*,struct vm_batchqueue*,TYPE_1__*) ;
 int FUNC_34 (struct vm_pagequeue*) ;
 int FUNC_35 (struct vm_pagequeue*) ;
 int FUNC_36 () ;
 int FUNC_37 () ;
 int FUNC_38 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_39(struct vm_domain *VAR_18, int VAR_19,
    int *VAR_20)
{
 struct scan_state VAR_21;
 struct vm_batchqueue VAR_22;
 struct mtx *VAR_23;
 vm_page_t VAR_24, VAR_25;
 struct vm_pagequeue *VAR_26;
 vm_object_t VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32;







 VAR_29 = 0;







 VAR_30 = FUNC_9(&VAR_18->vmd_pageout_deficit);
 VAR_32 = VAR_31 = VAR_19 + VAR_30;

 VAR_23 = ((void*)0);
 VAR_27 = ((void*)0);
 FUNC_14(&VAR_22);







 VAR_25 = &VAR_18->vmd_markers[VAR_8];
 VAR_26 = &VAR_18->vmd_pagequeues[VAR_8];
 FUNC_34(VAR_26);
 FUNC_30(&VAR_21, VAR_26, VAR_25, ((void*)0), VAR_26->pq_cnt);
 while (VAR_31 > 0 && (VAR_24 = FUNC_32(&VAR_21, 1)) != ((void*)0)) {
  FUNC_0((VAR_24->flags & VAR_7) == 0,
      ("marker page %p was dequeued", VAR_24));

  FUNC_18(VAR_24, &VAR_23);

recheck:






  if (FUNC_23(VAR_24) != VAR_8) {
   VAR_29++;
   continue;
  }






  if ((VAR_24->aflags & (VAR_2 | VAR_5 |
      VAR_6)) != 0)
   goto reinsert;
  if (FUNC_27(VAR_24)) {
   FUNC_19(VAR_24);
   continue;
  }

  if (VAR_27 != VAR_24->object) {
   if (VAR_27 != ((void*)0))
    FUNC_5(VAR_27);





   VAR_27 = (vm_object_t)FUNC_8(&VAR_24->object);
   if (VAR_27 != ((void*)0) && !FUNC_3(VAR_27)) {
    FUNC_11(VAR_23);

    FUNC_4(VAR_27);
    FUNC_10(VAR_23);
    goto recheck;
   }
  }
  if (FUNC_6(VAR_24->object == ((void*)0)))



   continue;
  FUNC_0(VAR_24->object == VAR_27, ("page %p does not belong to %p",
      VAR_24, VAR_27));

  if (FUNC_26(VAR_24) == 0) {
   VAR_29++;
   goto reinsert;
  }
  if (FUNC_6(FUNC_27(VAR_24))) {
   FUNC_28(VAR_24);
   FUNC_19(VAR_24);
   continue;
  }





  if (FUNC_22(VAR_24))
   goto free_page;
  if (VAR_27->ref_count != 0)
   VAR_28 = FUNC_13(VAR_24);
  else {
   FUNC_0(!FUNC_12(VAR_24),
       ("page %p is mapped", VAR_24));
   VAR_28 = 0;
  }
  if ((VAR_24->aflags & VAR_4) != 0) {
   FUNC_16(VAR_24, VAR_4);
   VAR_28++;
  }
  if (VAR_28 != 0) {
   if (VAR_27->ref_count != 0) {
    FUNC_28(VAR_24);
    FUNC_2(VAR_17);
    FUNC_15(VAR_24);
    VAR_24->act_count += VAR_28 + VAR_0;
    continue;
   } else if ((VAR_27->flags & VAR_1) == 0) {
    FUNC_28(VAR_24);
    FUNC_17(VAR_24, VAR_5);
    goto reinsert;
   }
  }
  if (VAR_27->ref_count != 0) {
   FUNC_24(VAR_24);
   if (VAR_24->dirty == 0 && !FUNC_25(VAR_24)) {
    FUNC_28(VAR_24);
    FUNC_19(VAR_24);
    continue;
   }
  }
  if (VAR_24->dirty == 0) {
free_page:






   FUNC_0((VAR_24->aflags & VAR_3) == 0,
       ("page %p has queue state", VAR_24));
   VAR_24->queue = VAR_10;
   FUNC_20(VAR_24);
   VAR_31--;
   continue;
  }
  FUNC_28(VAR_24);
  if ((VAR_27->flags & VAR_1) == 0)
   FUNC_21(VAR_24);
  continue;
reinsert:
  FUNC_33(&VAR_21, &VAR_22, VAR_24);
 }
 if (VAR_23 != ((void*)0))
  FUNC_11(VAR_23);
 if (VAR_27 != ((void*)0))
  FUNC_5(VAR_27);
 FUNC_33(&VAR_21, &VAR_22, ((void*)0));
 FUNC_33(&VAR_21, &VAR_21.bq, ((void*)0));
 FUNC_34(VAR_26);
 FUNC_29(&VAR_21);
 FUNC_35(VAR_26);

 FUNC_1(VAR_15, VAR_32 - VAR_31);
 if (VAR_32 > 0) {
  VAR_26 = &VAR_18->vmd_pagequeues[VAR_9];
  FUNC_34(VAR_26);
  if (VAR_18->vmd_laundry_request == VAR_12 &&
      (VAR_26->pq_cnt > 0 || FUNC_7(&VAR_14))) {
   if (VAR_31 > 0) {
    VAR_18->vmd_laundry_request = VAR_13;
    FUNC_2(VAR_16);
   } else if (VAR_18->vmd_laundry_request !=
       VAR_13)
    VAR_18->vmd_laundry_request =
        VAR_11;
   FUNC_38(&VAR_18->vmd_laundry_request);
  }
  VAR_18->vmd_clean_pages_freed +=
      VAR_32 - VAR_31;
  FUNC_35(VAR_26);
 }





 if (VAR_31 > 0)
  FUNC_36();





 FUNC_31(VAR_18, VAR_31, VAR_32);




 FUNC_37();




 *VAR_20 = VAR_29 + VAR_30;

 return (VAR_31 <= 0);
}
