
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct est_softc {int acpi_settings; } ;
struct cf_setting {scalar_t__ freq; int power; int * spec; int id16; int volts; } ;
typedef struct cf_setting freq_info ;
typedef int * device_t ;


 int FUNC_0 (int *,struct cf_setting*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 struct est_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct cf_setting*,int ) ;
 struct cf_setting* FUNC_9 (int,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, freq_info **VAR_10, size_t *VAR_11)
{
 struct est_softc *VAR_12;
 struct cf_setting *VAR_13;
 freq_info *VAR_14;
 device_t VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 uint16_t VAR_20;

 VAR_15 = FUNC_1(FUNC_2(VAR_9), "acpi_perf", -1);
 if (VAR_15 == ((void*)0) || !FUNC_4(VAR_15))
  return (VAR_1);


 VAR_12 = FUNC_3(VAR_9);
 VAR_14 = ((void*)0);
 VAR_13 = FUNC_9(VAR_2 * sizeof(*VAR_13), VAR_5, VAR_4);
 if (VAR_13 == ((void*)0))
  return (VAR_0);
 VAR_16 = VAR_2;
 VAR_17 = FUNC_0(VAR_15, VAR_13, &VAR_16);
 if (VAR_17)
  goto out;


 VAR_14 = FUNC_9(VAR_16 * sizeof(*VAR_14), VAR_3, VAR_4);
 if (VAR_14 == ((void*)0)) {
  VAR_17 = VAR_0;
  goto out;
 }
 FUNC_6(&VAR_20);
 for (VAR_18 = 0, VAR_19 = 0; VAR_18 < VAR_16; VAR_18++) {



  if (VAR_13[VAR_18].freq > 0) {
   VAR_17 = FUNC_7(VAR_9, VAR_13[VAR_18].spec[0], VAR_8);
   if (VAR_17 != 0) {
    if (VAR_7)
     FUNC_5(VAR_9, "Invalid freq %u, "
         "ignored.\n", VAR_13[VAR_18].freq);
    continue;
   }
   VAR_14[VAR_19].freq = VAR_13[VAR_18].freq;
   VAR_14[VAR_19].volts = VAR_13[VAR_18].volts;
   VAR_14[VAR_19].id16 = VAR_13[VAR_18].spec[0];
   VAR_14[VAR_19].power = VAR_13[VAR_18].power;
   ++VAR_19;
  }
 }

 FUNC_7(VAR_9, VAR_20, 0);

 VAR_12->acpi_settings = VAR_6;
 *VAR_10 = VAR_14;
 *VAR_11 = VAR_19;
 VAR_17 = 0;

out:
 if (VAR_13)
  FUNC_8(VAR_13, VAR_5);
 if (VAR_17 && VAR_14)
  FUNC_8(VAR_14, VAR_3);
 return (VAR_17);
}
