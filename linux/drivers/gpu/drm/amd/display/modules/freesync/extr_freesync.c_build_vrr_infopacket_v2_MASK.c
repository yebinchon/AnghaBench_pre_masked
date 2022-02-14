
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_vrr_params {int dummy; } ;
struct dc_info_packet {int valid; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum color_transfer_func { ____Placeholder_color_transfer_func } color_transfer_func ;


 int FUNC_0 (unsigned int*,struct dc_info_packet*) ;
 int FUNC_1 (struct mod_vrr_params const*,struct dc_info_packet*) ;
 int FUNC_2 (int,struct dc_info_packet*) ;
 int FUNC_3 (int,struct dc_info_packet*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(enum signal_type VAR_0,
  const struct mod_vrr_params *VAR_1,
  enum color_transfer_func VAR_2,
  struct dc_info_packet *VAR_3)
{
 unsigned int VAR_4 = 0;

 FUNC_3(VAR_0, VAR_3, &VAR_4);
 FUNC_1(VAR_1, VAR_3);

 FUNC_2(VAR_2, VAR_3);

 FUNC_0(&VAR_4, VAR_3);

 VAR_3->valid = 1;
}
