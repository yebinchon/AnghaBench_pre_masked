
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef int zone ;
typedef int vm_offset_t ;
typedef TYPE_1__* uma_zone_t ;
typedef int * uma_zone_domain_t ;
typedef TYPE_2__* uma_cache_t ;
typedef TYPE_3__* uma_bucket_t ;
struct TYPE_27__ {size_t ub_cnt; size_t ub_entries; int ** ub_bucket; } ;
struct TYPE_26__ {TYPE_3__* uc_freebucket; TYPE_3__* uc_crossbucket; int uc_frees; TYPE_3__* uc_allocbucket; } ;
struct TYPE_25__ {int uz_flags; scalar_t__ uz_ctor; scalar_t__ uz_sleepers; scalar_t__ uz_count; size_t uz_xdomain; scalar_t__ uz_bkt_count; scalar_t__ uz_bkt_max; scalar_t__ uz_count_max; TYPE_2__* uz_cpu; int uz_name; int * uz_domain; int uz_size; int (* uz_dtor ) (void*,int ,void*) ;int (* uz_fini ) (void*,int ) ;} ;
struct TYPE_24__ {scalar_t__ td_critnest; } ;


 int FUNC_0 (int ,char*,TYPE_11__*,int ) ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (TYPE_1__*,void*,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*,void*) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_7 ;
 TYPE_11__* VAR_8 ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__**,int,int ) ;
 int FUNC_18 (void*,int ,void*) ;
 int FUNC_19 (void*,int ) ;
 int FUNC_20 (void*,int ,void*) ;
 scalar_t__ VAR_9 ;
 int FUNC_21 (void*,int ,void*) ;
 int FUNC_22 (TYPE_1__*,void*,void*) ;
 int FUNC_23 (TYPE_1__*,void*) ;
 int VAR_10 ;
 int FUNC_24 (TYPE_1__*,void*,void*,int ) ;
 int FUNC_25 (TYPE_1__*,int *,TYPE_3__*,int) ;

void
FUNC_26(uma_zone_t VAR_11, void *VAR_12, void *VAR_13)
{
 uma_cache_t VAR_14;
 uma_bucket_t VAR_15;
 uma_zone_domain_t VAR_16;
 int VAR_17, VAR_18;



 bool VAR_19;





 FUNC_17(&VAR_11, sizeof(VAR_11), VAR_2);

 FUNC_0(VAR_0, "uma_zfree_arg thread %x zone %s", VAR_8,
     VAR_11->uz_name);

 FUNC_2(VAR_8->td_critnest == 0 || FUNC_4(),
     ("uma_zfree_arg: called with spinlock or critical section held"));


        if (VAR_12 == ((void*)0))
                return;
 if (VAR_11->uz_dtor != ((void*)0))

  VAR_11->uz_dtor(VAR_12, VAR_11->uz_size, VAR_13);





 if (VAR_11->uz_sleepers > 0)
  goto zfree_item;
zfree_restart:
 FUNC_12();
 VAR_17 = VAR_7;
 VAR_14 = &VAR_11->uz_cpu[VAR_17];

zfree_start:
 VAR_18 = FUNC_3(VAR_18);
 {
  VAR_15 = VAR_14->uc_allocbucket;
  if (VAR_15 == ((void*)0) || VAR_15->ub_cnt >= VAR_15->ub_entries)
   VAR_15 = VAR_14->uc_freebucket;
 }
 if (VAR_15 != ((void*)0) && VAR_15->ub_cnt < VAR_15->ub_entries) {
  FUNC_2(VAR_15->ub_bucket[VAR_15->ub_cnt] == ((void*)0),
      ("uma_zfree: Freeing to non free bucket index."));
  VAR_15->ub_bucket[VAR_15->ub_cnt] = VAR_12;
  VAR_15->ub_cnt++;
  VAR_14->uc_frees++;
  FUNC_13();
  return;
 }
 FUNC_13();
 if (VAR_11->uz_count == 0 || VAR_6)
  goto zfree_item;

 VAR_19 = 0;
 if (FUNC_6(VAR_11) == 0) {

  FUNC_5(VAR_11);
  VAR_19 = 1;
 }
 FUNC_12();
 VAR_17 = VAR_7;
 VAR_18 = FUNC_3(VAR_18);
 VAR_14 = &VAR_11->uz_cpu[VAR_17];






  VAR_15 = VAR_14->uc_freebucket;
 if (VAR_15 != ((void*)0) && VAR_15->ub_cnt < VAR_15->ub_entries) {
  FUNC_7(VAR_11);
  goto zfree_start;
 }





  VAR_14->uc_freebucket = ((void*)0);

 FUNC_13();
 if ((VAR_11->uz_flags & VAR_5) != 0) {
  VAR_16 = &VAR_11->uz_domain[VAR_18];
 } else {
  VAR_18 = 0;
  VAR_16 = &VAR_11->uz_domain[0];
 }


 if (VAR_15 != ((void*)0)) {
  FUNC_1(VAR_0,
      "uma_zfree: zone %s(%p) putting bucket %p on free list",
      VAR_11->uz_name, VAR_11, VAR_15);

  FUNC_2(VAR_15->ub_cnt == VAR_15->ub_entries,
      ("uma_zfree: Attempting to insert not full bucket onto the full list.\n"));
  if (VAR_11->uz_bkt_count >= VAR_11->uz_bkt_max) {
   FUNC_7(VAR_11);
   FUNC_10(VAR_11, VAR_15);
   FUNC_11(VAR_11, VAR_15, VAR_13);
   goto zfree_restart;
  } else
   FUNC_25(VAR_11, VAR_16, VAR_15, 1);
 }





 if (VAR_19 && VAR_11->uz_count < VAR_11->uz_count_max)
  VAR_11->uz_count++;
 FUNC_7(VAR_11);

 VAR_15 = FUNC_9(VAR_11, VAR_13, VAR_1);
 FUNC_1(VAR_0, "uma_zfree: zone %s(%p) allocated bucket %p",
     VAR_11->uz_name, VAR_11, VAR_15);
 if (VAR_15) {
  FUNC_12();
  VAR_17 = VAR_7;
  VAR_14 = &VAR_11->uz_cpu[VAR_17];
  if (VAR_14->uc_freebucket == ((void*)0) &&
      ((VAR_11->uz_flags & VAR_5) == 0 ||
      VAR_18 == FUNC_3(VAR_18))) {
   VAR_14->uc_freebucket = VAR_15;
   goto zfree_start;
  }




  FUNC_13();
  FUNC_11(VAR_11, VAR_15, VAR_13);
  goto zfree_restart;
 }




zfree_item:
 FUNC_24(VAR_11, VAR_12, VAR_13, VAR_3);
}
