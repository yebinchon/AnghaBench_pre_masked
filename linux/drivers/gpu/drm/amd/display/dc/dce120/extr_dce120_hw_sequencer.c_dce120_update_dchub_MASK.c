
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dchub_init_data {int fb_mode; int zfb_phys_addr_base; int zfb_mc_base_addr; int zfb_size_in_byte; int dchub_initialzied; int dchub_info_valid; } ;
struct dce_hwseq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dce_hwseq *VAR_9,
 struct dchub_init_data *VAR_10)
{

 switch (VAR_10->fb_mode) {
 case 128:

  FUNC_1(VAR_6,
    VAR_8, 0,
    VAR_7, 0x0FFFF);

  FUNC_0(VAR_3,
    VAR_0, VAR_10->zfb_phys_addr_base >> 22);

  FUNC_0(VAR_4,
    VAR_1, VAR_10->zfb_mc_base_addr >> 22);

  FUNC_0(VAR_5,
    VAR_2, (VAR_10->zfb_mc_base_addr + VAR_10->zfb_size_in_byte - 1) >> 22);
  break;
 case 129:

  FUNC_0(VAR_3,
    VAR_0, VAR_10->zfb_phys_addr_base >> 22);

  FUNC_0(VAR_4,
    VAR_1, VAR_10->zfb_mc_base_addr >> 22);

  FUNC_0(VAR_5,
    VAR_2, (VAR_10->zfb_mc_base_addr + VAR_10->zfb_size_in_byte - 1) >> 22);
  break;
 case 130:

  FUNC_0(VAR_3,
    VAR_0, 0);

  FUNC_0(VAR_4,
    VAR_1, 0x03FFFF);

  FUNC_0(VAR_5,
    VAR_2, 0);
  break;
 default:
  break;
 }

 VAR_10->dchub_initialzied = 1;
 VAR_10->dchub_info_valid = 0;
}
