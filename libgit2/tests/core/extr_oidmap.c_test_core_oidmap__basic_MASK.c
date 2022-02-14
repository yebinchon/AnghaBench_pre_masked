
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

void FUNC_7(void)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
  FUNC_1(!FUNC_4(VAR_0, &VAR_1[VAR_2].oid));
  FUNC_3(FUNC_6(VAR_0, &VAR_1[VAR_2].oid, &VAR_1[VAR_2]));
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
  FUNC_1(FUNC_4(VAR_0, &VAR_1[VAR_2].oid));
  FUNC_2(FUNC_5(VAR_0, &VAR_1[VAR_2].oid), &VAR_1[VAR_2]);
 }
}
