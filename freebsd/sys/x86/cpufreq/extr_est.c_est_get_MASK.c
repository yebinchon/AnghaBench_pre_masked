
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct est_softc {int flist_len; int freq_list; } ;
struct cf_setting {int dev; int lat; int power; int volts; int freq; } ;
struct TYPE_3__ {int power; int volts; int freq; } ;
typedef TYPE_1__ freq_info ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct est_softc* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct cf_setting *VAR_3)
{
 struct est_softc *VAR_4;
 freq_info *VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_4->freq_list, VAR_4->flist_len);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_3->freq = VAR_5->freq;
 VAR_3->volts = VAR_5->volts;
 VAR_3->power = VAR_5->power;
 VAR_3->lat = VAR_1;
 VAR_3->dev = VAR_2;
 return (0);
}
