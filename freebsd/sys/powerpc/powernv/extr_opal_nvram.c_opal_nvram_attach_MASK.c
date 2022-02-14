
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct opal_nvram_softc {TYPE_1__* sc_cdev; int * sc_buf; int sc_buf_phys; int sc_size; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {struct opal_nvram_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 struct opal_nvram_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int *,int ,int ,int ,int,char*) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct opal_nvram_softc *VAR_8;
 phandle_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_7);
 VAR_8 = FUNC_2(VAR_7);

 VAR_8->sc_dev = VAR_7;

 VAR_10 = FUNC_0(VAR_9, "#bytes", &VAR_8->sc_size,
     sizeof(VAR_8->sc_size));

 if (VAR_10 < 0)
  return (VAR_1);

 VAR_8->sc_buf = FUNC_1(VAR_4, VAR_2, VAR_3,
     0, VAR_0, VAR_5, 0);
 if (VAR_8->sc_buf == ((void*)0)) {
  FUNC_3(VAR_7, "No memory for buffer.\n");
  return (VAR_1);
 }
 VAR_8->sc_buf_phys = FUNC_6((vm_offset_t)VAR_8->sc_buf);
 VAR_8->sc_cdev = FUNC_4(&VAR_6, 0, 0, 0, 0600,
     "nvram");
 VAR_8->sc_cdev->si_drv1 = VAR_8;

 return (0);
}
