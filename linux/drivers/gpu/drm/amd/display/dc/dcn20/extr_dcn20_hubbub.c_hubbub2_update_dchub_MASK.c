
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn20_hubbub {int dummy; } ;
struct dchub_init_data {int fb_mode; int zfb_phys_addr_base; int zfb_mc_base_addr; int zfb_size_in_byte; int dchub_initialzied; int dchub_info_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct dcn20_hubbub* FUNC_2 (struct hubbub*) ;

void FUNC_3(struct hubbub *VAR_10,
  struct dchub_init_data *VAR_11)
{
 struct dcn20_hubbub *VAR_12 = FUNC_2(VAR_10);

 if (FUNC_0(VAR_7) == 0)
  return;

 switch (VAR_11->fb_mode) {
 case 128:

  FUNC_1(VAR_7,
    VAR_9, 0);

  FUNC_1(VAR_6,
    VAR_8, 0xFFFFFF);


  FUNC_1(VAR_3,
    VAR_0, VAR_11->zfb_phys_addr_base >> 24);



  FUNC_1(VAR_4,
    VAR_1, VAR_11->zfb_mc_base_addr >> 24);



  FUNC_1(VAR_5,
    VAR_2, (VAR_11->zfb_mc_base_addr +
      VAR_11->zfb_size_in_byte - 1) >> 24);
  break;
 case 129:



  FUNC_1(VAR_3,
    VAR_0, VAR_11->zfb_phys_addr_base >> 24);



  FUNC_1(VAR_4,
    VAR_1, VAR_11->zfb_mc_base_addr >> 24);



  FUNC_1(VAR_5,
    VAR_2, (VAR_11->zfb_mc_base_addr +
      VAR_11->zfb_size_in_byte - 1) >> 24);
  break;
 case 130:



  FUNC_1(VAR_3,
    VAR_0, 0);



  FUNC_1(VAR_4,
    VAR_1, 0xFFFFFF);



  FUNC_1(VAR_5,
    VAR_2, 0);
  break;
 default:
  break;
 }

 VAR_11->dchub_initialzied = 1;
 VAR_11->dchub_info_valid = 0;
}
