
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct unpacked {size_t depth; struct unpacked* data; struct unpacked* index; TYPE_1__* object; } ;
struct TYPE_17__ {scalar_t__ delta; scalar_t__ z_delta_size; scalar_t__ delta_size; struct unpacked* delta_data; scalar_t__ delta_child; } ;
typedef TYPE_1__ git_pobject ;
struct TYPE_18__ {int nr_deltified; size_t window_memory_limit; int delta_cache_size; } ;
typedef TYPE_2__ git_packbuilder ;
struct TYPE_19__ {scalar_t__ size; int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct unpacked*) ;
 size_t VAR_1 ;
 size_t FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (struct unpacked*) ;
 struct unpacked* FUNC_3 (size_t,int) ;
 int FUNC_4 (struct unpacked*) ;
 struct unpacked* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,struct unpacked*,scalar_t__) ;
 int FUNC_13 (struct unpacked*,int ,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_15 (TYPE_2__*,struct unpacked*,struct unpacked*,size_t,size_t*,int*) ;

__attribute__((used)) static int FUNC_16(git_packbuilder *VAR_2, git_pobject **VAR_3,
 size_t *VAR_4, size_t VAR_5, size_t VAR_6)
{
 git_pobject *VAR_7;
 git_buf VAR_8 = VAR_0;
 struct unpacked *VAR_9;
 size_t VAR_10 = 0, VAR_11 = 0;
 size_t VAR_12 = 0;
 size_t VAR_13;
 int VAR_14 = -1;

 VAR_9 = FUNC_3(VAR_5, sizeof(struct unpacked));
 FUNC_0(VAR_9);

 for (;;) {
  struct unpacked *VAR_15 = VAR_9 + VAR_10;
  size_t VAR_16, VAR_17, VAR_18 = VAR_1;

  FUNC_10(VAR_2);
  if (!*VAR_4) {
   FUNC_11(VAR_2);
   break;
  }

  VAR_2->nr_deltified += 1;
  FUNC_14(VAR_2, VAR_2->nr_deltified, 0);

  VAR_7 = *VAR_3++;
  (*VAR_4)--;
  FUNC_11(VAR_2);

  VAR_12 -= FUNC_2(VAR_15);
  VAR_15->object = VAR_7;

  while (VAR_2->window_memory_limit &&
         VAR_12 > VAR_2->window_memory_limit &&
         VAR_11 > 1) {
   size_t VAR_19 = (VAR_10 + VAR_5 - VAR_11) % VAR_5;
   VAR_12 -= FUNC_2(VAR_9 + VAR_19);
   VAR_11--;
  }






  VAR_16 = VAR_6;
  if (VAR_7->delta_child) {
   size_t VAR_20 = FUNC_1(VAR_7, 0);

   if (VAR_20 > VAR_16)
    goto next;

   VAR_16 -= VAR_20;
  }

  VAR_17 = VAR_5;
  while (--VAR_17 > 0) {
   int VAR_21;
   size_t VAR_22 = VAR_10 + VAR_17;
   struct unpacked *VAR_23;

   if (VAR_22 >= VAR_5)
    VAR_22 -= VAR_5;

   VAR_23 = VAR_9 + VAR_22;
   if (!VAR_23->object)
    break;

   if (FUNC_15(VAR_2, VAR_15, VAR_23, VAR_16, &VAR_12, &VAR_21) < 0)
    goto on_error;
   if (VAR_21 < 0)
    break;
   else if (VAR_21 > 0)
    VAR_18 = VAR_22;
  }
  if (VAR_7->delta_data) {
   if (FUNC_12(&VAR_8, VAR_7->delta_data, VAR_7->delta_size) < 0)
    goto on_error;

   FUNC_4(VAR_7->delta_data);
   VAR_7->delta_data = FUNC_5(VAR_8.size);
   FUNC_0(VAR_7->delta_data);

   FUNC_13(VAR_7->delta_data, VAR_8.ptr, VAR_8.size);
   VAR_7->z_delta_size = VAR_8.size;
   FUNC_6(&VAR_8);

   FUNC_8(VAR_2);
   VAR_2->delta_cache_size -= VAR_7->delta_size;
   VAR_2->delta_cache_size += VAR_7->z_delta_size;
   FUNC_9(VAR_2);
  }






  if (VAR_7->delta && VAR_16 <= VAR_15->depth)
   continue;






  if (VAR_7->delta) {
   struct unpacked VAR_24 = VAR_9[VAR_18];
   size_t VAR_25 = (VAR_5 + VAR_10 - VAR_18) % VAR_5;
   size_t VAR_26 = VAR_18;
   while (VAR_25--) {
    size_t VAR_27 = (VAR_26 + 1) % VAR_5;
    VAR_9[VAR_26] = VAR_9[VAR_27];
    VAR_26 = VAR_27;
   }
   VAR_9[VAR_26] = VAR_24;
  }

  next:
  VAR_10++;
  if (VAR_11 + 1 < VAR_5)
   VAR_11++;
  if (VAR_10 >= VAR_5)
   VAR_10 = 0;
 }
 VAR_14 = 0;

on_error:
 for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13) {
  FUNC_4(VAR_9[VAR_13].index);
  FUNC_4(VAR_9[VAR_13].data);
 }
 FUNC_4(VAR_9);
 FUNC_7(&VAR_8);

 return VAR_14;
}
