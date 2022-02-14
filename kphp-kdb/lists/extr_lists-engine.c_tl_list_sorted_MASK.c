
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_sorted {void* limit; void* mode; void* and_mask; void* xor_mask; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 () ;

struct tl_act_extra *FUNC_5 (int VAR_5, int VAR_6) {
  struct tl_act_extra *VAR_7 = FUNC_1 (VAR_2, sizeof (struct tl_list_sorted), VAR_5 ? VAR_4 : VAR_3);
  struct tl_list_sorted *VAR_8 = (void *)VAR_7->extra;

  VAR_0;
  if (FUNC_0 (&VAR_8->list_id) < 0) {
    return 0;
  }

  VAR_8->xor_mask = FUNC_4 ();
  VAR_8->and_mask = FUNC_4 ();
  VAR_8->mode = FUNC_4 ();
  VAR_8->limit = VAR_6 ? FUNC_4 () : VAR_1;

  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_7;
}
