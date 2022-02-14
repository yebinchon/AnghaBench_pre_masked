
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ res_t ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ res; int pri; int lineno; } ;
typedef TYPE_1__ collpri_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(int32_t VAR_7, int32_t VAR_8, res_t VAR_9)
{
 collpri_t *VAR_10;

 VAR_10 = FUNC_0(VAR_7);

 if ((VAR_9 == VAR_1) && ((VAR_8 < 0) || (VAR_8 >= VAR_6))) {
  VAR_0;
 }


 if ((VAR_9 == VAR_1) && (VAR_7 == VAR_8)) {
  VAR_8 = VAR_5;
  VAR_9 = VAR_2;
 }

 if (VAR_10->res != VAR_3) {
  FUNC_1("repeated item in order list (first on %d)",
      VAR_10->lineno);
  return;
 }
 VAR_10->lineno = VAR_4;
 VAR_10->pri = VAR_8;
 VAR_10->res = VAR_9;
}
