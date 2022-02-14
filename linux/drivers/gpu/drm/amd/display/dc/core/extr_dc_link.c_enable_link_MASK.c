
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_ctx {TYPE_3__* stream; } ;
struct dc_state {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_6__ {int signal; TYPE_2__* link; } ;
struct TYPE_4__ {int link_active; } ;
struct TYPE_5__ {TYPE_1__ link_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_state*,struct pipe_ctx*) ;
 int FUNC_1 (struct dc_state*,struct pipe_ctx*) ;
 int FUNC_2 (struct dc_state*,struct pipe_ctx*) ;
 int FUNC_3 (struct pipe_ctx*) ;
 int FUNC_4 (struct pipe_ctx*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static enum dc_status FUNC_6(
  struct dc_state *VAR_2,
  struct pipe_ctx *VAR_3)
{
 enum dc_status VAR_4 = VAR_0;
 switch (VAR_3->stream->signal) {
 case 135:
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  break;
 case 134:
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  FUNC_5(200);
  break;
 case 132:
 case 133:
 case 130:
  FUNC_3(VAR_3);
  VAR_4 = VAR_1;
  break;
 case 129:
  FUNC_4(VAR_3);
  VAR_4 = VAR_1;
  break;
 case 128:
  VAR_4 = VAR_1;
  break;
 default:
  break;
 }

 if (VAR_4 == VAR_1)
  VAR_3->stream->link->link_status.link_active = 1;

 return VAR_4;
}
