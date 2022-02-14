
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
 int FUNC_2 (struct RClass*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct RClass* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;

void FUNC_6(mrb_state *VAR_7)
{
  struct RClass *VAR_8;

  VAR_8 = FUNC_3(VAR_7, "InlineStructTest", VAR_7->object_class);
  FUNC_2(VAR_8, VAR_0);
  FUNC_5(VAR_7, VAR_8, "initialize", VAR_1, FUNC_1(1));
  FUNC_5(VAR_7, VAR_8, "to_s", VAR_6, FUNC_0());
  FUNC_5(VAR_7, VAR_8, "mutate", VAR_3, FUNC_0());
  FUNC_4(VAR_7, VAR_8, "length", VAR_2, FUNC_0());
  FUNC_4(VAR_7, VAR_8, "test_receive", VAR_4, FUNC_1(1));
  FUNC_4(VAR_7, VAR_8, "test_receive_direct", VAR_5, FUNC_1(1));
}
