
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ofw_compat_data {scalar_t__ ocd_data; } ;
struct mpc85xx_jog_softc {int low; int min_freq; int cpu; int high; int dev; } ;
struct mpc85xx_constraints {int min_mult; int threshold; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mpc85xx_jog_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 struct ofw_compat_data* FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct ofw_compat_data *VAR_3;
 struct mpc85xx_jog_softc *VAR_4;
 struct mpc85xx_constraints *VAR_5;
 phandle_t VAR_6;
 uint32_t VAR_7;

 VAR_4 = FUNC_5(VAR_2);
 VAR_4->dev = VAR_2;

 VAR_3 = FUNC_7();
 VAR_5 = (struct mpc85xx_constraints *)VAR_3->ocd_data;
 VAR_6 = FUNC_8(FUNC_4(VAR_2));

 if (VAR_6 <= 0) {
  FUNC_6(VAR_2,"No CPU device tree node!\n");
  return (VAR_0);
 }

 FUNC_0(VAR_6, "reg", &VAR_4->cpu, sizeof(VAR_4->cpu));

 VAR_7 = FUNC_2(VAR_1);





 VAR_4->high = FUNC_1(VAR_7, VAR_4->cpu);
 VAR_4->min_freq = VAR_5->threshold;
 VAR_4->low = VAR_5->min_mult;

 FUNC_3(VAR_2);
 return (0);
}
