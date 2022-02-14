
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_6__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct RClass*,int ) ;
 int VAR_0 ;
 struct RClass* FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int) ;
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
 int VAR_12 ;

void
FUNC_7(mrb_state *VAR_13)
{
  struct RClass *VAR_14;

  VAR_14 = FUNC_4(VAR_13, "Dir", VAR_13->object_class);
  FUNC_3(VAR_14, VAR_0);
  FUNC_5(VAR_13, VAR_14, "delete", VAR_4, FUNC_2(1));
  FUNC_5(VAR_13, VAR_14, "exist?", VAR_5, FUNC_2(1));
  FUNC_5(VAR_13, VAR_14, "getwd", VAR_6, FUNC_0());
  FUNC_5(VAR_13, VAR_14, "mkdir", VAR_8, FUNC_2(1)|FUNC_1(1));
  FUNC_5(VAR_13, VAR_14, "_chdir", VAR_1, FUNC_2(1));
  FUNC_5(VAR_13, VAR_14, "chroot", VAR_2, FUNC_2(1));

  FUNC_6(VAR_13, VAR_14, "close", VAR_3, FUNC_0());
  FUNC_6(VAR_13, VAR_14, "initialize", VAR_7, FUNC_2(1));
  FUNC_6(VAR_13, VAR_14, "read", VAR_9, FUNC_0());
  FUNC_6(VAR_13, VAR_14, "rewind", VAR_10, FUNC_0());
  FUNC_6(VAR_13, VAR_14, "seek", VAR_11, FUNC_2(1));
  FUNC_6(VAR_13, VAR_14, "tell", VAR_12, FUNC_0());
}
