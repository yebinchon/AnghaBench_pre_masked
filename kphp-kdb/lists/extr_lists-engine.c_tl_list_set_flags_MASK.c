
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_set_flags {int xor_mask; int and_mask; int or_mask; int nand_mask; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

struct tl_act_extra *FUNC_5 (int VAR_3) {
  struct tl_act_extra *VAR_4 = FUNC_1 (VAR_1, sizeof (struct tl_list_set_flags), VAR_2);
  struct tl_list_set_flags *VAR_5 = (void *)VAR_4->extra;
  VAR_0;
  if (FUNC_0 (&VAR_5->list_id) < 0) {
    return 0;
  }

  VAR_5->xor_mask = FUNC_4 ();
  VAR_5->and_mask = VAR_3 == 2 ? FUNC_4 () : 7;
  VAR_5->or_mask = FUNC_4 ();
  VAR_5->nand_mask = VAR_3 != 0 ? FUNC_4 () : -1;

  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_4;
}
