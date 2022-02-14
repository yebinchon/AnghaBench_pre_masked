
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* uma_zone_t ;
typedef TYPE_2__* uma_keg_t ;
struct uma_slab {int dummy; } ;
struct uma_kctor_args {scalar_t__ size; int flags; TYPE_2__* zone; int align; int fini; int uminit; } ;
struct TYPE_12__ {scalar_t__ dr_iter; int dr_policy; } ;
struct TYPE_13__ {scalar_t__ uk_size; int uk_pages; int uk_flags; int uk_ppera; int uk_pgoff; int uk_ipers; int uk_zones; scalar_t__ uk_free; int uz_name; int uk_hash; int uk_rsize; int uk_freef; int uk_allocf; int * uk_slabzone; int uk_init; int uk_name; TYPE_1__ uk_dr; scalar_t__ uk_reserve; int uk_align; int uk_fini; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_2__*,int ,TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_12(void *VAR_29, int VAR_30, void *VAR_31, int VAR_32)
{
 struct uma_kctor_args *VAR_33 = VAR_31;
 uma_keg_t VAR_34 = VAR_29;
 uma_zone_t VAR_35;

 FUNC_5(VAR_34, VAR_30);
 VAR_34->uk_size = VAR_33->size;
 VAR_34->uk_init = VAR_33->uminit;
 VAR_34->uk_fini = VAR_33->fini;
 VAR_34->uk_align = VAR_33->align;
 VAR_34->uk_free = 0;
 VAR_34->uk_reserve = 0;
 VAR_34->uk_pages = 0;
 VAR_34->uk_flags = VAR_33->flags;
 VAR_34->uk_slabzone = ((void*)0);






 VAR_34->uk_dr.dr_policy = FUNC_1();
 VAR_34->uk_dr.dr_iter = 0;




 VAR_35 = VAR_33->zone;
 VAR_34->uk_name = VAR_35->uz_name;

 if (VAR_33->flags & VAR_12)
  VAR_34->uk_flags |= VAR_5;

 if (VAR_33->flags & VAR_14)
  VAR_34->uk_init = VAR_28;

 if (VAR_33->flags & VAR_8)
  VAR_34->uk_flags |= VAR_13;

 if (VAR_33->flags & VAR_11)



  VAR_34->uk_flags &= ~VAR_11;


 if (VAR_34->uk_flags & VAR_6) {
  FUNC_7(VAR_34);
 } else {
  if (VAR_34->uk_size > VAR_4)
   FUNC_8(VAR_34);
  else
   FUNC_9(VAR_34);
 }

 if (VAR_34->uk_flags & VAR_10)
  VAR_34->uk_slabzone = VAR_20;





 if (VAR_15 < VAR_0)
  VAR_34->uk_allocf = VAR_21;




 else if (VAR_34->uk_flags & VAR_11)
  VAR_34->uk_allocf = VAR_18;
 else
  VAR_34->uk_allocf = VAR_16;





 if (VAR_34->uk_flags & VAR_11)
  VAR_34->uk_freef = VAR_19;
 else
  VAR_34->uk_freef = VAR_17;




 FUNC_3(VAR_34, (VAR_33->flags & VAR_9));






 if (!(VAR_34->uk_flags & VAR_10)) {
  VAR_34->uk_pgoff = (VAR_2 * VAR_34->uk_ppera) - VAR_3;







  FUNC_2(VAR_34->uk_pgoff + sizeof(struct uma_slab) <=
      VAR_2 * VAR_34->uk_ppera,
      ("zone %s ipers %d rsize %d size %d slab won't fit",
      VAR_35->uz_name, VAR_34->uk_ipers, VAR_34->uk_rsize, VAR_34->uk_size));
 }

 if (VAR_34->uk_flags & VAR_7)
  FUNC_6(&VAR_34->uk_hash, 0);

 FUNC_0(VAR_1, "keg_ctor %p zone %s(%p) out %d free %d\n",
     VAR_34, VAR_35->uz_name, VAR_35,
     (VAR_34->uk_pages / VAR_34->uk_ppera) * VAR_34->uk_ipers - VAR_34->uk_free,
     VAR_34->uk_free);

 FUNC_4(&VAR_34->uk_zones, VAR_35, VAR_27);

 FUNC_10(&VAR_24);
 FUNC_4(&VAR_23, VAR_34, VAR_22);
 FUNC_11(&VAR_24);
 return (0);
}
