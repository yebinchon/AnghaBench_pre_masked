
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_request {int oid; int walker; TYPE_1__* req; } ;
struct TYPE_2__ {scalar_t__ rename; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct object_request *VAR_0)
{
 if (FUNC_0(VAR_0->req))
  return;

 if (VAR_0->req->rename == 0)
  FUNC_2(VAR_0->walker, "got %s\n", FUNC_1(&VAR_0->oid));
}
