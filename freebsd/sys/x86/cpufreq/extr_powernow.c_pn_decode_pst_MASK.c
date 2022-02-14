
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ u_long ;
typedef int u_int ;
struct pst_header {int cpuid; int maxfid; int startvid; int numpstates; int fsb; } ;
struct psb_header {int version; int settlingtime; int res1; } ;
struct pn_softc {int pn_type; int vst; int sgtc; int fsb; int powernow_max_states; int low; int mvs; int irt; int rvo; int errata; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct pn_softc*,int *,int) ;
 struct pn_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int,int*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_10)
{
 int VAR_11;
 struct pn_softc *VAR_12;
 u_int VAR_13, VAR_14, VAR_15;
 u_long VAR_16;
 struct psb_header *VAR_17;
 uint8_t *VAR_18;
 u_int VAR_19[4];
 uint64_t VAR_20;

 VAR_12 = FUNC_13(VAR_10);

 FUNC_15(0x80000001, VAR_19);
 VAR_13 = VAR_19[0];

 if ((VAR_13 & 0xfff) == 0x760)
  VAR_12->errata |= VAR_0;

 VAR_20 = FUNC_16(VAR_3);

 switch (VAR_12->pn_type) {
 case 129:
  VAR_14 = FUNC_1(VAR_20);
  VAR_15 = FUNC_2(VAR_20);
  break;
 case 128:
  VAR_14 = FUNC_7(VAR_20);




  VAR_15 = FUNC_8(VAR_20);
  break;
 default:
  return (VAR_2);
 }

 if (VAR_9) {
  FUNC_14(VAR_10, "STATUS: 0x%jx\n", VAR_20);
  FUNC_14(VAR_10, "STATUS: maxfid: 0x%02x\n", VAR_14);
  FUNC_14(VAR_10, "STATUS: %s: 0x%02x\n",
      VAR_12->pn_type == 129 ? "startvid" : "maxvid",
      VAR_15);
 }

 VAR_16 = FUNC_10(VAR_7, VAR_6, VAR_4, VAR_8, VAR_5);
 if (VAR_16) {
  struct pst_header *VAR_21;

  VAR_17 = (struct psb_header*)(uintptr_t)FUNC_0(VAR_16);

  switch (VAR_17->version) {
  default:
   return (VAR_2);
  case 0x14:






   if (VAR_12->pn_type != 128)
    return (VAR_1);
   VAR_12->vst = VAR_17->settlingtime;
   VAR_12->rvo = FUNC_6(VAR_17->res1);
   VAR_12->irt = FUNC_4(VAR_17->res1);
   VAR_12->mvs = FUNC_5(VAR_17->res1);
   VAR_12->low = FUNC_3(VAR_17->res1);
   if (VAR_9) {
    FUNC_14(VAR_10, "PSB: VST: %d\n",
        VAR_17->settlingtime);
    FUNC_14(VAR_10, "PSB: RVO %x IRT %d "
        "MVS %d BATT %d\n",
        VAR_12->rvo,
        VAR_12->irt,
        VAR_12->mvs,
        VAR_12->low);
   }
   break;
  case 0x12:
   if (VAR_12->pn_type != 129)
    return (VAR_1);
   VAR_12->sgtc = VAR_17->settlingtime * VAR_12->fsb;
   if (VAR_12->sgtc < 100 * VAR_12->fsb)
    VAR_12->sgtc = 100 * VAR_12->fsb;
   break;
  }

  VAR_18 = ((uint8_t *) VAR_17) + sizeof(struct psb_header);
  VAR_21 = (struct pst_header*) VAR_18;

  VAR_11 = 200;

  do {
   struct pst_header *VAR_22 = (struct pst_header*) VAR_18;

   if (VAR_13 == VAR_22->cpuid &&
       VAR_14 == VAR_22->maxfid &&
       VAR_15 == VAR_22->startvid) {
    VAR_12->powernow_max_states = VAR_22->numpstates;
    switch (VAR_12->pn_type) {
    case 129:
     if (FUNC_9(VAR_12->fsb - VAR_22->fsb) > 5)
      continue;
     break;
    case 128:
     break;
    }
    return (FUNC_12(VAR_12,
        VAR_18 + sizeof(struct pst_header),
        VAR_12->powernow_max_states));
   }

   VAR_18 += sizeof(struct pst_header) + (2 * VAR_22->numpstates);
  } while (FUNC_11(VAR_21->cpuid) && VAR_11--);

  FUNC_14(VAR_10, "no match for extended cpuid %.3x\n", VAR_13);
 }

 return (VAR_2);
}
