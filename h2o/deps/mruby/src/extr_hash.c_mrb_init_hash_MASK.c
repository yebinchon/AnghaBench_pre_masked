
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {int object_class; struct RClass* hash_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct RClass*,int ) ;
 int VAR_0 ;
 struct RClass* FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_7(mrb_state *VAR_19)
{
  struct RClass *VAR_20;

  VAR_19->hash_class = VAR_20 = FUNC_5(VAR_19, "Hash", VAR_19->object_class);
  FUNC_4(VAR_20, VAR_0);

  FUNC_6(VAR_19, VAR_20, "initialize_copy", VAR_11, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "[]", VAR_1, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "[]=", VAR_2, FUNC_3(2));
  FUNC_6(VAR_19, VAR_20, "clear", VAR_3, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "default", VAR_4, FUNC_0());
  FUNC_6(VAR_19, VAR_20, "default=", VAR_14, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "default_proc", VAR_5,FUNC_1());
  FUNC_6(VAR_19, VAR_20, "default_proc=", VAR_15,FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "__delete", VAR_6, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "empty?", VAR_7, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "has_key?", VAR_8, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "has_value?", VAR_9, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "include?", VAR_8, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "initialize", VAR_10, FUNC_2(1));
  FUNC_6(VAR_19, VAR_20, "key?", VAR_8, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "keys", VAR_12, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "length", VAR_17, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "member?", VAR_8, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "shift", VAR_16, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "size", VAR_17, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "store", VAR_2, FUNC_3(2));
  FUNC_6(VAR_19, VAR_20, "value?", VAR_9, FUNC_3(1));
  FUNC_6(VAR_19, VAR_20, "values", VAR_18, FUNC_1());
  FUNC_6(VAR_19, VAR_20, "rehash", VAR_13, FUNC_1());
}
