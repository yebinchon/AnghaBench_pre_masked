
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct send_context {int credit_ctrl; } ;


 int FUNC_0 (struct send_context*) ;
 int FUNC_1 (struct send_context*) ;
 int FUNC_2 (struct send_context*) ;
 int FUNC_3 (struct send_context*,scalar_t__,int ) ;

void FUNC_4(struct send_context *VAR_0, u32 VAR_1)
{
 if (VAR_1)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
 FUNC_3(VAR_0, VAR_1, VAR_0->credit_ctrl);
 if (VAR_1)
  FUNC_2(VAR_0);
}
