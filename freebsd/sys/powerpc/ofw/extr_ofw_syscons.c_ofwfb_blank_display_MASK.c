
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct ofwfb_softc {int (* sc_blank ) (int *,int) ;} ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, int VAR_1)
{
 struct ofwfb_softc *VAR_2;

 VAR_2 = (struct ofwfb_softc *)VAR_0;

 return ((*VAR_2->sc_blank)(VAR_0, VAR_1));
}
