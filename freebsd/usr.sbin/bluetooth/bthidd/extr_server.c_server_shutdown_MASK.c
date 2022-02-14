
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bthid_server_p ;
struct TYPE_4__ {int sessions; int intr; int ctrl; int cons; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(bthid_server_p VAR_0)
{
 FUNC_2(VAR_0 != ((void*)0));

 FUNC_3(VAR_0->cons);
 FUNC_3(VAR_0->ctrl);
 FUNC_3(VAR_0->intr);

 while (!FUNC_0(&VAR_0->sessions))
  FUNC_5(FUNC_1(&VAR_0->sessions));

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
}
