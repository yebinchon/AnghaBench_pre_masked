
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_training_settings {int dummy; } ;
struct dc_link_settings {int dummy; } ;
struct TYPE_8__ {int* fec_enable; } ;
struct dc_link {TYPE_3__* ctx; TYPE_4__ preferred_training_settings; } ;
typedef enum link_training_result { ____Placeholder_link_training_result } link_training_result ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_5__ {int ltFailCount; } ;
struct TYPE_6__ {TYPE_1__ debug_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_link*,int) ;
 int FUNC_1 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_2 (struct dc_link*,struct dc_link_settings const*,TYPE_4__*,struct link_training_settings*) ;
 int FUNC_3 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_4 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_5 (struct dc_link*,struct link_training_settings*,int) ;
 int FUNC_6 (struct dc_link*,struct link_training_settings*,int) ;

enum link_training_result FUNC_7(
 struct dc_link *VAR_1,
 const struct dc_link_settings *VAR_2,
 bool VAR_3)
{
 enum link_training_result VAR_4 = VAR_0;
 struct link_training_settings VAR_5;




 FUNC_2(
   VAR_1,
   VAR_2,
   &VAR_1->preferred_training_settings,
   &VAR_5);


 FUNC_1(VAR_1, &VAR_5);
 VAR_4 = FUNC_4(VAR_1, &VAR_5);
 if (VAR_4 == VAR_0) {
  VAR_4 = FUNC_3(VAR_1,
    &VAR_5);
 }

 if ((VAR_4 == VAR_0) || !VAR_3) {
  VAR_4 = FUNC_5(VAR_1,
    &VAR_5,
    VAR_4);
 }


 FUNC_6(VAR_1, &VAR_5, VAR_4);

 if (VAR_4 != VAR_0)
  VAR_1->ctx->dc->debug_data.ltFailCount++;

 return VAR_4;
}
