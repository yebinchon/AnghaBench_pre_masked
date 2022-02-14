
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int statuses; } ;
typedef TYPE_1__ record_callbacks_data ;
struct TYPE_8__ {struct TYPE_8__* msg; int success; struct TYPE_8__* ref; } ;
typedef TYPE_2__ push_status ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 TYPE_2__* FUNC_2 (char const*) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 record_callbacks_data *VAR_3 = (record_callbacks_data *) VAR_2;
 push_status *VAR_4;

 FUNC_0(VAR_4 = FUNC_1(1, sizeof(*VAR_4)));
 if (VAR_0)
  FUNC_0(VAR_4->ref = FUNC_2(VAR_0));
 VAR_4->success = (VAR_1 == ((void*)0));
 if (VAR_1)
  FUNC_0(VAR_4->msg = FUNC_2(VAR_1));

 FUNC_3(&VAR_3->statuses, VAR_4);

 return 0;
}
