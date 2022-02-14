
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {int inst; TYPE_1__* ctx; } ;
struct optc {int dummy; } ;
struct TYPE_2__ {scalar_t__ dce_environment; } ;


 scalar_t__ VAR_0 ;
 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 int VAR_6 ;

void FUNC_3(struct timing_generator *VAR_7)
{
 struct optc *VAR_8 = FUNC_0(VAR_7);

 FUNC_1(VAR_1, 0,
  VAR_3, VAR_7->inst);

 FUNC_1(VAR_5, 0,
  VAR_4, 1);

 FUNC_1(VAR_2, 0,
  VAR_2, 1);

 if (VAR_7->ctx->dce_environment != VAR_0)
  FUNC_2(VAR_2,
    VAR_6, 1,
    1, 10);
}
