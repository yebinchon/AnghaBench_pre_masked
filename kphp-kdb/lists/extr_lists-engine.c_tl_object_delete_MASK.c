
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_object_delete {int object_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

struct tl_act_extra *FUNC_4 (void) {
  struct tl_act_extra *VAR_4 = FUNC_1 (VAR_2, sizeof (struct tl_object_delete), VAR_3);
  struct tl_object_delete *VAR_5 = (void *)VAR_4->extra;
  VAR_0;
  if (FUNC_0 (&VAR_5->object_id) < 0) {
    return 0;
  }
  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  VAR_1 ++;
  return VAR_4;
}
