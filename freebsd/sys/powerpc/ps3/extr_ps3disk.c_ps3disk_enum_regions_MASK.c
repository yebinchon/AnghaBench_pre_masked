
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ps3disk_softc {int sc_nregs; TYPE_1__* sc_reg; int sc_dev; } ;
struct ps3disk_region {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {int r_id; int r_start; int r_size; int r_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int,int,int,int,int*,int*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ps3disk_softc *VAR_6)
{
 device_t VAR_7 = VAR_6->sc_dev;
 uint64_t VAR_8 = FUNC_5(VAR_7);
 uint64_t VAR_9 = FUNC_6(VAR_7);
 uint64_t VAR_10;
 int VAR_11, VAR_12;



 VAR_12 = FUNC_2(VAR_5,
     (FUNC_3("bus") >> 32) | VAR_8,
     FUNC_3("dev") | VAR_9,
     FUNC_3("n_regs"), 0, &VAR_6->sc_nregs, &VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_7, "Could not get number of regions (0x%08x)\n",
      VAR_12);
  VAR_12 = VAR_1;
  goto fail;
 }

 if (!VAR_6->sc_nregs)
  return 0;

 VAR_6->sc_reg = FUNC_4(VAR_6->sc_nregs * sizeof(struct ps3disk_region),
     VAR_2, VAR_4 | VAR_3);
 if (!VAR_6->sc_reg) {
  VAR_12 = VAR_0;
  goto fail;
 }



 for (VAR_11 = 0; VAR_11 < VAR_6->sc_nregs; VAR_11++) {
  VAR_12 = FUNC_2(VAR_5,
      (FUNC_3("bus") >> 32) | VAR_8,
      FUNC_3("dev") | VAR_9,
      FUNC_3("region") | VAR_11,
      FUNC_3("id"), &VAR_6->sc_reg[VAR_11].r_id, &VAR_10);
  if (VAR_12) {
   FUNC_0(VAR_7, "Could not get region id (0x%08x)\n",
       VAR_12);
   VAR_12 = VAR_1;
   goto fail;
  }

  VAR_12 = FUNC_2(VAR_5,
      (FUNC_3("bus") >> 32) | VAR_8,
      FUNC_3("dev") | VAR_9,
      FUNC_3("region") | VAR_11,
      FUNC_3("start"), &VAR_6->sc_reg[VAR_11].r_start,
      &VAR_10);
  if (VAR_12) {
   FUNC_0(VAR_7, "Could not get region start "
       "(0x%08x)\n", VAR_12);
   VAR_12 = VAR_1;
   goto fail;
  }

  VAR_12 = FUNC_2(VAR_5,
      (FUNC_3("bus") >> 32) | VAR_8,
      FUNC_3("dev") | VAR_9,
      FUNC_3("region") | VAR_11,
      FUNC_3("size"), &VAR_6->sc_reg[VAR_11].r_size,
      &VAR_10);
  if (VAR_12) {
   FUNC_0(VAR_7, "Could not get region size "
       "(0x%08x)\n", VAR_12);
   VAR_12 = VAR_1;
   goto fail;
  }

  if (VAR_11 == 0)
   VAR_6->sc_reg[VAR_11].r_flags = 0x2;
  else
   VAR_6->sc_reg[VAR_11].r_flags = 0;
 }

 return (0);

fail:

 VAR_6->sc_nregs = 0;
 if (VAR_6->sc_reg)
  FUNC_1(VAR_6->sc_reg, VAR_2);

 return (VAR_12);
}
