
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_count {int cnt; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

struct tl_act_extra *FUNC_5 (int VAR_4) {
  struct tl_act_extra *VAR_5 = FUNC_1 (VAR_1, sizeof (struct tl_list_count), VAR_4 == 2 ? VAR_3 : VAR_2);
  struct tl_list_count *VAR_6 = (void *)VAR_5->extra;

  VAR_0;
  if (FUNC_0 (&VAR_6->list_id) < 0) {
    return 0;
  }

  if (VAR_4 == 1) {
    VAR_6->cnt = FUNC_4 ();
  } else {
    VAR_6->cnt = -1;
  }

  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_5;
}
