
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pn_softc {int powernow_max_states; TYPE_1__* powernow_states; int * vid_to_volts; } ;
struct cf_setting {int freq; int lat; int dev; int volts; int power; } ;
typedef int device_t ;
struct TYPE_2__ {int freq; size_t vid; int power; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pn_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, struct cf_setting *VAR_3, int *VAR_4)
{
 struct pn_softc *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0)|| VAR_4 == ((void*)0))
  return (VAR_1);
 VAR_5 = FUNC_0(VAR_2);
 if (*VAR_4 < VAR_5->powernow_max_states)
  return (VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_5->powernow_max_states; ++VAR_6) {
  VAR_3[VAR_6].freq = VAR_5->powernow_states[VAR_6].freq / 1000;
  VAR_3[VAR_6].power = VAR_5->powernow_states[VAR_6].power;
  VAR_3[VAR_6].lat = 200;
  VAR_3[VAR_6].volts = VAR_5->vid_to_volts[VAR_5->powernow_states[VAR_6].vid];
  VAR_3[VAR_6].dev = VAR_2;
 }
 *VAR_4 = VAR_5->powernow_max_states;

 return (0);
}
