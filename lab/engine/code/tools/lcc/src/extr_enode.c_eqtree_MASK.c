
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* Type ;
typedef TYPE_2__* Tree ;
struct TYPE_21__ {TYPE_1__* type; } ;
struct TYPE_20__ {int type; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,TYPE_1__*) ;
 TYPE_2__* FUNC_8 (int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int ) ;
 TYPE_1__* VAR_1 ;

Tree FUNC_10(int VAR_2, Tree VAR_3, Tree VAR_4) {
 Type VAR_5 = VAR_3->type, VAR_6 = VAR_4->type;

 if ((FUNC_5(VAR_5) && FUNC_4(VAR_4))
 || (FUNC_5(VAR_5) && !FUNC_3(VAR_5->type) && FUNC_6(VAR_6))
 || (FUNC_5(VAR_5) && FUNC_5(VAR_6)
     && FUNC_2(FUNC_9(VAR_5->type), FUNC_9(VAR_6->type), 1))) {
  Type VAR_7 = VAR_1;
  VAR_3 = FUNC_0(VAR_3, VAR_7);
  VAR_4 = FUNC_0(VAR_4, VAR_7);
  return FUNC_8(FUNC_7(VAR_2,VAR_7), VAR_0, VAR_3, VAR_4);
 }
 if ((FUNC_5(VAR_6) && FUNC_4(VAR_3))
 || (FUNC_5(VAR_6) && !FUNC_3(VAR_6->type) && FUNC_6(VAR_5)))
  return FUNC_10(VAR_2, VAR_4, VAR_3);
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
