
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct pn_softc {int errata; int pn_type; int powernow_max_states; int * vid_to_volts; TYPE_1__* powernow_states; } ;
struct cf_setting {int freq; int lat; int * dev; int volts; int power; } ;
typedef int * device_t ;
struct TYPE_2__ {scalar_t__ fid; scalar_t__ vid; int freq; int power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

 struct pn_softc* FUNC_4 (int *) ;
 int FUNC_5 (struct cf_setting*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, struct cf_setting *VAR_6)
{
 struct pn_softc *VAR_7;
 u_int VAR_8 = 0, VAR_9 = 0;
 int VAR_10;
 uint64_t VAR_11;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7->errata & VAR_4)
  return (VAR_2);

 VAR_11 = FUNC_6(VAR_3);

 switch (VAR_7->pn_type) {
 case 129:
  VAR_8 = FUNC_0(VAR_11);
  VAR_9 = FUNC_1(VAR_11);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_11);
  VAR_9 = FUNC_3(VAR_11);
  break;
 }
 for (VAR_10 = 0; VAR_10 < VAR_7->powernow_max_states; ++VAR_10)
  if (VAR_8 == VAR_7->powernow_states[VAR_10].fid &&
      VAR_9 == VAR_7->powernow_states[VAR_10].vid)
   break;

 if (VAR_10 < VAR_7->powernow_max_states) {
  VAR_6->freq = VAR_7->powernow_states[VAR_10].freq / 1000;
  VAR_6->power = VAR_7->powernow_states[VAR_10].power;
  VAR_6->lat = 200;
  VAR_6->volts = VAR_7->vid_to_volts[VAR_9];
  VAR_6->dev = VAR_5;
 } else {
  FUNC_5(VAR_6, VAR_0, sizeof(*VAR_6));
  VAR_6->dev = ((void*)0);
 }

 return (0);
}
