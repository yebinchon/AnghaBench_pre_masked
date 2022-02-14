
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn10_hubbub {int dummy; } ;
struct dchub_init_data {int fb_mode; int zfb_phys_addr_base; int zfb_mc_base_addr; int zfb_size_in_byte; int dchub_initialzied; int dchub_info_valid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dcn10_hubbub* FUNC_3 (struct hubbub*) ;

void FUNC_4(
 struct hubbub *VAR_10,
 struct dchub_init_data *VAR_11)
{
 struct dcn10_hubbub *VAR_12 = FUNC_3(VAR_10);

 if (FUNC_1(VAR_4) == 0) {
  FUNC_0(0);

  return;
 }

 switch (VAR_11->fb_mode) {
 case 128:

  FUNC_2(VAR_4,
    VAR_9, 0);

  FUNC_2(VAR_3,
    VAR_8, 0x0FFFF);

  FUNC_2(VAR_0,
    VAR_5, VAR_11->zfb_phys_addr_base >> 22);

  FUNC_2(VAR_1,
    VAR_6, VAR_11->zfb_mc_base_addr >> 22);

  FUNC_2(VAR_2,
    VAR_7, (VAR_11->zfb_mc_base_addr +
      VAR_11->zfb_size_in_byte - 1) >> 22);
  break;
 case 129:


  FUNC_2(VAR_0,
    VAR_5, VAR_11->zfb_phys_addr_base >> 22);

  FUNC_2(VAR_1,
    VAR_6, VAR_11->zfb_mc_base_addr >> 22);

  FUNC_2(VAR_2,
    VAR_7, (VAR_11->zfb_mc_base_addr +
      VAR_11->zfb_size_in_byte - 1) >> 22);
  break;
 case 130:

  FUNC_2(VAR_0,
    VAR_5, 0);

  FUNC_2(VAR_1,
    VAR_6, 0X03FFFF);

  FUNC_2(VAR_2,
    VAR_7, 0);
  break;
 default:
  break;
 }

 VAR_11->dchub_initialzied = 1;
 VAR_11->dchub_info_valid = 0;
}
