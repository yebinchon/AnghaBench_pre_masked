
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alg; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  int VAR_2 = FUNC_3(VAR_0[VAR_1 - 1].alg,
      VAR_0[VAR_1].alg);

  if (FUNC_1(VAR_2 > 0)) {
   FUNC_2("testmgr: alg_test_descs entries in wrong order: '%s' before '%s'\n",
    VAR_0[VAR_1 - 1].alg,
    VAR_0[VAR_1].alg);
  }

  if (FUNC_1(VAR_2 == 0)) {
   FUNC_2("testmgr: duplicate alg_test_descs entry: '%s'\n",
    VAR_0[VAR_1].alg);
  }
 }
}
