
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_training_settings {int dummy; } ;
struct link_encoder {TYPE_1__* funcs; } ;
struct dc_link {struct link_encoder* link_enc; } ;
struct TYPE_2__ {int (* dp_set_lane_settings ) (struct link_encoder*,struct link_training_settings const*) ;} ;


 int FUNC_0 (struct link_encoder*,struct link_training_settings const*) ;

void FUNC_1(
 struct dc_link *VAR_0,
 const struct link_training_settings *VAR_1)
{
 struct link_encoder *VAR_2 = VAR_0->link_enc;


 VAR_2->funcs->dp_set_lane_settings(VAR_2, VAR_1);
}
