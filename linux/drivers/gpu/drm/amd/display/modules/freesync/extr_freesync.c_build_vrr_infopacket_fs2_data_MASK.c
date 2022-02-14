
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_info_packet {int valid; int* sb; } ;
typedef enum color_transfer_func { ____Placeholder_color_transfer_func } color_transfer_func ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(enum color_transfer_func VAR_2,
  struct dc_info_packet *VAR_3)
{
 if (VAR_2 != VAR_1) {
  VAR_3->valid = 1;

  VAR_3->sb[6] |= 0x08;

  if (VAR_2 == VAR_0) {
   VAR_3->sb[9] |= 0x04;
  }
 }
}
