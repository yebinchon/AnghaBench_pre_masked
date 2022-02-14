
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; void* len; } ;
struct TYPE_4__ {TYPE_1__ strval; int lval; } ;
struct memcache_value {int type; TYPE_2__ val; void* flags; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 () ;
 void* FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ) ;

struct memcache_value FUNC_9 (void) {
  struct memcache_value VAR_1;
  FUNC_4 ();
  int VAR_2 = FUNC_5 ();
  switch (VAR_2) {
  case 129:
    VAR_1.type = 129;
    break;
  case 130:
    VAR_1.type = 130;
    VAR_1.val.lval = FUNC_6 ();
    VAR_1.flags = FUNC_5 ();
    break;
  case 128:
    VAR_1.type = 128;
    VAR_1.val.strval.len = FUNC_7 (&VAR_1.val.strval.data);
    VAR_1.flags = FUNC_5 ();
    break;
  case 133:
    VAR_1.type = 133;
    FUNC_6 ();
    FUNC_5 ();
    VAR_1.val.strval.len = FUNC_7 (&VAR_1.val.strval.data);
    break;
  case 131:
    VAR_1.type = 131;
    break;
  case 132:
    VAR_1.type = 132;
    break;
  default:
    FUNC_0 (VAR_0, 1000, "Unknown magic %x", VAR_2);
    FUNC_8 (VAR_0);
    break;
  }
  FUNC_2 ();
  if (FUNC_3 ()) {
    VAR_1.type = 133;
    VAR_1.val.strval.data = FUNC_3 ();
    VAR_1.val.strval.len = FUNC_1 (VAR_1.val.strval.data);
  }
  return VAR_1;
}
