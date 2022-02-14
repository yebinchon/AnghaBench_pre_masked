
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_encoder {int dummy; } ;
struct dce110_stream_encoder {TYPE_1__* se_mask; } ;
struct TYPE_2__ {scalar_t__ HDMI_DATA_SCRAMBLE_EN; } ;


 struct dce110_stream_encoder* FUNC_0 (struct stream_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct stream_encoder *VAR_6)
{
 struct dce110_stream_encoder *VAR_7 = FUNC_0(VAR_6);
 if (VAR_7->se_mask->HDMI_DATA_SCRAMBLE_EN)
  FUNC_2(VAR_1,
   VAR_5, 1,
   VAR_4, 1,
   VAR_3, 0,
   VAR_2, 0,
   VAR_0, 0);
 else
  FUNC_1(VAR_1,
   VAR_5, 1,
   VAR_4, 1,
   VAR_3, 0);
}
