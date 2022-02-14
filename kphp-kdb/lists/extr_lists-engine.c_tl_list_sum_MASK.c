
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_sum {int id_ints; int count; int has_weights; scalar_t__ arr; void* mode; int list_id; } ;
struct tl_act_extra {int size; scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (char*,int) ;

struct tl_act_extra *FUNC_7 (int VAR_5, int VAR_6) {
  struct tl_act_extra *VAR_7 = FUNC_1 (VAR_3, sizeof (struct tl_list_sum), VAR_4);
  struct tl_list_sum *VAR_8 = (void *)VAR_7->extra;

  VAR_0;
  if (FUNC_0 (&VAR_8->list_id) < 0) {
    return 0;
  }

  VAR_8->id_ints = VAR_5 ? FUNC_4 () : VAR_2;
  VAR_8->mode = FUNC_4 ();
  VAR_8->count = FUNC_4 ();
  VAR_8->has_weights = VAR_6;

  int VAR_9 = 4 * (VAR_8->id_ints + (VAR_6 != 0));
  if (VAR_9 * VAR_8->count > (1 << 20) || VAR_8->count < 0) {
    FUNC_5 (VAR_1, "Too long query. Total %d bytes", VAR_9 * VAR_8->count);
    return 0;
  }
  if (FUNC_6 ((char *)VAR_8->arr, VAR_9 * VAR_8->count) < 0) {
    return 0;
  }
  VAR_7->size += VAR_9 * (VAR_8->count + 1);

  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_7;
}
