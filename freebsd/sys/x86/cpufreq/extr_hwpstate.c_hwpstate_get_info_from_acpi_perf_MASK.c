
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwpstate_softc {int cfnum; struct hwpstate_setting* hwpstate_settings; } ;
struct hwpstate_setting {int pstate_id; int lat; int power; int volts; int freq; } ;
struct cf_setting {int* spec; int lat; int power; int volts; int freq; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct cf_setting*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hwpstate_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct cf_setting*,int ) ;
 struct cf_setting* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, device_t VAR_6)
{
 struct hwpstate_softc *VAR_7;
 struct cf_setting *VAR_8;
 struct hwpstate_setting *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_4(VAR_2 * sizeof(*VAR_8), VAR_4, VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_5, "nomem\n");
  return (VAR_0);
 }




 VAR_10 = VAR_2;
 VAR_11 = FUNC_0(VAR_6, VAR_8, &VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_5, "error: CPUFREQ_DRV_SETTINGS.\n");
  goto out;
 }
 VAR_7 = FUNC_2(VAR_5);
 VAR_7->cfnum = VAR_10;
 VAR_9 = VAR_7->hwpstate_settings;
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (VAR_12 == VAR_8[VAR_12].spec[0]) {
   VAR_9[VAR_12].pstate_id = VAR_12;
   VAR_9[VAR_12].freq = VAR_8[VAR_12].freq;
   VAR_9[VAR_12].volts = VAR_8[VAR_12].volts;
   VAR_9[VAR_12].power = VAR_8[VAR_12].power;
   VAR_9[VAR_12].lat = VAR_8[VAR_12].lat;
  } else {
   FUNC_1(VAR_5, "ACPI _PSS object mismatch.\n");
   VAR_11 = VAR_1;
   goto out;
  }
 }
out:
 if (VAR_8)
  FUNC_3(VAR_8, VAR_4);
 return (VAR_11);
}
