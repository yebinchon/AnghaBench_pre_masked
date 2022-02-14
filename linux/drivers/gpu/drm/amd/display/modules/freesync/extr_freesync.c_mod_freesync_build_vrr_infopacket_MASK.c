
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_vrr_params {int send_info_frame; int supported; } ;
struct mod_freesync {int dummy; } ;
struct dc_stream_state {int signal; } ;
struct dc_info_packet {int dummy; } ;
typedef enum vrr_packet_type { ____Placeholder_vrr_packet_type } vrr_packet_type ;
typedef enum color_transfer_func { ____Placeholder_color_transfer_func } color_transfer_func ;





 int FUNC_0 (int ,struct mod_vrr_params const*,struct dc_info_packet*) ;
 int FUNC_1 (int ,struct mod_vrr_params const*,int,struct dc_info_packet*) ;

void FUNC_2(struct mod_freesync *VAR_0,
  const struct dc_stream_state *VAR_1,
  const struct mod_vrr_params *VAR_2,
  enum vrr_packet_type VAR_3,
  enum color_transfer_func VAR_4,
  struct dc_info_packet *VAR_5)
{





 if (!VAR_2->supported || (!VAR_2->send_info_frame))
  return;

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_1->signal, VAR_2, VAR_4, VAR_5);
  break;
 case 128:
 case 130:
 default:
  FUNC_0(VAR_1->signal, VAR_2, VAR_5);
 }
}
