
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct hwpstate_softc {size_t cfnum; struct hwpstate_setting* hwpstate_settings; } ;
struct hwpstate_setting {int lat; int power; int volts; int freq; } ;
struct cf_setting {int dev; int lat; int power; int volts; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hwpstate_softc* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct cf_setting *VAR_3)
{
 struct hwpstate_softc *VAR_4;
 struct hwpstate_setting VAR_5;
 uint64_t VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 >= VAR_4->cfnum)
  return (VAR_0);
 VAR_5 = VAR_4->hwpstate_settings[VAR_6];

 VAR_3->freq = VAR_5.freq;
 VAR_3->volts = VAR_5.volts;
 VAR_3->power = VAR_5.power;
 VAR_3->lat = VAR_5.lat;
 VAR_3->dev = VAR_2;
 return (0);
}
