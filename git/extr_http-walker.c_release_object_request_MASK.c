
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_request {int node; TYPE_1__* req; } ;
struct TYPE_2__ {int localfile; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct object_request*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct object_request *VAR_0)
{
 if (VAR_0->req !=((void*)0) && VAR_0->req->localfile != -1)
  FUNC_0("fd leakage in release: %d", VAR_0->req->localfile);

 FUNC_2(&VAR_0->node);
 FUNC_1(VAR_0);
}
