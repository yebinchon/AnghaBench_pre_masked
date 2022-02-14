
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ofwfb_softc {int (* sc_putm ) (int *,int,int,int *,int ,int,int) ;} ;


 int FUNC_0 (int *,int,int,int *,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, int VAR_1, int VAR_2, uint8_t *VAR_3,
    uint32_t VAR_4, int VAR_5, int VAR_6)
{
 struct ofwfb_softc *VAR_7;

 VAR_7 = (struct ofwfb_softc *)VAR_0;

 return ((*VAR_7->sc_putm)(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6));
}
