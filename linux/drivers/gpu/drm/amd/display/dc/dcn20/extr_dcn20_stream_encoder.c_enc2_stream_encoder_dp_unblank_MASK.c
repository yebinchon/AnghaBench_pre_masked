
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct TYPE_3__ {scalar_t__ link_rate; } ;
struct TYPE_4__ {int pix_clk_100hz; } ;
struct encoder_unblank_param {int opp_cnt; TYPE_1__ link_settings; TYPE_2__ timing; } ;
struct dcn10_stream_encoder {int dummy; } ;


 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;

void FUNC_6(
  struct stream_encoder *VAR_13,
  const struct encoder_unblank_param *VAR_14)
{
 struct dcn10_stream_encoder *VAR_15 = FUNC_0(VAR_13);

 if (VAR_14->link_settings.link_rate != VAR_12) {
  uint32_t VAR_16 = 0x8000;
  uint32_t VAR_17;
  uint32_t VAR_18 = 0;
  uint64_t VAR_19 = VAR_16;


  if (FUNC_4(&VAR_14->timing) || VAR_14->opp_cnt > 1) {

   VAR_18 = 1;
  }




  VAR_19 *= VAR_14->timing.pix_clk_100hz / 10;
  VAR_19 = FUNC_3(VAR_19,
   VAR_14->link_settings.link_rate
    * VAR_11);

  VAR_17 = (uint32_t) VAR_19;



  FUNC_1(VAR_10, VAR_5, 0);





  FUNC_1(VAR_6, VAR_6, VAR_16);

  FUNC_1(VAR_4, VAR_4, VAR_17);

  FUNC_2(VAR_10,
    VAR_5, 1,
    VAR_7, VAR_18);
 }



 FUNC_1(VAR_0, VAR_1, 1);



 FUNC_1(VAR_0, VAR_1, 0);



 FUNC_1(VAR_2, VAR_3, 0);




 FUNC_5(100);
 FUNC_1(VAR_8, VAR_9, 1);
}
