
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smist_softc {TYPE_1__* sets; void* dev; } ;
typedef void* device_t ;
struct TYPE_2__ {int lat; void* dev; void* power; void* volts; void* freq; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 struct smist_softc* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct smist_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->dev = VAR_2;


 if (FUNC_2(VAR_2) != 0)
  return (VAR_1);


 VAR_3->sets[0].freq = VAR_0;
 VAR_3->sets[0].volts = VAR_0;
 VAR_3->sets[0].power = VAR_0;
 VAR_3->sets[0].lat = 1000;
 VAR_3->sets[0].dev = VAR_2;
 VAR_3->sets[1] = VAR_3->sets[0];

 FUNC_0(VAR_2);

 return (0);
}
