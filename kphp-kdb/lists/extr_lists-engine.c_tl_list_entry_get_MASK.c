
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_get {int mode; int object_id; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 struct tl_act_extra* FUNC_2 (int ,int,int (*) (struct tl_act_extra*)) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,...) ;

struct tl_act_extra *FUNC_7 (int (*VAR_7)(struct tl_act_extra *)) {
  struct tl_act_extra *VAR_8 = FUNC_2 (VAR_6, sizeof (struct tl_list_entry_get), VAR_7);
  struct tl_list_entry_get *VAR_9 = (void *)VAR_8->extra;
  VAR_0;
  if (FUNC_0 (&VAR_9->list_id) < 0) {
    return 0;
  }
  if (FUNC_1 (&VAR_9->object_id) < 0) {
    return 0;
  }
  VAR_9->mode = FUNC_5 ();
  FUNC_3 ();
  if (FUNC_4 ()) {
    return 0;
  }
  if (VAR_9->mode & 63) {
    FUNC_6 (VAR_1, "In get object flags 0..5 not supported");
    return 0;
  }
  if (VAR_9->mode & (VAR_3 | VAR_2 | VAR_4 | VAR_5)) {
    FUNC_6 (VAR_1, "Get ip/front_ip/port/ua_hash not supported (yet?). (mode = 0x%08x)", VAR_9->mode);
    return 0;
  }
  return VAR_8;
}
