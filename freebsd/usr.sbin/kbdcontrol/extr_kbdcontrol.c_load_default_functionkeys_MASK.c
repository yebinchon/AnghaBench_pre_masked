
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keynum; int flen; int keydef; } ;
typedef TYPE_1__ fkeyarg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 fkeyarg_t VAR_3;
 int VAR_4;

 for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  VAR_3.keynum = VAR_4;
  FUNC_1(VAR_3.keydef, VAR_2[VAR_4]);
  VAR_3.flen = FUNC_2(VAR_2[VAR_4]);
  if (FUNC_0(0, VAR_1, &VAR_3) < 0)
   FUNC_3("setting function key");
 }
}
