
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event; } ;
struct bts_ctx {TYPE_1__ handle; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 struct bts_ctx* FUNC_3 (int *) ;

void FUNC_4(void)
{
 struct bts_ctx *VAR_3 = FUNC_3(&VAR_2);
 int VAR_4 = FUNC_0(VAR_3->state);






 if (FUNC_1(VAR_4 == VAR_0))
  return;

 if (VAR_4 == VAR_1)
  return;

 if (VAR_3->handle.event)
  FUNC_2(VAR_3->handle.event);
}
