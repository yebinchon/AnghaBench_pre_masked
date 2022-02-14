
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_vrr_params {scalar_t__ state; int min_refresh_in_uhz; int max_refresh_in_uhz; } ;
struct dc_info_packet {int* sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(const struct mod_vrr_params *VAR_4,
  struct dc_info_packet *VAR_5)
{

 VAR_5->sb[1] = 0x1A;


 VAR_5->sb[2] = 0x00;


 VAR_5->sb[3] = 0x00;
 if (VAR_4->state != VAR_3)
  VAR_5->sb[6] |= 0x01;


 if (VAR_4->state != VAR_2 &&
   VAR_4->state != VAR_3)
  VAR_5->sb[6] |= 0x02;


 if (VAR_4->state == VAR_1 ||
   VAR_4->state == VAR_0)
  VAR_5->sb[6] |= 0x04;


 VAR_5->sb[7] = (unsigned char)(VAR_4->min_refresh_in_uhz / 1000000);




 VAR_5->sb[8] = (unsigned char)(VAR_4->max_refresh_in_uhz / 1000000);



 VAR_5->sb[9] = 0;
 VAR_5->sb[10] = 0;
}
