
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int push; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,size_t) ;
 int FUNC_10 (int *,int ,char*) ;
 size_t FUNC_11 (int ) ;

void FUNC_12(void)
{
 size_t VAR_3;

 VAR_3 = FUNC_11(VAR_1);

 FUNC_3(FUNC_7(VAR_2, "test", "refs/*:refs/*"));
 VAR_3++;

 FUNC_8(VAR_1);
 FUNC_3(FUNC_10(&VAR_1, VAR_2, "test"));

 FUNC_1((int)VAR_3, (int)FUNC_11(VAR_1));

 VAR_0 = FUNC_9(VAR_1, VAR_3 - 1);
 FUNC_2(FUNC_5(VAR_0), "refs/*");
 FUNC_2(FUNC_4(VAR_0), "refs/*");
 FUNC_2(FUNC_6(VAR_0), "refs/*:refs/*");

 FUNC_0(VAR_0->push, 1);
}
