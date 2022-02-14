
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_set {int mode; int value; int text_len; int op; void* ua_hash; void* port; void* front_ip; void* ip; int text; void* flags; int object_id; int list_id; } ;
struct tl_act_extra {int size; scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct tl_act_extra* FUNC_2 (int ,int,int ) ;
 int VAR_14 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int ,scalar_t__) ;

struct tl_act_extra *FUNC_9 (int VAR_15) {
  struct tl_act_extra *VAR_16 = FUNC_2 (VAR_13, sizeof (struct tl_list_entry_set), VAR_14);
  struct tl_list_entry_set *VAR_17 = (void *)VAR_16->extra;
  VAR_0;
  if (FUNC_0 (&VAR_17->list_id) < 0) {
    return 0;
  }
  VAR_17->mode = FUNC_5 ();
  if (FUNC_4 ()) {
    return 0;
  }
  if (!(VAR_17->mode & VAR_7)) {
    FUNC_7 (VAR_1, "entry must contain object id (mode = 0x%08x)", VAR_17->mode);
    return 0;
  }
  if (VAR_17->mode & (VAR_2 | VAR_5)) {
    FUNC_7 (VAR_1, "entry can not contain date and global_id (mode = 0x%08x)", VAR_17->mode);
    return 0;
  }




  if (FUNC_1 (&VAR_17->object_id) < 0) {
    return 0;
  }
  VAR_17->flags = (VAR_17->mode & VAR_3) ? FUNC_5 () : 0;
  VAR_17->value = (VAR_17->mode & VAR_11) ? FUNC_6 () : 0;






  if (VAR_17->value != (int)VAR_17->value) {
    FUNC_7 (VAR_1, "64-bit value can not be used in this version of lists (value = %lld)", VAR_17->value);
    return 0;
  }

  VAR_17->text_len = (VAR_17->mode & VAR_9) ? FUNC_8 (VAR_17->text, VAR_12 - 1) : -1;
  VAR_16->size += VAR_17->text_len + 1;
  VAR_17->ip = (VAR_17->mode & VAR_6) ? FUNC_5 () : 0;
  VAR_17->front_ip = (VAR_17->mode & VAR_4) ? FUNC_5 () : 0;
  VAR_17->port = (VAR_17->mode & VAR_8) ? FUNC_5 () : 0;
  VAR_17->ua_hash = (VAR_17->mode & VAR_10) ? FUNC_5 () : 0;
  VAR_17->op = VAR_15;
  FUNC_3 ();
  if (FUNC_4 ()) {
    return 0;
  }
  return VAR_16;
}
