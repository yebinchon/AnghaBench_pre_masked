
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ ops_pcib_sc; } ;
struct apb_softc {TYPE_2__ sc_bsc; int sc_memmap; int sc_iomap; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;


 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 struct resource* FUNC_2 (int ,int ,int,int*,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct apb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int ,...) ;

__attribute__((used)) static struct resource *
FUNC_6(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct apb_softc *VAR_11;

 VAR_11 = FUNC_4(VAR_3);






 if (FUNC_0(VAR_7, VAR_8)) {
  FUNC_5(VAR_3, "can't decode default resource id %d for "
      "%s, bypassing\n", *VAR_6, FUNC_3(VAR_4));
  goto passup;
 }






 switch (VAR_5) {
 case 129:
  if (!FUNC_1(VAR_11->sc_iomap, VAR_0, VAR_7, VAR_8)) {
   FUNC_5(VAR_3, "device %s requested unsupported "
       "I/O range 0x%jx-0x%jx\n",
       FUNC_3(VAR_4), VAR_7, VAR_8);
   return (((void*)0));
  }
  if (VAR_2)
   FUNC_5(VAR_11->sc_bsc.ops_pcib_sc.dev, "device "
       "%s requested decoded I/O range 0x%jx-0x%jx\n",
       FUNC_3(VAR_4), VAR_7, VAR_8);
  break;
 case 128:
  if (!FUNC_1(VAR_11->sc_memmap, VAR_1, VAR_7,
      VAR_8)) {
   FUNC_5(VAR_3, "device %s requested unsupported "
       "memory range 0x%jx-0x%jx\n",
       FUNC_3(VAR_4), VAR_7, VAR_8);
   return (((void*)0));
  }
  if (VAR_2)
   FUNC_5(VAR_11->sc_bsc.ops_pcib_sc.dev, "device "
       "%s requested decoded memory range 0x%jx-0x%jx\n",
       FUNC_3(VAR_4), VAR_7, VAR_8);
  break;
 }

 passup:



 return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10));
}
