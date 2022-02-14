
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_6__ {int type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;

Tree FUNC_5(Tree VAR_0) {
 if (FUNC_1(VAR_0->type))

  VAR_0 = FUNC_4(VAR_0, FUNC_0(VAR_0->type));
 else if (FUNC_2(VAR_0->type))
  VAR_0 = FUNC_4(VAR_0, FUNC_3(VAR_0->type));
 return VAR_0;
}
