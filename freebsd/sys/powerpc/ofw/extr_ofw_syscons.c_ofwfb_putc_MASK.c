
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int video_adapter_t ;
typedef int uint8_t ;
struct ofwfb_softc {int (* sc_putc ) (int *,int ,int ,int ) ;} ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, vm_offset_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 struct ofwfb_softc *VAR_4;

 VAR_4 = (struct ofwfb_softc *)VAR_0;

 return ((*VAR_4->sc_putc)(VAR_0, VAR_1, VAR_2, VAR_3));
}
