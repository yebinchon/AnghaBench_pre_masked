
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_vrr_params {int dummy; } ;
struct dc_info_packet {int valid; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int FUNC_0 (unsigned int*,struct dc_info_packet*) ;
 int FUNC_1 (struct mod_vrr_params const*,struct dc_info_packet*) ;
 int FUNC_2 (int,struct dc_info_packet*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(enum signal_type VAR_0,
  const struct mod_vrr_params *VAR_1,
  struct dc_info_packet *VAR_2)
{

 unsigned int VAR_3 = 0;

 FUNC_2(VAR_0, VAR_2, &VAR_3);
 FUNC_1(VAR_1, VAR_2);
 FUNC_0(&VAR_3, VAR_2);

 VAR_2->valid = 1;
}
