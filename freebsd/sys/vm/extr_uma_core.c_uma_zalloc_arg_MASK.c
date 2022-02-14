
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int zone ;
typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_zone_domain_t ;
typedef TYPE_3__* uma_cache_t ;
typedef TYPE_4__* uma_bucket_t ;
struct TYPE_39__ {size_t ub_cnt; int ** ub_bucket; } ;
struct TYPE_38__ {TYPE_4__* uc_allocbucket; TYPE_4__* uc_freebucket; int uc_allocs; } ;
struct TYPE_37__ {int uzd_imax; } ;
struct TYPE_36__ {scalar_t__ td_critnest; } ;
struct TYPE_35__ {int uz_flags; scalar_t__ (* uz_init ) (void*,int ,int) ;scalar_t__ (* uz_ctor ) (void*,int ,void*,int) ;scalar_t__ uz_dtor; int uz_count; int uz_count_max; scalar_t__ uz_max_items; scalar_t__ uz_items; scalar_t__ uz_sleepers; scalar_t__ uz_bkt_count; scalar_t__ uz_bkt_max; TYPE_3__* uz_cpu; int uz_name; TYPE_2__* uz_domain; int uz_fails; int uz_size; int (* uz_fini ) (void*,int ) ;} ;


 int FUNC_0 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (int ,char*,TYPE_22__*,int ,TYPE_1__*,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int,int *,char*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_4__*,void*) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_13 ;
 TYPE_22__* VAR_14 ;
 void* FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__**,int,int ) ;
 scalar_t__ FUNC_20 (void*,int ,int) ;
 scalar_t__ FUNC_21 (void*,int ,void*,int) ;
 int FUNC_22 (void*,int ) ;
 scalar_t__ FUNC_23 (void*,int ,void*,int) ;
 scalar_t__ FUNC_24 (void*,int ,void*,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_25 (TYPE_1__*,int *,void*) ;
 int FUNC_26 (TYPE_1__*,void*) ;
 int FUNC_27 (void*,TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 TYPE_4__* FUNC_29 (TYPE_1__*,void*,int,int,int) ;
 void* FUNC_30 (TYPE_1__*,void*,int,int) ;
 TYPE_4__* FUNC_31 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_32 (TYPE_1__*,void*,void*,int) ;
 int FUNC_33 (TYPE_1__*,TYPE_2__*,TYPE_4__*,int) ;

void *
FUNC_34(uma_zone_t VAR_16, void *VAR_17, int VAR_18)
{
 uma_zone_domain_t VAR_19;
 uma_bucket_t VAR_20;
 uma_cache_t VAR_21;
 void *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;





 FUNC_19(&VAR_16, sizeof(VAR_16), VAR_4);


 FUNC_2(VAR_0, "uma_zalloc_arg thread %x zone %s(%p) flags %d",
     VAR_14, VAR_16->uz_name, VAR_16, VAR_18);

 if (VAR_18 & VAR_2) {
  FUNC_8(VAR_10 | VAR_11, ((void*)0),
      "uma_zalloc_arg: zone \"%s\"", VAR_16->uz_name);
 }
 FUNC_3((VAR_18 & VAR_1) == 0, ("uma_zalloc_arg: called with M_EXEC"));
 FUNC_3(VAR_14->td_critnest == 0 || FUNC_7(),
     ("uma_zalloc_arg: called with spinlock or critical section held"));
 if (VAR_16->uz_flags & VAR_9)
  FUNC_3((VAR_18 & VAR_3) == 0, ("allocating from a pcpu zone "
      "with M_ZERO passed"));
zalloc_restart:
 FUNC_15();
 VAR_23 = VAR_13;
 VAR_21 = &VAR_16->uz_cpu[VAR_23];

zalloc_start:
 VAR_20 = VAR_21->uc_allocbucket;
 if (VAR_20 != ((void*)0) && VAR_20->ub_cnt > 0) {
  VAR_20->ub_cnt--;
  VAR_22 = VAR_20->ub_bucket[VAR_20->ub_cnt];



  FUNC_3(VAR_22 != ((void*)0), ("uma_zalloc: Bucket pointer mangled."));
  VAR_21->uc_allocs++;
  FUNC_16();



  if (VAR_16->uz_ctor != ((void*)0) &&




      VAR_16->uz_ctor(VAR_22, VAR_16->uz_size, VAR_17, VAR_18) != 0) {
   FUNC_14(VAR_16->uz_fails, 1);
   FUNC_32(VAR_16, VAR_22, VAR_17, VAR_6 | VAR_5);
   return (((void*)0));
  }




  if (VAR_18 & VAR_3)
   FUNC_27(VAR_22, VAR_16);
  return (VAR_22);
 }





 VAR_20 = VAR_21->uc_freebucket;
 if (VAR_20 != ((void*)0) && VAR_20->ub_cnt > 0) {
  FUNC_0(VAR_0,
      "uma_zalloc: zone %s(%p) swapping empty with alloc",
      VAR_16->uz_name, VAR_16);
  VAR_21->uc_freebucket = VAR_21->uc_allocbucket;
  VAR_21->uc_allocbucket = VAR_20;
  goto zalloc_start;
 }




 VAR_20 = VAR_21->uc_allocbucket;
 VAR_21->uc_allocbucket = ((void*)0);
 FUNC_16();
 if (VAR_20 != ((void*)0))
  FUNC_13(VAR_16, VAR_20, VAR_17);


 if (VAR_16->uz_count == 0 || VAR_12) {
  FUNC_9(VAR_16);
  if (VAR_16->uz_flags & VAR_8)
   VAR_24 = FUNC_6(VAR_24);
  else
   VAR_24 = VAR_7;
  goto zalloc_item;
 }
 VAR_25 = 0;
 if (FUNC_10(VAR_16) == 0) {

  FUNC_9(VAR_16);
  VAR_25 = 1;
 }
 FUNC_15();
 VAR_23 = VAR_13;
 VAR_21 = &VAR_16->uz_cpu[VAR_23];


 if (VAR_21->uc_allocbucket != ((void*)0)) {
  FUNC_11(VAR_16);
  goto zalloc_start;
 }




 if (VAR_16->uz_flags & VAR_8) {
  VAR_24 = FUNC_6(VAR_24);
  VAR_19 = &VAR_16->uz_domain[VAR_24];
 } else {
  VAR_24 = VAR_7;
  VAR_19 = &VAR_16->uz_domain[0];
 }

 if ((VAR_20 = FUNC_31(VAR_16, VAR_19)) != ((void*)0)) {
  FUNC_3(VAR_20->ub_cnt != 0,
      ("uma_zalloc_arg: Returning an empty bucket."));
  VAR_21->uc_allocbucket = VAR_20;
  FUNC_11(VAR_16);
  goto zalloc_start;
 }

 FUNC_16();





 if (VAR_25 && VAR_16->uz_count < VAR_16->uz_count_max)
  VAR_16->uz_count++;

 if (VAR_16->uz_max_items > 0) {
  if (VAR_16->uz_items >= VAR_16->uz_max_items)
   goto zalloc_item;
  VAR_26 = FUNC_4(VAR_16->uz_count,
      VAR_16->uz_max_items - VAR_16->uz_items);
  VAR_16->uz_items += VAR_26;
 } else
  VAR_26 = VAR_16->uz_count;
 FUNC_11(VAR_16);






 VAR_20 = FUNC_29(VAR_16, VAR_17, VAR_24, VAR_18, VAR_26);
 FUNC_1(VAR_0, "uma_zalloc: zone %s(%p) bucket zone returned %p",
     VAR_16->uz_name, VAR_16, VAR_20);
 FUNC_9(VAR_16);
 if (VAR_20 != ((void*)0)) {
  if (VAR_16->uz_max_items > 0 && VAR_20->ub_cnt < VAR_26) {
   FUNC_5(VAR_16->uz_items >= VAR_26 - VAR_20->ub_cnt);
   VAR_16->uz_items -= VAR_26 - VAR_20->ub_cnt;
   if (VAR_16->uz_sleepers > 0 &&
       VAR_16->uz_items < VAR_16->uz_max_items)
    FUNC_28(VAR_16);
  }
  FUNC_15();
  VAR_23 = VAR_13;
  VAR_21 = &VAR_16->uz_cpu[VAR_23];






  if (VAR_21->uc_allocbucket == ((void*)0) &&
      ((VAR_16->uz_flags & VAR_8) == 0 ||
      VAR_24 == FUNC_6(VAR_24))) {
   VAR_21->uc_allocbucket = VAR_20;
   VAR_19->uzd_imax += VAR_20->ub_cnt;
  } else if (VAR_16->uz_bkt_count >= VAR_16->uz_bkt_max) {
   FUNC_16();
   FUNC_11(VAR_16);
   FUNC_12(VAR_16, VAR_20);
   FUNC_13(VAR_16, VAR_20, VAR_17);
   goto zalloc_restart;
  } else
   FUNC_33(VAR_16, VAR_19, VAR_20, 0);
  FUNC_11(VAR_16);
  goto zalloc_start;
 } else if (VAR_16->uz_max_items > 0) {
  VAR_16->uz_items -= VAR_26;
  if (VAR_16->uz_sleepers > 0 &&
      VAR_16->uz_items + 1 < VAR_16->uz_max_items)
   FUNC_28(VAR_16);
 }




zalloc_item:
 VAR_22 = FUNC_30(VAR_16, VAR_17, VAR_24, VAR_18);

 return (VAR_22);
}
