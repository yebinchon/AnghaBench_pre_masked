
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_4__ {struct RClass* array_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;

void
FUNC_3(mrb_state* VAR_5)
{
  struct RClass * VAR_6 = VAR_5->array_class;

  FUNC_2(VAR_5, VAR_6, "assoc", VAR_0, FUNC_1(1));
  FUNC_2(VAR_5, VAR_6, "at", VAR_1, FUNC_1(1));
  FUNC_2(VAR_5, VAR_6, "rassoc", VAR_2, FUNC_1(1));
  FUNC_2(VAR_5, VAR_6, "values_at", VAR_4, FUNC_0());
  FUNC_2(VAR_5, VAR_6, "slice!", VAR_3, FUNC_0());
}
