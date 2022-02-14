
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_training_settings {int dummy; } ;
struct dc_link_training_overrides {scalar_t__* alternate_scrambler_reset; scalar_t__* fec_enable; int * mst_enable; } ;
struct dc_link_settings {int dummy; } ;
struct dc_link {int connector_signal; } ;
typedef enum link_training_result { ____Placeholder_link_training_result } link_training_result ;
typedef enum dp_panel_mode { ____Placeholder_dp_panel_mode } dp_panel_mode ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_link*,int ) ;
 int FUNC_1 (struct dc_link*,int ,int,struct dc_link_settings*) ;
 int FUNC_2 (struct dc_link*) ;
 int FUNC_3 (struct dc_link*,int) ;
 int FUNC_4 (struct dc_link*,int) ;
 int FUNC_5 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_6 (struct dc_link*) ;
 int FUNC_7 (struct dc_link*,struct dc_link_settings*,struct dc_link_training_overrides*,struct link_training_settings*) ;
 int FUNC_8 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_9 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_10 (struct dc_link*,struct link_training_settings*,int) ;
 int FUNC_11 (struct dc_link*,int ) ;

enum link_training_result FUNC_12(
    struct dc_link *VAR_4,
    struct dc_link_settings *VAR_5,
    struct dc_link_training_overrides *VAR_6)
{
 struct link_training_settings VAR_7;
 enum link_training_result VAR_8 = VAR_3;
 enum dp_panel_mode VAR_9 = VAR_1;
 enum clock_source_id VAR_10 = VAR_0;




 FUNC_7(
  VAR_4,
  VAR_5,
  VAR_6,
  &VAR_7);


 if (VAR_6->mst_enable)
  FUNC_11(VAR_4, *VAR_6->mst_enable);


 FUNC_0(VAR_4, VAR_4->connector_signal);


 VAR_10 = FUNC_6(VAR_4);
 FUNC_1(VAR_4, VAR_4->connector_signal,
  VAR_10, VAR_5);







 if (VAR_6->alternate_scrambler_reset) {
  if (*VAR_6->alternate_scrambler_reset)
   VAR_9 = VAR_2;
  else
   VAR_9 = VAR_1;
 } else
  VAR_9 = FUNC_2(VAR_4);

 FUNC_4(VAR_4, VAR_9);




 FUNC_5(VAR_4, &VAR_7);




 VAR_8 = FUNC_9(VAR_4, &VAR_7);
 if (VAR_8 == VAR_3) {
  VAR_8 = FUNC_8(VAR_4,
      &VAR_7);
 }



 FUNC_10(VAR_4, &VAR_7, VAR_8);

 return VAR_8;
}
