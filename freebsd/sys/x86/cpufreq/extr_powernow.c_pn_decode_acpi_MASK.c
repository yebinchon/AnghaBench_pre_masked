
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct powernow_state {size_t fid; int freq; int power; int vid; } ;
struct pn_softc {int errata; int pn_type; int powernow_max_states; int fsb; struct powernow_state* powernow_states; int low; int irt; int rvo; int pll; int mvs; int vst; scalar_t__ sgtc; } ;
struct cf_setting {int freq; int power; scalar_t__* spec; } ;
typedef int * device_t ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,struct cf_setting*,int*) ;
 int FUNC_11 (int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_12 (int ) ;


 int VAR_5 ;
 size_t VAR_6 ;
 struct pn_softc* FUNC_13 (int *) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int,int*) ;
 int FUNC_16 (struct powernow_state*,struct powernow_state*,int) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_9, device_t VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14;
 uint32_t VAR_15;
 u_int VAR_16;
 u_int VAR_17[4];
 struct pn_softc *VAR_18;
 struct powernow_state VAR_19;
 struct cf_setting VAR_20[VAR_5];
 int VAR_21 = VAR_5;
 int VAR_22;
 int VAR_23;

 if (VAR_10 == ((void*)0))
  return (VAR_3);

 VAR_23 = FUNC_10(VAR_10, VAR_20, &VAR_21);
 if (VAR_23)
  return (VAR_3);
 VAR_23 = FUNC_11(VAR_10, &VAR_22);
 if (VAR_23 || (VAR_22 & VAR_1) == 0)
  return (VAR_3);

 VAR_18 = FUNC_13(VAR_9);

 FUNC_15(0x80000001, VAR_17);
 VAR_16 = VAR_17[0];
 if ((VAR_16 & 0xfff) == 0x760)
  VAR_18->errata |= VAR_0;

 VAR_15 = 0;
 VAR_18->sgtc = 0;
 for (VAR_13 = 0, VAR_11 = 0; VAR_11 < VAR_21; ++VAR_11) {
  VAR_15 = VAR_20[VAR_11].spec[VAR_6];
  switch (VAR_18->pn_type) {
  case 129:
   VAR_19.fid = FUNC_0(VAR_15);
   VAR_19.vid = FUNC_2(VAR_15);
   if ((VAR_18->errata & VAR_0) &&
       (VAR_7[VAR_19.fid] % 10) == 5)
    continue;
   break;
  case 128:
   VAR_19.fid = FUNC_3(VAR_15);
   VAR_19.vid = FUNC_8(VAR_15);
   break;
  }
  VAR_19.freq = VAR_20[VAR_11].freq * 1000;
  VAR_19.power = VAR_20[VAR_11].power;

  VAR_12 = VAR_13;
  while (VAR_12 > 0 && VAR_18->powernow_states[VAR_12 - 1].freq < VAR_19.freq) {
   FUNC_16(&VAR_18->powernow_states[VAR_12],
       &VAR_18->powernow_states[VAR_12 - 1],
       sizeof(struct powernow_state));
   --VAR_12;
  }
  FUNC_16(&VAR_18->powernow_states[VAR_12], &VAR_19,
      sizeof(struct powernow_state));
  ++VAR_13;
 }

 VAR_18->powernow_max_states = VAR_13;
 VAR_19 = VAR_18->powernow_states[0];
 VAR_14 = FUNC_17(VAR_4);

 switch (VAR_18->pn_type) {
 case 129:
  VAR_18->sgtc = FUNC_1(VAR_15);






  if (FUNC_12(VAR_14) != VAR_19.fid) {
   FUNC_14(VAR_9, "ACPI MAX frequency not found\n");
   return (VAR_2);
  }
  VAR_18->fsb = VAR_19.freq / 100 / VAR_7[VAR_19.fid];
  break;
 case 128:
  VAR_18->vst = FUNC_9(VAR_15),
  VAR_18->mvs = FUNC_5(VAR_15),
  VAR_18->pll = FUNC_6(VAR_15),
  VAR_18->rvo = FUNC_7(VAR_15),
  VAR_18->irt = FUNC_4(VAR_15);
  VAR_18->low = 0;




  if (VAR_18->powernow_max_states >= 2 &&
      (VAR_18->powernow_states[VAR_18->powernow_max_states - 2].fid < 8))
   return (VAR_2);
  VAR_18->fsb = VAR_19.freq / 100 / VAR_8[VAR_19.fid];
  break;
 }

 return (0);
}
