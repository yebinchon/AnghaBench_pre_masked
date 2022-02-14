
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint64_t ;
struct unpacked {size_t depth; void* data; int index; TYPE_1__* object; } ;
struct TYPE_7__ {scalar_t__ type; size_t size; size_t delta_size; void* delta_data; struct TYPE_7__* delta; int id; } ;
typedef TYPE_1__ git_pobject ;
struct TYPE_8__ {size_t delta_cache_size; int odb; } ;
typedef TYPE_2__ git_packbuilder ;
typedef int git_odb_object ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t,size_t,size_t) ;
 int FUNC_3 (size_t*,size_t,size_t) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (size_t) ;
 void* FUNC_6 (size_t) ;
 void* FUNC_7 (void*,size_t) ;
 scalar_t__ FUNC_8 (void**,size_t*,int ,void*,size_t,size_t) ;
 scalar_t__ FUNC_9 (int *,void*,size_t) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 size_t FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int **,int ,int *) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (void*,int ,size_t) ;

__attribute__((used)) static int FUNC_19(git_packbuilder *VAR_1, struct unpacked *VAR_2,
       struct unpacked *VAR_3, size_t VAR_4,
    size_t *VAR_5, int *VAR_6)
{
 git_pobject *VAR_7 = VAR_2->object;
 git_pobject *VAR_8 = VAR_3->object;
 git_odb_object *VAR_9;
 size_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 size_t VAR_16;
 void *VAR_17;


 if (VAR_7->type != VAR_8->type) {
  *VAR_6 = -1;
  return 0;
 }

 *VAR_6 = 0;




 if (VAR_3->depth >= VAR_4)
  return 0;


 VAR_10 = VAR_7->size;
 if (!VAR_7->delta) {
  VAR_14 = VAR_10/2 - 20;
  VAR_16 = 1;
 } else {
  VAR_14 = VAR_7->delta_size;
  VAR_16 = VAR_2->depth;
 }

 VAR_14 = (uint64_t)VAR_14 * (VAR_4 - VAR_3->depth) /
     (VAR_4 - VAR_16 + 1);
 if (VAR_14 == 0)
  return 0;

 VAR_11 = VAR_8->size;
 VAR_13 = VAR_11 < VAR_10 ? VAR_10 - VAR_11 : 0;
 if (VAR_13 >= VAR_14)
  return 0;
 if (VAR_10 < VAR_11 / 32)
  return 0;


 if (!VAR_2->data) {
  if (FUNC_15(&VAR_9, VAR_1->odb, &VAR_7->id) < 0)
   return -1;

  VAR_15 = FUNC_14(VAR_9);
  VAR_2->data = FUNC_6(VAR_15);
  FUNC_0(VAR_2->data);
  FUNC_18(VAR_2->data, FUNC_12(VAR_9), VAR_15);

  FUNC_13(VAR_9);

  if (VAR_15 != VAR_10) {
   FUNC_11(VAR_0,
       "inconsistent target object length");
   return -1;
  }

  *VAR_5 += VAR_15;
 }
 if (!VAR_3->data) {
  size_t VAR_18;

  if (FUNC_15(&VAR_9, VAR_1->odb, &VAR_8->id) < 0 ||
   !FUNC_5(VAR_18 = FUNC_14(VAR_9)))
   return -1;

  VAR_15 = VAR_18;
  VAR_3->data = FUNC_6(VAR_15);
  FUNC_0(VAR_3->data);
  FUNC_18(VAR_3->data, FUNC_12(VAR_9), VAR_15);

  FUNC_13(VAR_9);

  if (VAR_15 != VAR_11) {
   FUNC_11(VAR_0,
       "inconsistent source object length");
   return -1;
  }

  *VAR_5 += VAR_15;
 }
 if (!VAR_3->index) {
  if (FUNC_9(&VAR_3->index, VAR_3->data, VAR_11) < 0)
   return 0;

  *VAR_5 += FUNC_10(VAR_3->index);
 }

 if (FUNC_8(&VAR_17, &VAR_12, VAR_3->index, VAR_2->data, VAR_10,
  VAR_14) < 0)
  return 0;

 if (VAR_7->delta) {

  if (VAR_12 == VAR_7->delta_size &&
      VAR_3->depth + 1 >= VAR_2->depth) {
   FUNC_4(VAR_17);
   return 0;
  }
 }

 FUNC_16(VAR_1);
 if (VAR_7->delta_data) {
  FUNC_4(VAR_7->delta_data);
  FUNC_1(VAR_1->delta_cache_size >= VAR_7->delta_size);
  VAR_1->delta_cache_size -= VAR_7->delta_size;
  VAR_7->delta_data = ((void*)0);
 }
 if (FUNC_2(VAR_1, VAR_11, VAR_10, VAR_12)) {
  bool VAR_19 = FUNC_3(
   &VAR_1->delta_cache_size, VAR_1->delta_cache_size, VAR_12);

  FUNC_17(VAR_1);

  if (VAR_19) {
   FUNC_4(VAR_17);
   return -1;
  }

  VAR_7->delta_data = FUNC_7(VAR_17, VAR_12);
  FUNC_0(VAR_7->delta_data);
 } else {

  FUNC_17(VAR_1);
  FUNC_4(VAR_17);
 }

 VAR_7->delta = VAR_8;
 VAR_7->delta_size = VAR_12;
 VAR_2->depth = VAR_3->depth + 1;

 *VAR_6 = 1;
 return 0;
}
