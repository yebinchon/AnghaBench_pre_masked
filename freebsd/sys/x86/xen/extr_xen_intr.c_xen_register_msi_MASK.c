
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {int xi_pirq; int xi_edgetrigger; } ;
struct physdev_map_pirq {int index; int pirq; int bus; int devfn; int entry_nr; int type; int domid; } ;
typedef int msi_irq ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct physdev_map_pirq*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct physdev_map_pirq*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct xenisrc* FUNC_10 (int ,int) ;
 int VAR_5 ;

int
FUNC_11(device_t VAR_6, int VAR_7, int VAR_8)
{
 struct physdev_map_pirq VAR_9;
 struct xenisrc *VAR_10;
 int VAR_11;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.domid = VAR_0;
 VAR_9.type = VAR_8 == 1 ?
     VAR_2 : VAR_3;
 VAR_9.index = -1;
 VAR_9.pirq = -1;
 VAR_9.bus = FUNC_6(VAR_6) | (FUNC_7(VAR_6) << 16);
 VAR_9.devfn = (FUNC_9(VAR_6) << 3) | FUNC_8(VAR_6);
 VAR_9.entry_nr = VAR_8;

 VAR_11 = FUNC_0(VAR_4, &VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);
 if (VAR_8 != VAR_9.entry_nr) {
  FUNC_5("unable to setup all requested MSI vectors "
      "(expected %d got %d)", VAR_8, VAR_9.entry_nr);
 }

 FUNC_3(&VAR_5);
 for (int VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_10 = FUNC_10(VAR_1, VAR_7 + VAR_12);
  FUNC_1(VAR_10 != ((void*)0),
      ("xen: unable to allocate isrc for interrupt"));
  VAR_10->xi_pirq = VAR_9.pirq + VAR_12;

  VAR_10->xi_edgetrigger = 1;
 }
 FUNC_4(&VAR_5);

 return (0);
}
