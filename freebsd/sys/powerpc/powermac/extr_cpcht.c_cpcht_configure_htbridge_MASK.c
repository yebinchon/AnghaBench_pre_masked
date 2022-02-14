
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct ofw_pci_register {int phys_hi; } ;
struct cpcht_softc {int sc_populated_slots; int sc_data; TYPE_1__* htirq_map; } ;
typedef int phandle_t ;
typedef int pcir ;
typedef int pcell_t ;
typedef int device_t ;
struct TYPE_2__ {int ht_source; int ht_base; int eoi_data; int apple_eoi; int irq_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,int,int,int,int,int) ;
 int FUNC_5 (int ,int,int,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct cpcht_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_12, phandle_t VAR_13)
{
 struct cpcht_softc *VAR_14;
 struct ofw_pci_register VAR_15;
 int VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;
 u_int VAR_23, VAR_24, VAR_25;

 VAR_14 = FUNC_6(VAR_12);
 if (FUNC_3(VAR_13, "reg", (pcell_t *)&VAR_15, sizeof(VAR_15)) == -1)
  return;

 VAR_23 = FUNC_0(VAR_15.phys_hi);
 VAR_25 = FUNC_1(VAR_15.phys_hi);
 VAR_24 = FUNC_2(VAR_15.phys_hi);





 VAR_14->sc_populated_slots |= (1 << VAR_25);
 if (!(FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24, VAR_10, 2)
     & VAR_6))
  return;

 VAR_17 = FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24, VAR_7, 1);
 while (VAR_17 != 0) {
  VAR_16 = VAR_17;
  VAR_17 = FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24,
      VAR_16 + VAR_3, 1);


  if (FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24,
      VAR_16 + VAR_2, 1) != VAR_11)
   continue;

  VAR_19 = FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24, VAR_16 + VAR_9, 2);
  if ((VAR_19 & VAR_5) != VAR_4)
   continue;


  FUNC_5(VAR_12, VAR_23, VAR_25, VAR_24, VAR_16 + VAR_9, 0x1, 1);
  VAR_21 = FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24, VAR_16 + 4, 4);
  VAR_21 = ((VAR_21 >> 16) & 0xff) + 1;

  FUNC_7(VAR_12, "%d HT IRQs on device %d.%d\n", VAR_21, VAR_25, VAR_24);

  for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
   FUNC_5(VAR_12, VAR_23, VAR_25, VAR_24,
        VAR_16 + VAR_9, 0x10 + (VAR_20 << 1), 1);
   VAR_22 = FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24, VAR_16 + 4, 4);




   FUNC_5(VAR_12, VAR_23, VAR_25, VAR_24, VAR_16 + 4,
       VAR_22 | VAR_0, 4);
   VAR_22 = (VAR_22 >> 16) & 0xff;

   VAR_14->htirq_map[VAR_22].irq_type = VAR_1;
   VAR_14->htirq_map[VAR_22].ht_source = VAR_20;
   VAR_14->htirq_map[VAR_22].ht_base = VAR_14->sc_data +
       (((((VAR_25 & 0x1f) << 3) | (VAR_24 & 0x07)) << 8) | (VAR_16));

   FUNC_5(VAR_12, VAR_23, VAR_25, VAR_24,
        VAR_16 + VAR_9, 0x11 + (VAR_20 << 1), 1);
   VAR_14->htirq_map[VAR_22].eoi_data =
       FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24, VAR_16 + 4, 4) |
       0x80000000;






   VAR_18 = FUNC_4(VAR_12, VAR_23, VAR_25, VAR_24,
       VAR_8, 4);
   if ((VAR_18 & 0xffff) == 0x106b)
    VAR_14->htirq_map[VAR_22].apple_eoi =
     (VAR_14->htirq_map[VAR_22].ht_base - VAR_16) + 0x60;
  }
 }
}
