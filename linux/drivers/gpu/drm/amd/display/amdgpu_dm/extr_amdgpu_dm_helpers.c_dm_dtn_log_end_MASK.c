
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_log_buffer_ctx {int dummy; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 (struct dc_context*,struct dc_log_buffer_ctx*,char*,char const*) ;
 int FUNC_1 (char*,char const*) ;

void FUNC_2(struct dc_context *VAR_0,
 struct dc_log_buffer_ctx *VAR_1)
{
 static const char VAR_2[] = "[dtn end]\n";

 if (!VAR_1) {
  FUNC_1("%s", VAR_2);
  return;
 }

 FUNC_0(VAR_0, VAR_1, "%s", VAR_2);
}
