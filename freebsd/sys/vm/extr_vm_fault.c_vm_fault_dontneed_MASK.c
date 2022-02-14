
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* vm_object_t ;
typedef TYPE_4__* vm_map_entry_t ;
struct faultstate {TYPE_1__* map; TYPE_4__* entry; TYPE_3__* first_object; TYPE_3__* object; } ;
struct TYPE_22__ {scalar_t__ start; int offset; } ;
struct TYPE_21__ {int flags; } ;
struct TYPE_20__ {scalar_t__ pindex; } ;
struct TYPE_19__ {int pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (TYPE_3__*,scalar_t__) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_17(const struct faultstate *VAR_8, vm_offset_t VAR_9, int VAR_10)
{
 vm_map_entry_t VAR_11;
 vm_object_t VAR_12, VAR_13;
 vm_offset_t VAR_14, VAR_15;
 vm_page_t VAR_16, VAR_17;
 vm_pindex_t VAR_18, VAR_19;
 vm_size_t VAR_20;

 VAR_13 = VAR_8->object;
 FUNC_2(VAR_13);
 VAR_12 = VAR_8->first_object;
 if (VAR_12 != VAR_13) {
  if (!FUNC_3(VAR_12)) {
   FUNC_5(VAR_13);
   FUNC_4(VAR_12);
   FUNC_4(VAR_13);
  }
 }

 if ((VAR_12->flags & (VAR_2 | VAR_3)) == 0) {
  VAR_20 = VAR_5;
  if (VAR_1 > 1 && VAR_20 < VAR_7[1])
   VAR_20 = VAR_7[1];
  VAR_14 = FUNC_9(VAR_9, VAR_20);
  if (VAR_9 - VAR_14 >= VAR_20 - VAR_4 - FUNC_8(VAR_10) &&
      (VAR_11 = VAR_8->entry)->start < VAR_14) {
   if (VAR_14 - VAR_11->start < VAR_20)
    VAR_15 = VAR_11->start;
   else
    VAR_15 = VAR_14 - VAR_20;
   FUNC_7(VAR_8->map->pmap, VAR_15, VAR_14, VAR_0);
   VAR_19 = FUNC_0(VAR_11->offset) + FUNC_6(VAR_15 -
       VAR_11->start);
   VAR_17 = FUNC_13(VAR_12, VAR_19);
   VAR_18 = FUNC_0(VAR_11->offset) + FUNC_6(VAR_14 -
       VAR_11->start);
   while ((VAR_16 = VAR_17) != ((void*)0) && VAR_16->pindex < VAR_18) {
    VAR_17 = FUNC_1(VAR_16, VAR_6);
    if (!FUNC_10(VAR_16) ||
        FUNC_11(VAR_16))
     continue;
    FUNC_15(VAR_16);
    if (!FUNC_14(VAR_16))
     FUNC_12(VAR_16);
    FUNC_16(VAR_16);
   }
  }
 }
 if (VAR_12 != VAR_13)
  FUNC_5(VAR_12);
}
