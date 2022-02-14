
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_ibdev {TYPE_1__* fault; } ;
struct TYPE_2__ {int dir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct hfi1_ibdev *VAR_0)
{
 if (VAR_0->fault)
  FUNC_0(VAR_0->fault->dir);
 FUNC_1(VAR_0->fault);
 VAR_0->fault = ((void*)0);
}
