
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct hda_codec_stream {int dummy; } ;
struct hda_codec_softc {struct hda_codec_stream* streams; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct hda_codec_stream*,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct hda_codec_softc *VAR_1, uint16_t VAR_2,
    uint16_t VAR_3)
{
 struct hda_codec_stream *VAR_4 = &VAR_1->streams[VAR_0];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);

 return (VAR_5);
}
