
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t u_int ;
struct intr_vector {int iv_event; } ;
struct fo_msiq_record {size_t fomqr_word0; } ;
struct fire_softc {size_t sc_msiq_size; int sc_dev; } ;
struct TYPE_2__ {struct fire_softc* fica_sc; } ;
struct fire_msiqarg {size_t fmqa_msiq; size_t fmqa_msi; scalar_t__ fmqa_tail; scalar_t__ fmqa_head; struct fo_msiq_record* fmqa_base; TYPE_1__ fmqa_fica; } ;
typedef int device_t ;


 size_t FUNC_0 (struct fire_softc*,scalar_t__) ;
 int FUNC_1 (struct fire_softc*,scalar_t__,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,size_t) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,size_t) ;

__attribute__((used)) static inline void
FUNC_8(struct intr_vector *VAR_12, struct fire_msiqarg *VAR_13)
{
 struct fire_softc *VAR_14;
 struct fo_msiq_record *VAR_15;
 device_t VAR_16;
 uint64_t VAR_17;
 u_int VAR_18, VAR_19, VAR_20;

 VAR_14 = VAR_13->fmqa_fica.fica_sc;
 VAR_16 = VAR_14->sc_dev;
 VAR_20 = VAR_13->fmqa_msiq;
 VAR_18 = (FUNC_0(VAR_14, VAR_13->fmqa_head) & VAR_7) >>
     VAR_8;
 VAR_15 = &VAR_13->fmqa_base[VAR_18];
 VAR_17 = VAR_15->fomqr_word0;
 for (;;) {
  if (FUNC_3((VAR_17 & VAR_2) == 0))
   break;
  FUNC_2((VAR_17 & VAR_4) != 0 ||
      (VAR_17 & VAR_3) != 0,
      ("%s: received non-MSI/MSI-X message in event queue %d "
      "(word0 %#llx)", FUNC_4(VAR_16), VAR_20,
      (unsigned long long)VAR_17));
  VAR_19 = (VAR_17 & VAR_0) >>
      VAR_1;



  FUNC_2(VAR_19 == VAR_13->fmqa_msi,
      ("%s: received non-matching MSI/MSI-X in event queue %d "
      "(%d versus %d)", FUNC_4(VAR_16), VAR_20, VAR_19,
      VAR_13->fmqa_msi));
  FUNC_1(VAR_14, VAR_10 + (VAR_19 << 3),
      VAR_11);
  if (FUNC_3(FUNC_6(VAR_12->iv_event,
      ((void*)0)) != 0))
   FUNC_7("stray MSI/MSI-X in event queue %d\n", VAR_20);
  VAR_15->fomqr_word0 &= ~VAR_2;
  VAR_18 = (VAR_18 + 1) % VAR_14->sc_msiq_size;
  VAR_15 = &VAR_13->fmqa_base[VAR_18];
  VAR_17 = VAR_15->fomqr_word0;
 }
 FUNC_1(VAR_14, VAR_13->fmqa_head, (VAR_18 & VAR_7) <<
     VAR_8);
 if (FUNC_3((FUNC_0(VAR_14, VAR_13->fmqa_tail) &
     VAR_9) != 0)) {
  FUNC_5(VAR_16, "event queue %d overflow\n", VAR_20);
  VAR_20 <<= 3;
  FUNC_1(VAR_14, VAR_5 + VAR_20,
      FUNC_0(VAR_14, VAR_5 + VAR_20) |
      VAR_6);
 }
}
