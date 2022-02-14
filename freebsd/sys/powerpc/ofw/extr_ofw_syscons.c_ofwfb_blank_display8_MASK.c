
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint32_t ;
struct ofwfb_softc {int sc_stride; int sc_height; scalar_t__ sc_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1, int VAR_2)
{
 struct ofwfb_softc *VAR_3;
 int VAR_4;
 uint32_t *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_3 = (struct ofwfb_softc *)VAR_1;
 VAR_5 = (uint32_t *) VAR_3->sc_addr;
 VAR_7 = (VAR_3->sc_stride/4) * VAR_3->sc_height;


 VAR_6 = (FUNC_0(VAR_0) << 24) |
     (FUNC_0(VAR_0) << 16) |
     (FUNC_0(VAR_0) << 8) |
     (FUNC_0(VAR_0));

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
  *(VAR_5 + VAR_4) = VAR_6;

 return (0);
}
