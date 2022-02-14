
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timing_generator {TYPE_2__* funcs; } ;
struct dc_stream_state {int timing; struct dc_link* link; } ;
struct dc_link {TYPE_4__* link_enc; } ;
struct dc {TYPE_1__* res_pool; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_8__ {TYPE_3__* funcs; } ;
struct TYPE_7__ {int (* validate_output_with_stream ) (TYPE_4__*,struct dc_stream_state*) ;} ;
struct TYPE_6__ {int (* validate_timing ) (struct timing_generator*,int *) ;} ;
struct TYPE_5__ {struct timing_generator** timing_generators; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_stream_state*) ;
 int FUNC_1 (struct dc_stream_state*,struct dc_link*,int *) ;
 int FUNC_2 (struct timing_generator*,int *) ;
 int FUNC_3 (TYPE_4__*,struct dc_stream_state*) ;

enum dc_status FUNC_4(struct dc *VAR_3, struct dc_stream_state *VAR_4)
{
 struct dc *VAR_5 = VAR_3;
 struct dc_link *VAR_6 = VAR_4->link;
 struct timing_generator *VAR_7 = VAR_5->res_pool->timing_generators[0];
 enum dc_status VAR_8 = VAR_2;

 FUNC_0(VAR_4);

 if (!VAR_7->funcs->validate_timing(VAR_7, &VAR_4->timing))
  VAR_8 = VAR_0;

 if (VAR_8 == VAR_2) {
  if (!VAR_6->link_enc->funcs->validate_output_with_stream(
      VAR_6->link_enc, VAR_4))
   VAR_8 = VAR_1;
 }



 if (VAR_8 == VAR_2)
  VAR_8 = FUNC_1(VAR_4,
        VAR_6,
        &VAR_4->timing);

 return VAR_8;
}
