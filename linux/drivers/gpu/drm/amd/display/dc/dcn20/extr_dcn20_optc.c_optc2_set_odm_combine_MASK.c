
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int inst; } ;
struct optc {int opp_count; } ;
struct dc_crtc_timing {int h_addressable; int h_border_left; int h_border_right; scalar_t__ pixel_encoding; } ;


 int FUNC_0 (int) ;
 struct optc* FUNC_1 (struct timing_generator*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int ,int,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

void FUNC_6(struct timing_generator *VAR_14, int *VAR_15, int VAR_16,
  struct dc_crtc_timing *VAR_17)
{
 struct optc *VAR_18 = FUNC_1(VAR_14);

 int VAR_19 = (VAR_17->h_addressable + VAR_17->h_border_left + VAR_17->h_border_right)
   / VAR_16;
 int VAR_20 = VAR_19 <= 2560 ? 0x3 : 0xf;
 uint32_t VAR_21 = 0;
 if (FUNC_2(VAR_3))
  FUNC_3(VAR_3, 0,
   VAR_4, VAR_20 << (VAR_14->inst * 4));

 if (VAR_17->pixel_encoding == VAR_13)
  VAR_21 = 1;
 else if (VAR_17->pixel_encoding == VAR_12)
  VAR_21 = 2;

 FUNC_5(VAR_1, VAR_0, VAR_21);

 FUNC_0(VAR_16 == 2);
 FUNC_4(VAR_2, 0,
   VAR_5, 1,
   VAR_6, VAR_15[0],
   VAR_7, VAR_15[1]);

 FUNC_5(VAR_9,
   VAR_8, VAR_19);

 FUNC_3(VAR_10, 0, VAR_11, 1);
 VAR_18->opp_count = VAR_16;
}
