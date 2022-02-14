
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_delete {int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

struct tl_act_extra *FUNC_4 (void) {
  struct tl_act_extra *VAR_3 = FUNC_1 (VAR_1, sizeof (struct tl_list_delete), VAR_2);
  struct tl_list_delete *VAR_4 = (void *)VAR_3->extra;
  VAR_0;
  if (FUNC_0 (&VAR_4->list_id) < 0) {
    return 0;
  }
  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_3;
}
