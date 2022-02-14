
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_straps {int dc_pinstraps_audio; int audio_stream_number; int hdmi_disable; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(
 struct dc_context *VAR_5,
 struct resource_straps *VAR_6)
{
 FUNC_1(VAR_1,
   VAR_4, &VAR_6->hdmi_disable,
   VAR_0, &VAR_6->audio_stream_number);

 FUNC_0(VAR_2, VAR_3, &VAR_6->dc_pinstraps_audio);
}
