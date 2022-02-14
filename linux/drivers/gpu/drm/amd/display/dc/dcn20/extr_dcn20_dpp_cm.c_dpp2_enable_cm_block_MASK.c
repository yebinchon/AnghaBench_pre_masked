
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dpp {TYPE_3__* ctx; } ;
struct dcn20_dpp {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {scalar_t__ cm_in_bypass; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_2)
{
 struct dcn20_dpp *VAR_3 = FUNC_1(VAR_2);

 unsigned int VAR_4 = 0;

 if (VAR_2->ctx->dc->debug.cm_in_bypass)
  VAR_4 = 1;

 FUNC_0(VAR_1, VAR_0, VAR_4);
}
