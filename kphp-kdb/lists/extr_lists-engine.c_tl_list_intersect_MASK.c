
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_intersect {int id_ints; int mode; int count; int is_intersect; int limit; scalar_t__ arr; int list_id; } ;
struct tl_act_extra {int size; scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (char*,int) ;

struct tl_act_extra *FUNC_7 (int VAR_6, int VAR_7, int VAR_8, int VAR_9) {
  struct tl_act_extra *VAR_10 = FUNC_1 (VAR_3, sizeof (struct tl_list_intersect), VAR_9 ? VAR_5 : VAR_4);
  struct tl_list_intersect *VAR_11 = (void *)VAR_10->extra;

  VAR_0;
  if (FUNC_0 (&VAR_11->list_id) < 0) {
    return 0;
  }

  VAR_11->id_ints = VAR_7 ? FUNC_4 () : VAR_2;
  VAR_11->mode = FUNC_4 ();
  VAR_11->count = FUNC_4 ();
  VAR_11->is_intersect = VAR_6;

  int VAR_12 = 4 * (VAR_11->id_ints);
  if (VAR_12 * VAR_11->count > (1 << 20) || VAR_11->count < 0) {
    FUNC_5 (VAR_1, "Too long query. Total %d bytes", VAR_12 * VAR_11->count);
    return 0;
  }
  if (FUNC_6 ((char *)VAR_11->arr, VAR_12 * VAR_11->count) < 0) {
    return 0;
  }
  VAR_10->size += VAR_12 * (VAR_11->count + 1);

  VAR_11->limit = VAR_8 ? FUNC_4 () : -1;

  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_10;
}
