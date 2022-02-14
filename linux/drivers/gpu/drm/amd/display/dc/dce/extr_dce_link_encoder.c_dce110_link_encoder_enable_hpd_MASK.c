
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct link_encoder {int dummy; } ;
struct TYPE_2__ {struct dc_context* ctx; } ;
struct dce110_link_encoder {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct dce110_link_encoder* FUNC_1 (struct link_encoder*) ;
 scalar_t__ FUNC_2 (struct dc_context*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int ,int ) ;

void FUNC_5(struct link_encoder *VAR_2)
{
 struct dce110_link_encoder *VAR_3 = FUNC_1(VAR_2);
 struct dc_context *VAR_4 = VAR_3->base.ctx;
 uint32_t VAR_5 = FUNC_0(VAR_0);
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = FUNC_2(VAR_4, VAR_5);

 FUNC_3(VAR_6, VAR_0, VAR_1);

 if (VAR_6 == 0)
  FUNC_4(VAR_7, 1, VAR_0, VAR_1);
}
