
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_16__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct mtx {int dummy; } ;
struct faultstate {int lookup_still_valid; scalar_t__ first_pindex; scalar_t__ map_generation; TYPE_4__* first_object; TYPE_2__* map; TYPE_16__* entry; TYPE_4__* object; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_28__ {scalar_t__ size; int * backing_object; int paging_in_progress; } ;
struct TYPE_27__ {int psind; scalar_t__ pindex; } ;
struct TYPE_26__ {scalar_t__ timestamp; int pmap; } ;
struct TYPE_25__ {int ru_majflt; } ;
struct TYPE_24__ {TYPE_1__ td_ru; } ;
struct TYPE_23__ {int offset; int end; int start; int max_protection; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 TYPE_19__* VAR_8 ;
 int FUNC_8 (struct mtx*) ;
 int* VAR_9 ;
 int FUNC_9 (int ,int,TYPE_3__*,int ,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct faultstate*) ;
 int FUNC_13 (struct faultstate*) ;
 int FUNC_14 (TYPE_16__*,TYPE_3__*,int ,int,int,int) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct faultstate*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*,struct mtx**) ;
 TYPE_3__* FUNC_20 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_4__*,scalar_t__,int,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_25(struct faultstate *VAR_10, vm_prot_t VAR_11, int VAR_12,
    int VAR_13, boolean_t VAR_14, vm_page_t *VAR_15)
{
 struct mtx *VAR_16;
 vm_offset_t VAR_17;
 vm_page_t VAR_18;
 vm_pindex_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 FUNC_1(VAR_10->object == VAR_10->first_object);
 FUNC_4(VAR_10->first_object);
 FUNC_1(FUNC_3(VAR_10->first_object->paging_in_progress) > 0);
 FUNC_1(VAR_10->first_object->backing_object == ((void*)0));
 FUNC_1(VAR_10->lookup_still_valid);

 VAR_21 = FUNC_2(VAR_10->entry->offset);
 VAR_22 = VAR_21 + FUNC_7(VAR_10->entry->end - VAR_10->entry->start) - 1;
 FUNC_12(VAR_10);
 FUNC_13(VAR_10);
 VAR_27 = FUNC_24(VAR_10->first_object, VAR_10->first_pindex,
     VAR_12, VAR_10->entry->max_protection, &VAR_21, &VAR_22);

 FUNC_4(VAR_10->first_object);
 if (VAR_27 == VAR_6) {




  FUNC_17(VAR_10);
  if (VAR_10->map->timestamp != VAR_10->map_generation)
   return (VAR_2);
  return (VAR_1);
 }
 if (VAR_27 != VAR_7)
  return (VAR_0);


 FUNC_1(VAR_21 <= VAR_22);
 FUNC_1(VAR_10->first_pindex <= VAR_22);
 FUNC_1(VAR_10->first_pindex >= VAR_21);
 FUNC_1(VAR_22 < VAR_10->first_object->size);

 FUNC_17(VAR_10);
 if (VAR_10->map->timestamp != VAR_10->map_generation) {
  FUNC_16(VAR_10->first_object, VAR_21,
      VAR_22);
  return (VAR_2);
 }
 VAR_19 = FUNC_2(VAR_10->entry->offset);
 if (VAR_19 > VAR_21) {
  FUNC_16(VAR_10->first_object, VAR_21,
      VAR_19 - 1);
  VAR_21 = VAR_19;
 }
 VAR_20 = VAR_19 + FUNC_7(VAR_10->entry->end - VAR_10->entry->start) - 1;
 if (VAR_20 < VAR_22) {
  FUNC_16(VAR_10->first_object, VAR_20 + 1,
      VAR_22);
  VAR_22 = VAR_20;
 }
 for (VAR_23 = VAR_21, VAR_18 = FUNC_20(VAR_10->first_object, VAR_23);
     VAR_23 <= VAR_22;
     VAR_23 += VAR_25, VAR_18 = FUNC_21(&VAR_18[VAR_25 - 1])) {
  VAR_17 = VAR_10->entry->start + FUNC_0(VAR_23) - VAR_10->entry->offset;


  VAR_26 = VAR_18->psind;
  if (VAR_26 > 0 && ((VAR_17 & (VAR_9[VAR_26] - 1)) != 0 ||
      VAR_23 + FUNC_2(VAR_9[VAR_26]) - 1 > VAR_22 ||
      !FUNC_10(VAR_10->map->pmap) || VAR_14))
   VAR_26 = 0;



  VAR_25 = FUNC_7(VAR_9[VAR_26]);
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
   FUNC_15(&VAR_18[VAR_24]);
   FUNC_14(VAR_10->entry, &VAR_18[VAR_24], VAR_11, VAR_12,
       VAR_13, 1);
  }
  FUNC_6(VAR_10->first_object);
  VAR_27 = FUNC_9(VAR_10->map->pmap, VAR_17, VAR_18, VAR_11, VAR_12 |
      (VAR_14 ? VAR_4 : 0), VAR_26);

  if (VAR_26 > 0 && VAR_27 == VAR_0) {
   for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
    VAR_27 = FUNC_9(VAR_10->map->pmap, VAR_17 + FUNC_11(VAR_24),
        &VAR_18[VAR_24], VAR_11, VAR_12 |
        (VAR_14 ? VAR_4 : 0), 0);
    FUNC_1(VAR_27 == VAR_3);
   }
  }



  FUNC_5(VAR_10->first_object);
  VAR_16 = ((void*)0);
  for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
   if ((VAR_13 & VAR_5) != 0) {
    FUNC_22(&VAR_18[VAR_24]);
   } else {
    FUNC_19(&VAR_18[VAR_24], &VAR_16);
    FUNC_18(&VAR_18[VAR_24]);
   }
   if (VAR_15 != ((void*)0) && VAR_18[VAR_24].pindex == VAR_10->first_pindex) {
    *VAR_15 = &VAR_18[VAR_24];
    FUNC_22(&VAR_18[VAR_24]);
   }
   FUNC_23(&VAR_18[VAR_24]);
  }
  if (VAR_16 != ((void*)0))
   FUNC_8(VAR_16);
 }
 VAR_8->td_ru.ru_majflt++;
 return (VAR_3);
}
