
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct hda_stream_desc {size_t stream; size_t dir; scalar_t__ run; } ;
struct hda_softc {struct hda_stream_desc* streams; } ;


 int FUNC_0 (char*,size_t,size_t,size_t) ;
 int FUNC_1 (struct hda_softc*,int ,size_t,size_t) ;

__attribute__((used)) static int
FUNC_2(struct hda_softc *VAR_0, uint8_t VAR_1)
{
 struct hda_stream_desc *VAR_2 = &VAR_0->streams[VAR_1];
 uint8_t VAR_3 = VAR_2->stream;
 uint8_t VAR_4 = VAR_2->dir;

 FUNC_0("stream: 0x%x, strm: 0x%x, dir: 0x%x\n", VAR_1, VAR_3, VAR_4);

 VAR_2->run = 0;

 FUNC_1(VAR_0, 0, VAR_3, VAR_4);

 return (0);
}
