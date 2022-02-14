
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; char* ptr; int size; int user_id; void* lru; } ;
typedef TYPE_1__ loaded_user_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;

loaded_user_t *FUNC_3 (int VAR_11, int VAR_12) {
  int VAR_13, VAR_14;
  char *VAR_15, *VAR_16;
  loaded_user_t *VAR_17;

  FUNC_0 (VAR_12 > 0);
  VAR_12 = (VAR_12 + 15) & -16;
  if (VAR_12 >= VAR_2) return 0;

  do {

    VAR_15 = VAR_9 + ((16 - (long) VAR_9) & 15);
    VAR_14 = -1;

    for (VAR_13 = 0, VAR_17 = VAR_0; VAR_13 < VAR_6; VAR_13++, VAR_17++) {
      if (VAR_17->state > 0) {
 VAR_16 = VAR_17->ptr;
 if (VAR_10 > 0) {
   FUNC_1 (VAR_8, "skipping occupied slot #%d at %p, size %d for user %d [prev=%p]\n",
     VAR_13, VAR_16, VAR_17->size, VAR_17->user_id, VAR_15);
 }
 FUNC_0 (VAR_16 >= VAR_15);
 if (VAR_16 >= VAR_15 + VAR_12) {
   if (VAR_10 > 0) {
     FUNC_1 (VAR_8, "allocating slot #%d at %p, size %d for user %d\n",
       VAR_14, VAR_15, VAR_12, VAR_11);
   }
   FUNC_0 (VAR_14 >= 0);
   VAR_17 = VAR_0 + VAR_14;
   VAR_4++;
   FUNC_2 (VAR_17, 0, sizeof(loaded_user_t));
   VAR_17->state = 1;
   VAR_17->user_id = VAR_11;
   VAR_17->ptr = VAR_15;
   VAR_17->size = VAR_12;
   VAR_7 += VAR_12;
   VAR_17->lru = ++VAR_5;
   return VAR_17;
 }
 VAR_15 = VAR_16 + VAR_17->size;
 VAR_14 = -1;
      } else if (VAR_14 < 0) {
 VAR_14 = VAR_13;
      }
    }
    if (VAR_14 < 0) {
      VAR_14 = VAR_6;
    }
    if (VAR_14 < VAR_1 && VAR_15 + VAR_12 <= VAR_9 + VAR_3) {
      if (VAR_14 == VAR_6) {
 VAR_6++;
      }
      if (VAR_10 > 0) {
 FUNC_1 (VAR_8, "allocating new slot #%d (out of %d) at %p, size %d for user %d\n",
   VAR_14, VAR_6, VAR_15, VAR_12, VAR_11);
      }
      VAR_17 = VAR_0 + VAR_14;
      VAR_4++;
      FUNC_2 (VAR_17, 0, sizeof(loaded_user_t));
      VAR_17->state = 1;
      VAR_17->user_id = VAR_11;
      VAR_17->ptr = VAR_15;
      VAR_17->size = VAR_12;
      VAR_7 += VAR_12;
      VAR_17->lru = ++VAR_5;
      return VAR_17;
    }


    if (!VAR_4) { break; }
    VAR_6 = VAR_4 = VAR_7 = 0;

  } while (1);

  return 0;
}
