
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opal_msg {int* params; } ;
struct TYPE_2__ {int completed; int msg; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,struct opal_msg*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct opal_msg *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->params[0];
 FUNC_1(&VAR_0[VAR_3].msg, VAR_2, sizeof(*VAR_2));
 FUNC_0();
 VAR_0[VAR_3].completed = 1;
}
