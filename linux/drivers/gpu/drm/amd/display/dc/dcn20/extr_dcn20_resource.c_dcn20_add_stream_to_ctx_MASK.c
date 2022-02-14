
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ DSC; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;
struct dc_stream_state {TYPE_2__ timing; } ;
struct dc_state {int dummy; } ;
struct dc {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc*,struct dc_state*,struct dc_stream_state*) ;
 int FUNC_1 (struct dc*,struct dc_state*,struct dc_stream_state*) ;
 int FUNC_2 (struct dc*,struct dc_state*,struct dc_stream_state*) ;
 int FUNC_3 (struct dc*,struct dc_state*,struct dc_stream_state*) ;

enum dc_status FUNC_4(struct dc *VAR_2, struct dc_state *VAR_3, struct dc_stream_state *VAR_4)
{
 enum dc_status VAR_5 = VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);







 if (VAR_5 == VAR_1)
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
