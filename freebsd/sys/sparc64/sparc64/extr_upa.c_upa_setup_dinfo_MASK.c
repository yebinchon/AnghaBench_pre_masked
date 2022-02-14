
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct upa_softc {int sc_ign; } ;
struct upa_regs {int phys; int size; } ;
struct TYPE_2__ {int obd_name; } ;
struct upa_devinfo {int udi_rl; TYPE_1__ udi_obdinfo; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,void**) ;
 int FUNC_2 (struct upa_regs*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct upa_devinfo*,int ) ;
 struct upa_devinfo* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,int ,int,int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct upa_devinfo*) ;

__attribute__((used)) static struct upa_devinfo *
FUNC_10(device_t VAR_6, struct upa_softc *VAR_7, phandle_t VAR_8,
    uint32_t VAR_9)
{
 struct upa_devinfo *VAR_10;
 struct upa_regs *VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_0, VAR_1 | VAR_2);
 if (FUNC_6(&VAR_10->udi_obdinfo, VAR_8) != 0) {
  FUNC_4(VAR_10, VAR_0);
  return (((void*)0));
 }
 FUNC_8(&VAR_10->udi_rl);

 VAR_14 = FUNC_1(VAR_8, "reg", sizeof(*VAR_11), (void **)&VAR_11);
 if (VAR_14 == -1) {
  FUNC_3(VAR_6, "<%s>: incomplete\n",
      VAR_10->udi_obdinfo.obd_name);
  goto fail;
 }
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_7(&VAR_10->udi_rl, VAR_4, VAR_13, VAR_11[VAR_13].phys,
      VAR_11[VAR_13].phys + VAR_11[VAR_13].size - 1, VAR_11[VAR_13].size);
 FUNC_2(VAR_11);

 VAR_12 = FUNC_0(VAR_7->sc_ign, (VAR_5 + VAR_9));
 FUNC_7(&VAR_10->udi_rl, VAR_3, 0, VAR_12, VAR_12, 1);

 return (VAR_10);

 fail:
 FUNC_9(VAR_10);
 return (((void*)0));
}
