
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_2__ {scalar_t__ fb_size; int fb_flags; scalar_t__ fb_pbase; } ;
struct ps3fb_softc {TYPE_1__ fb_info; int sc_fbcontext; int sc_reports_size; int sc_reports; int sc_driver_info; int sc_dma_control; int sc_fbhandle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int,int ,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 struct ps3fb_softc VAR_7 ;
 int FUNC_6 (scalar_t__,int) ;

void
FUNC_7(void)
{
 struct ps3fb_softc *VAR_8;
 vm_offset_t VAR_9, VAR_10;

 VAR_8 = &VAR_7;

 FUNC_0();
 FUNC_4(0);

 FUNC_2(0, VAR_2,
     0,0,0,0);
 FUNC_2(0, VAR_2,
     0,0,1,0);
 FUNC_2(0, VAR_3,
     0,VAR_4,0,0);
 FUNC_2(0, VAR_3,
     1,VAR_4,0,0);
 FUNC_3(FUNC_6(VAR_8->fb_info.fb_size, 1024*1024),
     0, 0, 0, 0, &VAR_8->sc_fbhandle, &VAR_10);
 FUNC_1(VAR_8->sc_fbhandle, 0, &VAR_8->sc_fbcontext,
     &VAR_8->sc_dma_control, &VAR_8->sc_driver_info, &VAR_8->sc_reports,
     &VAR_8->sc_reports_size);

 FUNC_2(VAR_8->sc_fbcontext,
     VAR_1, 0, 0, 0, 0);
 FUNC_2(VAR_8->sc_fbcontext,
     VAR_1, 1, 0, 0, 0);

 VAR_8->fb_info.fb_pbase = VAR_10;
 for (VAR_9 = 0; VAR_9 < VAR_8->fb_info.fb_size; VAR_9 += VAR_5)
  FUNC_5(0x10000000 + VAR_9, VAR_10 + VAR_9,
      VAR_6);
 VAR_8->fb_info.fb_flags &= ~VAR_0;
}
