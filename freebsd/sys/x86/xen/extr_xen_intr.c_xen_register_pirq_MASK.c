
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {int xi_pirq; int xi_activehi; int xi_edgetrigger; } ;
struct physdev_map_pirq {int index; int pirq; int type; int domid; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct physdev_map_pirq*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 struct xenisrc* FUNC_5 (int ,int) ;
 int VAR_8 ;

int
FUNC_6(int VAR_9, enum intr_trigger VAR_10, enum intr_polarity VAR_11)
{
 struct physdev_map_pirq VAR_12;
 struct xenisrc *VAR_13;
 int VAR_14;

 if (VAR_9 == 0)
  return (VAR_1);

 if (VAR_7)
  FUNC_4("xen: register IRQ#%d\n", VAR_9);

 VAR_12.domid = VAR_0;
 VAR_12.type = VAR_5;
 VAR_12.index = VAR_9;
 VAR_12.pirq = VAR_9;

 VAR_14 = FUNC_0(VAR_6, &VAR_12);
 if (VAR_14) {
  FUNC_4("xen: unable to map IRQ#%d\n", VAR_9);
  return (VAR_14);
 }

 FUNC_2(&VAR_8);
 VAR_13 = FUNC_5(VAR_2, VAR_9);
 FUNC_3(&VAR_8);
 FUNC_1((VAR_13 != ((void*)0)), ("xen: unable to allocate isrc for interrupt"));
 VAR_13->xi_pirq = VAR_9;
 VAR_13->xi_activehi = VAR_11 == VAR_3 ? 1 : 0;
 VAR_13->xi_edgetrigger = VAR_10 == VAR_4 ? 1 : 0;

 return (0);
}
