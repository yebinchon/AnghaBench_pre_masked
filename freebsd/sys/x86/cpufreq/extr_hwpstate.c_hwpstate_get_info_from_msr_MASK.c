
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hwpstate_softc {int cfnum; struct hwpstate_setting* hwpstate_settings; } ;
struct hwpstate_setting {int freq; int pstate_id; void* lat; void* power; void* volts; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* VAR_0 ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct hwpstate_softc* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct hwpstate_softc *VAR_6;
 struct hwpstate_setting *VAR_7;
 uint64_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = FUNC_5(VAR_4);
 VAR_6 = FUNC_7(VAR_5);

 VAR_8 = FUNC_8(VAR_3);
 VAR_6->cfnum = 1 + FUNC_2(VAR_8);
 VAR_7 = VAR_6->hwpstate_settings;
 for (VAR_10 = 0; VAR_10 < VAR_6->cfnum; VAR_10++) {
  VAR_8 = FUNC_8(VAR_2 + VAR_10);
  if ((VAR_8 & ((uint64_t)1 << 63)) == 0) {
   FUNC_6(VAR_5, "msr is not valid.\n");
   return (VAR_1);
  }
  VAR_12 = FUNC_0(VAR_8);
  VAR_11 = FUNC_1(VAR_8);


  switch (VAR_9) {
  case 0x11:
   VAR_7[VAR_10].freq = (100 * (VAR_11 + 0x08)) >> VAR_12;
   break;
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x16:
   VAR_7[VAR_10].freq = (100 * (VAR_11 + 0x10)) >> VAR_12;
   break;
  case 0x17:
   VAR_12 = FUNC_3(VAR_8);
   if (VAR_12 == 0) {
    FUNC_6(VAR_5, "unexpected did: 0\n");
    VAR_12 = 1;
   }
   VAR_11 = FUNC_4(VAR_8);
   VAR_7[VAR_10].freq = (200 * VAR_11) / VAR_12;
   break;
  default:
   FUNC_6(VAR_5, "get_info_from_msr: AMD family"
       " 0x%02x CPUs are not supported yet\n", VAR_9);
   return (VAR_1);
  }
  VAR_7[VAR_10].pstate_id = VAR_10;

  VAR_7[VAR_10].volts = VAR_0;
  VAR_7[VAR_10].power = VAR_0;
  VAR_7[VAR_10].lat = VAR_0;
 }
 return (0);
}
