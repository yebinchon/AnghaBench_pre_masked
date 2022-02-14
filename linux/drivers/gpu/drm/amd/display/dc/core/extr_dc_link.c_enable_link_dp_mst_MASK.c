
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_ctx {TYPE_1__* stream; } ;
struct dc_state {int dummy; } ;
struct TYPE_4__ {scalar_t__ lane_count; } ;
struct dc_link {int ctx; TYPE_2__ cur_link_settings; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_3__ {struct dc_link* link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct dc_link*) ;
 int FUNC_1 (int ,struct dc_link*) ;
 int FUNC_2 (struct dc_link*,int) ;
 int FUNC_3 (struct dc_state*,struct pipe_ctx*) ;

__attribute__((used)) static enum dc_status FUNC_4(
  struct dc_state *VAR_2,
  struct pipe_ctx *VAR_3)
{
 struct dc_link *VAR_4 = VAR_3->stream->link;




 if (VAR_4->cur_link_settings.lane_count != VAR_1)
  return VAR_0;


 FUNC_0(VAR_4->ctx, VAR_4);




 FUNC_1(VAR_4->ctx, VAR_4);


 FUNC_2(VAR_4, 1);

 return FUNC_3(VAR_2, VAR_3);
}
