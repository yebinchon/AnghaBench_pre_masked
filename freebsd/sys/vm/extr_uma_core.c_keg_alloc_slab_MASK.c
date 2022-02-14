
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_slab_t ;
typedef TYPE_3__* uma_keg_t ;
typedef int * (* uma_alloc ) (TYPE_1__*,unsigned long,int,int *,int) ;
typedef int uint8_t ;
struct TYPE_21__ {int uk_flags; int uk_ppera; int uk_pgoff; int uk_ipers; scalar_t__ (* uk_init ) (int *,int ,int) ;int uk_rsize; int uk_pages; int uk_free; int uk_hash; int uk_name; int uk_size; int uk_slabzone; int * (* uk_allocf ) (TYPE_1__*,unsigned long,int,int *,int) ;int uk_lock; } ;
struct TYPE_20__ {int us_freecount; int us_domain; int * us_data; int us_debugfree; int us_free; int us_flags; TYPE_3__* us_keg; } ;
struct TYPE_19__ {int * uz_lockptr; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,TYPE_2__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (int *,int ,int) ;
 int FUNC_11 (unsigned long) ;
 int VAR_11 ;
 int FUNC_12 (scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_13 (int ,int *,int,int) ;
 int FUNC_14 (int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static uma_slab_t
FUNC_15(uma_keg_t VAR_12, uma_zone_t VAR_13, int VAR_14, int VAR_15,
    int VAR_16)
{
 uma_alloc VAR_17;
 uma_slab_t VAR_18;
 unsigned long VAR_19;
 uint8_t *VAR_20;
 uint8_t VAR_21;
 int VAR_22;

 FUNC_3(VAR_14 >= 0 && VAR_14 < VAR_11,
     ("keg_alloc_slab: domain %d out of range", VAR_14));
 FUNC_5(VAR_12);
 FUNC_7(VAR_13->uz_lockptr == &VAR_12->uk_lock);

 VAR_17 = VAR_12->uk_allocf;
 FUNC_6(VAR_12);

 VAR_18 = ((void*)0);
 VAR_20 = ((void*)0);
 if (VAR_12->uk_flags & VAR_9) {
  VAR_18 = FUNC_13(VAR_12->uk_slabzone, ((void*)0), VAR_14, VAR_16);
  if (VAR_18 == ((void*)0))
   goto out;
 }
 if ((VAR_12->uk_flags & VAR_7) == 0)
  VAR_16 |= VAR_2;
 else
  VAR_16 &= ~VAR_2;

 if (VAR_12->uk_flags & VAR_8)
  VAR_16 |= VAR_1;


 VAR_19 = VAR_12->uk_ppera * VAR_3;
 VAR_20 = VAR_17(VAR_13, VAR_19, VAR_14, &VAR_21, VAR_16);
 if (VAR_20 == ((void*)0)) {
  if (VAR_12->uk_flags & VAR_9)
   FUNC_14(VAR_12->uk_slabzone, VAR_18, ((void*)0), VAR_4);
  VAR_18 = ((void*)0);
  goto out;
 }
 FUNC_11(VAR_19);


 if (!(VAR_12->uk_flags & VAR_9))
  VAR_18 = (uma_slab_t )(VAR_20 + VAR_12->uk_pgoff);

 if (VAR_12->uk_flags & VAR_10)
  for (VAR_22 = 0; VAR_22 < VAR_12->uk_ppera; VAR_22++)
   FUNC_12((vm_offset_t)VAR_20 + (VAR_22 * VAR_3), VAR_18);

 VAR_18->us_keg = VAR_12;
 VAR_18->us_data = VAR_20;
 VAR_18->us_freecount = VAR_12->uk_ipers;
 VAR_18->us_flags = VAR_21;
 VAR_18->us_domain = VAR_14;
 FUNC_0(VAR_5, &VAR_18->us_free);




 if (VAR_12->uk_init != ((void*)0)) {
  for (VAR_22 = 0; VAR_22 < VAR_12->uk_ipers; VAR_22++)
   if (VAR_12->uk_init(VAR_18->us_data + (VAR_12->uk_rsize * VAR_22),
       VAR_12->uk_size, VAR_15) != 0)
    break;
  if (VAR_22 != VAR_12->uk_ipers) {
   FUNC_9(VAR_12, VAR_18, VAR_22);
   VAR_18 = ((void*)0);
   goto out;
  }
 }
 FUNC_4(VAR_12);

 FUNC_2(VAR_0, "keg_alloc_slab: allocated slab %p for %s(%p)",
     VAR_18, VAR_12->uk_name, VAR_12);

 if (VAR_12->uk_flags & VAR_6)
  FUNC_8(&VAR_12->uk_hash, VAR_18, VAR_20);

 VAR_12->uk_pages += VAR_12->uk_ppera;
 VAR_12->uk_free += VAR_12->uk_ipers;

out:
 return (VAR_18);
}
