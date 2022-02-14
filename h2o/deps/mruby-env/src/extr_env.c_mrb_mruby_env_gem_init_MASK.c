
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {int dummy; } ;
struct TYPE_9__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RObject*,char*,int ,int ) ;
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
 int FUNC_5 (TYPE_1__*,struct RClass*,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (struct RObject*) ;

void
FUNC_9(mrb_state *VAR_11)
{
  struct RObject *VAR_12;

  VAR_12 = (struct RObject*) FUNC_7(VAR_11, VAR_0, VAR_11->object_class);



  FUNC_5(VAR_11, (struct RClass*)VAR_12, FUNC_2(VAR_11, "Enumerable"));


  FUNC_4(VAR_11, VAR_12,"[]", VAR_1, FUNC_1(1));
  FUNC_4(VAR_11, VAR_12,"[]=", VAR_2, FUNC_1(2));
  FUNC_4(VAR_11, VAR_12,"has_key?", VAR_3, FUNC_1(1));
  FUNC_4(VAR_11, VAR_12,"inspect", VAR_4, FUNC_0());
  FUNC_4(VAR_11, VAR_12,"keys", VAR_5, FUNC_0());
  FUNC_4(VAR_11, VAR_12,"size", VAR_6, FUNC_0());
  FUNC_4(VAR_11, VAR_12,"store", VAR_2, FUNC_1(2));
  FUNC_4(VAR_11, VAR_12,"to_a", VAR_7, FUNC_0());
  FUNC_4(VAR_11, VAR_12,"to_hash", VAR_8, FUNC_0());
  FUNC_4(VAR_11, VAR_12,"to_s", VAR_9, FUNC_0());
  FUNC_4(VAR_11, VAR_12,"values", VAR_10, FUNC_0());

  FUNC_3(VAR_11, "ENV", FUNC_8(VAR_12));
}
