
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct est_softc {int flist_len; TYPE_1__* freq_list; } ;
struct cf_setting {int dev; int lat; int power; int volts; int freq; } ;
struct TYPE_2__ {int power; int volts; int freq; } ;
typedef TYPE_1__ freq_info ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct est_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, struct cf_setting *VAR_4, int *VAR_5)
{
 struct est_softc *VAR_6;
 freq_info *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_3);
 if (*VAR_5 < VAR_1)
  return (VAR_0);

 VAR_8 = 0;
 for (VAR_7 = VAR_6->freq_list; VAR_7 < VAR_6->freq_list + VAR_6->flist_len; VAR_7++, VAR_8++) {
  VAR_4[VAR_8].freq = VAR_7->freq;
  VAR_4[VAR_8].volts = VAR_7->volts;
  VAR_4[VAR_8].power = VAR_7->power;
  VAR_4[VAR_8].lat = VAR_2;
  VAR_4[VAR_8].dev = VAR_3;
 }
 *VAR_5 = VAR_8;

 return (0);
}
