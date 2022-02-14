
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_get {int mode; int limit; void* offset; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 struct tl_act_extra* FUNC_1 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 (int ,char*) ;

struct tl_act_extra *FUNC_6 (int VAR_4, int VAR_5) {
  struct tl_act_extra *VAR_6 = FUNC_1 (VAR_2, sizeof (struct tl_list_get), VAR_3);
  struct tl_list_get *VAR_7 = (void *)VAR_6->extra;
  VAR_0;
  if (FUNC_0 (&VAR_7->list_id) < 0) {
    return 0;
  }
  VAR_7->mode = FUNC_4 ();
  if (!VAR_4 && (VAR_7->mode & ~(63 | (1 << 15)))) {
    FUNC_5 (VAR_1, "in non-full get list only modes 0..63 and bit 15 are supported");
    return 0;
  }
  if (!VAR_4) {
    VAR_7->mode |= (1 << 15);
  }
  if (VAR_5) {
    VAR_7->limit = FUNC_4 ();
    VAR_7->offset = FUNC_4 ();
  } else {
    VAR_7->limit = -1;
    VAR_7->offset = 0;
  }
  FUNC_2 ();
  if (FUNC_3 ()) {
    return 0;
  }
  return VAR_6;
}
