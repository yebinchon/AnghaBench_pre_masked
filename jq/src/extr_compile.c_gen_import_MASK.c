
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jv ;
struct TYPE_5__ {int constant; } ;
struct TYPE_6__ {TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
typedef int block ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;

block FUNC_7(const char* VAR_1, const char* VAR_2, int VAR_3) {
  inst* VAR_4 = FUNC_1(VAR_0);
  jv VAR_5 = FUNC_3();
  if (VAR_2 != ((void*)0))
    VAR_5 = FUNC_4(VAR_5, FUNC_5("as"), FUNC_5(VAR_2));
  VAR_5 = FUNC_4(VAR_5, FUNC_5("is_data"), VAR_3 ? FUNC_6() : FUNC_2());
  VAR_5 = FUNC_4(VAR_5, FUNC_5("relpath"), FUNC_5(VAR_1));
  VAR_4->imm.constant = VAR_5;
  return FUNC_0(VAR_4);
}
