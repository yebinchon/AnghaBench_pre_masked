
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct est_softc {int msr_settings; } ;
struct TYPE_4__ {int freq; int volts; int id16; void* power; } ;
typedef TYPE_1__ freq_info ;
typedef int device_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct est_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 TYPE_1__* FUNC_4 (int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8, uint64_t VAR_9, freq_info **VAR_10, size_t *VAR_11)
{
 struct est_softc *VAR_12;
 freq_info *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17;

 if (!VAR_6)
  return (VAR_1);


 VAR_15 = FUNC_0(&VAR_7) / 1000000;
 VAR_17 = VAR_9 >> 32;
 VAR_14 = VAR_15 / (VAR_17 >> 8);
 FUNC_3(VAR_8, "Guessed bus clock (high) of %d MHz\n", VAR_14);
 if (!FUNC_1(VAR_14)) {

  VAR_17 = VAR_9 >> 48;
  VAR_14 = VAR_15 / (VAR_17 >> 8);
  FUNC_3(VAR_8, "Guessed bus clock (low) of %d MHz\n", VAR_14);
  if (!FUNC_1(VAR_14))
   return (VAR_1);


  VAR_17 = VAR_9 >> 32;
  VAR_15 = ((VAR_17 >> 8) & 0xff) * VAR_14;
 }


 VAR_12 = FUNC_2(VAR_8);
 VAR_13 = FUNC_4(sizeof(freq_info) * 2, VAR_2, VAR_3 | VAR_4);


 VAR_16 = VAR_17 & 0xff;
 if (VAR_16 != 0) {
  VAR_16 <<= 4;
  VAR_16 += 700;
 }
 VAR_13[0].freq = VAR_15;
 VAR_13[0].volts = VAR_16;
 VAR_13[0].id16 = VAR_17;
 VAR_13[0].power = VAR_0;
 FUNC_3(VAR_8, "Guessed high setting of %d MHz @ %d Mv\n", VAR_15,
     VAR_16);


 VAR_17 = VAR_9 >> 48;
 VAR_15 = ((VAR_17 >> 8) & 0xff) * VAR_14;
 VAR_16 = VAR_17 & 0xff;
 if (VAR_16 != 0) {
  VAR_16 <<= 4;
  VAR_16 += 700;
 }
 VAR_13[1].freq = VAR_15;
 VAR_13[1].volts = VAR_16;
 VAR_13[1].id16 = VAR_17;
 VAR_13[1].power = VAR_0;
 FUNC_3(VAR_8, "Guessed low setting of %d MHz @ %d Mv\n", VAR_15,
     VAR_16);


 VAR_12->msr_settings = VAR_5;
 *VAR_10 = VAR_13;
 *VAR_11 = 2;
 return (0);
}
