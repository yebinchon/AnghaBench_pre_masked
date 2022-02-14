
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t u_int ;
struct fo_msiq_record {size_t fomqr_word0; } ;
struct fire_softc {size_t sc_msiq_size; int sc_dev; } ;
struct TYPE_2__ {struct fire_softc* fica_sc; } ;
struct fire_msiqarg {size_t fmqa_msiq; int fmqa_mtx; scalar_t__ fmqa_tail; scalar_t__ fmqa_head; struct fo_msiq_record* fmqa_base; TYPE_1__ fmqa_fica; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct fire_softc*,scalar_t__) ;
 int FUNC_1 (struct fire_softc*,scalar_t__,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (int,char*) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_9(void *VAR_13)
{
 struct fire_msiqarg *VAR_14;
 struct fire_softc *VAR_15;
 struct fo_msiq_record *VAR_16;
 device_t VAR_17;
 uint64_t VAR_18;
 u_int VAR_19, VAR_20, VAR_21;

 VAR_14 = VAR_13;
 VAR_15 = VAR_14->fmqa_fica.fica_sc;
 VAR_17 = VAR_15->sc_dev;
 VAR_21 = VAR_14->fmqa_msiq;
 FUNC_6(&VAR_14->fmqa_mtx);
 VAR_19 = (FUNC_0(VAR_15, VAR_14->fmqa_head) & VAR_7) >>
     VAR_8;
 VAR_16 = &VAR_14->fmqa_base[VAR_19];
 VAR_18 = VAR_16->fomqr_word0;
 for (;;) {
  FUNC_2((VAR_18 & VAR_4) != 0,
      ("%s: received non-PCIe message in event queue %d "
      "(word0 %#llx)", FUNC_4(VAR_17), VAR_21,
      (unsigned long long)VAR_18));
  VAR_20 = (VAR_18 & VAR_1) >>
      VAR_2;





  if (VAR_20 == 0x30)
   FUNC_5(VAR_17, "correctable PCIe error\n");
  else if (VAR_20 == 0x31 ||
      VAR_20 == 0x33)
   FUNC_8("%s: %sfatal PCIe error",
       FUNC_4(VAR_17),
       VAR_20 == 0x31 ? "non-" : "");
  else
   FUNC_8("%s: received unknown PCIe message %#x",
       FUNC_4(VAR_17), VAR_20);
  VAR_16->fomqr_word0 &= ~VAR_3;
  VAR_19 = (VAR_19 + 1) % VAR_15->sc_msiq_size;
  VAR_16 = &VAR_14->fmqa_base[VAR_19];
  VAR_18 = VAR_16->fomqr_word0;
  if (FUNC_3((VAR_18 & VAR_3) == 0))
   break;
 }
 FUNC_1(VAR_15, VAR_14->fmqa_head, (VAR_19 & VAR_7) <<
     VAR_8);
 if ((FUNC_0(VAR_15, VAR_14->fmqa_tail) &
     VAR_9) != 0) {
  FUNC_5(VAR_17, "event queue %d overflow\n", VAR_21);
  VAR_21 <<= 3;
  FUNC_1(VAR_15, VAR_5 + VAR_21,
      FUNC_0(VAR_15, VAR_5 + VAR_21) |
      VAR_6);
 }
 FUNC_7(&VAR_14->fmqa_mtx);
 return (VAR_0);
}
