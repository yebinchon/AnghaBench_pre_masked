
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int inst; TYPE_1__* ctx; } ;
struct optc {int dummy; } ;
struct TYPE_2__ {scalar_t__ dce_environment; } ;


 scalar_t__ VAR_0 ;
 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int,int) ;
 int VAR_5 ;

void FUNC_4(struct timing_generator *VAR_6)
{
 struct optc *VAR_7 = FUNC_0(VAR_6);
 uint32_t VAR_8 = 0;

 VAR_8 = FUNC_1(VAR_1);


 if ((VAR_8 & 0x1) == 0x0)
  return;

 FUNC_2(VAR_2, 0,
   VAR_4, VAR_6->inst);
 FUNC_2(VAR_3, 0,
   VAR_3, 1);


 if (VAR_6->ctx->dce_environment != VAR_0) {

  FUNC_3(VAR_3,
    VAR_5, 1,
    1, 10);
 }
}
