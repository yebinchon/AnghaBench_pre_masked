
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwpstate_softc {int cfnum; struct hwpstate_setting* hwpstate_settings; } ;
struct hwpstate_setting {int lat; int power; int volts; int freq; } ;
struct cf_setting {int dev; int lat; int power; int volts; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hwpstate_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, struct cf_setting *VAR_3, int *VAR_4)
{
 struct hwpstate_softc *VAR_5;
 struct hwpstate_setting VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_1);
 VAR_5 = FUNC_0(VAR_2);
 if (*VAR_4 < VAR_5->cfnum)
  return (VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_5->cfnum; VAR_7++, VAR_3++) {
  VAR_6 = VAR_5->hwpstate_settings[VAR_7];
  VAR_3->freq = VAR_6.freq;
  VAR_3->volts = VAR_6.volts;
  VAR_3->power = VAR_6.power;
  VAR_3->lat = VAR_6.lat;
  VAR_3->dev = VAR_2;
 }
 *VAR_4 = VAR_5->cfnum;

 return (0);
}
