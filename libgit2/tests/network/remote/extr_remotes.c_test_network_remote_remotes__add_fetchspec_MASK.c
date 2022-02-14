
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int push; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ,size_t) ;
 int FUNC_11 (int *,int ,char*) ;
 size_t FUNC_12 (int ) ;

void FUNC_13(void)
{
 size_t VAR_4;

 VAR_4 = FUNC_12(VAR_2);

 FUNC_4(FUNC_8(VAR_3, "test", "refs/*:refs/*"));
 VAR_4++;

 FUNC_9(VAR_2);
 FUNC_4(FUNC_11(&VAR_2, VAR_3, "test"));

 FUNC_1((int)VAR_4, (int)FUNC_12(VAR_2));

 VAR_1 = FUNC_10(VAR_2, VAR_4 - 1);
 FUNC_2(FUNC_6(VAR_1), "refs/*");
 FUNC_2(FUNC_5(VAR_1), "refs/*");
 FUNC_2(FUNC_7(VAR_1), "refs/*:refs/*");
 FUNC_0(VAR_1->push, 0);

 FUNC_3(VAR_0, FUNC_8(VAR_3, "test", "refs/*/foo/*:refs/*"));
}
