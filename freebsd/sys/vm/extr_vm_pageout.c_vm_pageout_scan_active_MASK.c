
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vm_pagequeue {long pq_cnt; int pq_pl; } ;
struct vm_domain {int vmd_last_active_scan; TYPE_1__* vmd_clock; struct vm_pagequeue* vmd_pagequeues; TYPE_1__* vmd_markers; } ;
struct scan_state {scalar_t__ scanned; } ;
struct mtx {int dummy; } ;
struct TYPE_21__ {scalar_t__ ref_count; } ;
struct TYPE_20__ {int flags; int aflags; scalar_t__ act_count; scalar_t__ dirty; int object; } ;
struct TYPE_19__ {int q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int *) ;
 long VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct mtx*) ;
 TYPE_13__ VAR_10 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,struct mtx**) ;
 int FUNC_11 (TYPE_1__*) ;
 size_t FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,size_t,int ) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct scan_state*) ;
 int FUNC_16 (struct scan_state*,struct vm_pagequeue*,TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_17 (struct scan_state*,int) ;
 long VAR_12 ;
 int FUNC_18 (struct vm_pagequeue*) ;
 int FUNC_19 (struct vm_pagequeue*) ;

__attribute__((used)) static void
FUNC_20(struct vm_domain *VAR_13, int VAR_14)
{
 struct scan_state VAR_15;
 struct mtx *VAR_16;
 vm_object_t VAR_17;
 vm_page_t VAR_18, VAR_19;
 struct vm_pagequeue *VAR_20;
 long VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_19 = &VAR_13->vmd_markers[VAR_5];
 VAR_20 = &VAR_13->vmd_pagequeues[VAR_5];
 FUNC_18(VAR_20);





 VAR_24 = VAR_11;
 if (VAR_12 != 0) {
  VAR_21 = VAR_20->pq_cnt;
  VAR_21 *= VAR_24 - VAR_13->vmd_last_active_scan;
  VAR_21 /= VAR_9 * VAR_12;
 } else
  VAR_21 = 0;
 if (VAR_21 > 0 || (VAR_14 > 0 && VAR_20->pq_cnt > 0))
  VAR_13->vmd_last_active_scan = VAR_24;
 VAR_23 = VAR_14 > 0 ? VAR_20->pq_cnt : VAR_21;
 VAR_16 = ((void*)0);
act_scan:
 FUNC_16(&VAR_15, VAR_20, VAR_19, &VAR_13->vmd_clock[0], VAR_23);
 while ((VAR_18 = FUNC_17(&VAR_15, 0)) != ((void*)0)) {
  if (FUNC_4(VAR_18 == &VAR_13->vmd_clock[1])) {
   FUNC_18(VAR_20);
   FUNC_3(&VAR_20->pq_pl, &VAR_13->vmd_clock[0], VAR_10.q);
   FUNC_3(&VAR_20->pq_pl, &VAR_13->vmd_clock[1], VAR_10.q);
   FUNC_1(&VAR_20->pq_pl, &VAR_13->vmd_clock[0],
       VAR_10.q);
   FUNC_2(&VAR_20->pq_pl, &VAR_13->vmd_clock[1],
       VAR_10.q);
   VAR_23 -= VAR_15.scanned;
   FUNC_15(&VAR_15);
   goto act_scan;
  }
  if (FUNC_4((VAR_18->flags & VAR_4) != 0))
   continue;

  FUNC_10(VAR_18, &VAR_16);







  if (FUNC_12(VAR_18) != VAR_5)
   continue;




  if (FUNC_14(VAR_18)) {
   FUNC_11(VAR_18);
   continue;
  }





  VAR_17 = (vm_object_t)FUNC_5(&VAR_18->object);
  if (FUNC_4(VAR_17 == ((void*)0)))



   continue;
  if (VAR_17->ref_count != 0)
   VAR_22 = FUNC_8(VAR_18);
  else
   VAR_22 = 0;
  if ((VAR_18->aflags & VAR_3) != 0) {
   FUNC_9(VAR_18, VAR_3);
   VAR_22++;
  }




  if (VAR_22 != 0) {
   VAR_18->act_count += VAR_0 + VAR_22;
   if (VAR_18->act_count > VAR_2)
    VAR_18->act_count = VAR_2;
  } else
   VAR_18->act_count -= FUNC_6(VAR_18->act_count, VAR_1);

  if (VAR_18->act_count == 0) {
   if (VAR_14 <= 0) {
    FUNC_13(VAR_18, VAR_5, VAR_6);
   } else {
    if (VAR_18->dirty == 0) {
     FUNC_13(VAR_18, VAR_5,
         VAR_6);
     VAR_14 -=
         VAR_8;
    } else {
     FUNC_13(VAR_18, VAR_5,
         VAR_7);
     VAR_14--;
    }
   }
  }
 }
 if (VAR_16 != ((void*)0)) {
  FUNC_7(VAR_16);
  VAR_16 = ((void*)0);
 }
 FUNC_18(VAR_20);
 FUNC_3(&VAR_20->pq_pl, &VAR_13->vmd_clock[0], VAR_10.q);
 FUNC_0(&VAR_20->pq_pl, VAR_19, &VAR_13->vmd_clock[0], VAR_10.q);
 FUNC_15(&VAR_15);
 FUNC_19(VAR_20);
}
