
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_9__ {int type; } ;




 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 char FUNC_1 () ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 char VAR_1 ;
 int FUNC_4 (int,char*) ;
 TYPE_1__* FUNC_5 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

Tree FUNC_7(int VAR_2) {
 static char VAR_3[] = { 128, 129, '}', 0 };
 Tree VAR_4 = FUNC_0(0);

 while (VAR_1 == ',') {
  Tree VAR_5;
  VAR_1 = FUNC_1();
  VAR_5 = FUNC_2(FUNC_0(0));
  VAR_4 = FUNC_5(VAR_0, VAR_5->type, FUNC_3(FUNC_6(VAR_4)), VAR_5);
 }
 if (VAR_2)
  FUNC_4(VAR_2, VAR_3);
 return VAR_4;
}
