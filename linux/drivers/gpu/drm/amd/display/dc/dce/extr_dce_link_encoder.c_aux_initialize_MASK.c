
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int hpd_source; struct dc_context* ctx; } ;
struct dce110_link_encoder {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;
typedef enum hpd_source_id { ____Placeholder_hpd_source_id } hpd_source_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct dc_context*,int ) ;
 int FUNC_2 (struct dc_context*,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(
 struct dce110_link_encoder *VAR_5)
{
 struct dc_context *VAR_6 = VAR_5->base.ctx;
 enum hpd_source_id VAR_7 = VAR_5->base.hpd_source;
 uint32_t VAR_8 = FUNC_0(VAR_0);
 uint32_t VAR_9 = FUNC_1(VAR_6, VAR_8);

 FUNC_3(VAR_9, VAR_7, VAR_0, VAR_2);
 FUNC_3(VAR_9, 0, VAR_0, VAR_3);
 FUNC_2(VAR_6, VAR_8, VAR_9);

 VAR_8 = FUNC_0(VAR_1);
 VAR_9 = FUNC_1(VAR_6, VAR_8);


 FUNC_3(VAR_9, 1,
   VAR_1, VAR_4);
 FUNC_2(VAR_6, VAR_8, VAR_9);

}
