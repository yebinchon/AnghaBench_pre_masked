
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int vm_pindex_t ;
typedef TYPE_4__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_5__* vm_object_t ;
typedef TYPE_6__* vm_map_entry_t ;
struct faultstate {TYPE_6__* entry; TYPE_1__* map; } ;
typedef scalar_t__ pmap_t ;
struct TYPE_17__ {TYPE_5__* vm_object; } ;
struct TYPE_20__ {int start; int end; int offset; TYPE_3__ object; int protection; } ;
struct TYPE_19__ {scalar_t__ type; int backing_object_offset; struct TYPE_19__* backing_object; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_16__ {int p_vmspace; } ;
struct TYPE_15__ {scalar_t__ pmap; } ;
struct TYPE_14__ {TYPE_2__* td_proc; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_11__* VAR_5 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,int,TYPE_4__*,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(const struct faultstate *VAR_6, vm_offset_t VAR_7,
    int VAR_8, int VAR_9, bool VAR_10)
{
 pmap_t VAR_11;
 vm_map_entry_t VAR_12;
 vm_object_t VAR_13, VAR_14;
 vm_offset_t VAR_15, VAR_16;
 vm_pindex_t VAR_17;
 vm_page_t VAR_18;
 int VAR_19;

 VAR_11 = VAR_6->map->pmap;
 if (VAR_11 != FUNC_8(VAR_5->td_proc->p_vmspace))
  return;

 VAR_12 = VAR_6->entry;

 if (VAR_7 < VAR_8 * VAR_3) {
  VAR_16 = VAR_12->start;
 } else {
  VAR_16 = VAR_7 - VAR_8 * VAR_3;
  if (VAR_16 < VAR_12->start)
   VAR_16 = VAR_12->start;
 }
 for (VAR_19 = 0; VAR_19 < 2 * FUNC_3(VAR_8, VAR_9); VAR_19++) {
  VAR_15 = VAR_7 + ((VAR_19 >> 1) + 1) * ((VAR_19 & 1) == 0 ? -VAR_3 :
      VAR_3);
  if (VAR_15 > VAR_7 + VAR_9 * VAR_3)
   VAR_15 = 0;

  if (VAR_15 < VAR_16 || VAR_15 >= VAR_12->end)
   continue;

  if (!FUNC_5(VAR_11, VAR_15))
   continue;

  VAR_17 = ((VAR_15 - VAR_12->start) + VAR_12->offset) >> VAR_2;
  VAR_14 = VAR_12->object.vm_object;
  if (!VAR_10)
   FUNC_1(VAR_14);
  while ((VAR_18 = FUNC_7(VAR_14, VAR_17)) == ((void*)0) &&
      VAR_14->type == VAR_0 &&
      (VAR_13 = VAR_14->backing_object) != ((void*)0)) {
   FUNC_0((VAR_14->backing_object_offset & VAR_1) ==
       0, ("vm_fault_prefault: unaligned object offset"));
   VAR_17 += VAR_14->backing_object_offset >> VAR_2;
   FUNC_1(VAR_13);
   if (!VAR_10 || VAR_14 != VAR_12->object.vm_object)
    FUNC_2(VAR_14);
   VAR_14 = VAR_13;
  }
  if (VAR_18 == ((void*)0)) {
   if (!VAR_10 || VAR_14 != VAR_12->object.vm_object)
    FUNC_2(VAR_14);
   break;
  }
  if (FUNC_6(VAR_18) &&
      (VAR_18->flags & VAR_4) == 0)
   FUNC_4(VAR_11, VAR_15, VAR_18, VAR_12->protection);
  if (!VAR_10 || VAR_14 != VAR_12->object.vm_object)
   FUNC_2(VAR_14);
 }
}
