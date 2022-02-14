
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource_straps {void* dc_pinstraps_audio; void* hdmi_disable; void* audio_stream_number; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dc_context*,int ,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(
 struct dc_context *VAR_7,
 struct resource_straps *VAR_8)
{
 uint32_t VAR_9 = FUNC_0(VAR_7, VAR_5, 0);

 VAR_8->audio_stream_number = FUNC_1(VAR_9,
         VAR_1,
         VAR_0);
 VAR_8->hdmi_disable = FUNC_1(VAR_9,
         VAR_1,
         VAR_4);

 VAR_9 = FUNC_0(VAR_7, VAR_6, 0);
 VAR_8->dc_pinstraps_audio = FUNC_1(VAR_9,
        VAR_2,
        VAR_3);
}
