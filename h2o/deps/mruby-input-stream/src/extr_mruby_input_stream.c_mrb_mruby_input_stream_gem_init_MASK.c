
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct RClass* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(mrb_state* VAR_5)
{
  struct RClass * VAR_6 = FUNC_3(VAR_5, "InputStream", VAR_5->object_class);

  FUNC_4(VAR_5, VAR_6, "gets", VAR_1, FUNC_2());
  FUNC_4(VAR_5, VAR_6, "read", VAR_3, FUNC_0());
  FUNC_4(VAR_5, VAR_6, "initialize", VAR_2, FUNC_1());
  FUNC_4(VAR_5, VAR_6, "rewind", VAR_4, FUNC_2());
  FUNC_4(VAR_5, VAR_6, "byteindex", VAR_0, FUNC_0());
}
