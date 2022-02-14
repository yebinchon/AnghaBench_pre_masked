
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct TYPE_4__ {scalar_t__ link_rate; } ;
struct TYPE_3__ {int pix_clk_100hz; } ;
struct encoder_unblank_param {TYPE_2__ link_settings; TYPE_1__ timing; } ;
struct dce110_stream_encoder {int dummy; } ;


 struct dce110_stream_encoder* FUNC_0 (struct stream_encoder*) ;
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
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(
 struct stream_encoder *VAR_12,
 const struct encoder_unblank_param *VAR_13)
{
 struct dce110_stream_encoder *VAR_14 = FUNC_0(VAR_12);

 if (VAR_13->link_settings.link_rate != VAR_11) {
  uint32_t VAR_15 = 0x8000;
  uint32_t VAR_16;





  uint64_t VAR_17 = VAR_15;

  VAR_17 *= VAR_13->timing.pix_clk_100hz / 10;
  VAR_17 = FUNC_2(VAR_17,
   VAR_13->link_settings.link_rate
    * VAR_10);

  VAR_16 = (uint32_t) VAR_17;



  FUNC_1(VAR_9, VAR_5, 0);





  FUNC_1(VAR_6, VAR_6, VAR_15);

  FUNC_1(VAR_4, VAR_4, VAR_16);

  FUNC_1(VAR_9, VAR_5, 1);
 }



 FUNC_1(VAR_0, VAR_1, 1);



 FUNC_1(VAR_2, VAR_3, 0);




 FUNC_3(100);
 FUNC_1(VAR_7, VAR_8, 1);
}
