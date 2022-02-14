
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event; } ;
struct bts_ctx {TYPE_1__ handle; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 struct bts_ctx* FUNC_2 (int *) ;

void FUNC_3(void)
{
 struct bts_ctx *VAR_3 = FUNC_2(&VAR_2);





 if (FUNC_0(VAR_3->state) != VAR_0)
  return;

 if (VAR_3->handle.event)
  FUNC_1(VAR_3->handle.event, VAR_1);
}
