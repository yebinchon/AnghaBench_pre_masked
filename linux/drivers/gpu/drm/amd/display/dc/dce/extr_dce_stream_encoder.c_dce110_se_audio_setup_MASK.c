
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct dce110_stream_encoder {int dummy; } ;
struct TYPE_4__ {int ALLSPEAKERS; } ;
struct TYPE_5__ {int speaker_flags; TYPE_1__ info; } ;
struct audio_info {TYPE_2__ flags; } ;
struct TYPE_6__ {int all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct audio_info*) ;
 struct dce110_stream_encoder* FUNC_1 (struct stream_encoder*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_3__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(
 struct stream_encoder *VAR_4,
 unsigned int VAR_5,
 struct audio_info *VAR_6)
{
 struct dce110_stream_encoder *VAR_7 = FUNC_1(VAR_4);

 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;

 FUNC_0(VAR_6);
 if (VAR_6 == ((void*)0))

  return;

 VAR_8 = VAR_6->flags.info.ALLSPEAKERS;
 VAR_9 = FUNC_4(VAR_6->flags.speaker_flags).all;


 FUNC_2(VAR_2, 0, VAR_3, VAR_5);


 FUNC_3(VAR_1, VAR_0, VAR_9);
}
