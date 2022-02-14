
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsb {int dummy; } ;
struct TYPE_4__ {int lock; TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
typedef int gfp_t ;
struct TYPE_3__ {unsigned long tsb_rss_limit; int tsb_reg_val; int tsb_nentries; struct tsb* tsb; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct tsb* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,struct tsb*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct tsb*,unsigned long) ;
 unsigned long FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct mm_struct *VAR_12, unsigned long VAR_13, unsigned long VAR_14)
{
 unsigned long VAR_15 = 1 * 1024 * 1024;
 unsigned long VAR_16, VAR_17, VAR_18;
 struct tsb *VAR_19, *VAR_20;
 unsigned long VAR_21, VAR_22;
 unsigned long VAR_23;
 gfp_t VAR_24;

 if (VAR_15 > (VAR_4 << VAR_1))
  VAR_15 = (VAR_4 << VAR_1);

 VAR_21 = 0;
 for (VAR_16 = 8192; VAR_16 < VAR_15; VAR_16 <<= 1UL) {
  VAR_23 = FUNC_12(VAR_16);
  if (VAR_23 > VAR_14)
   break;
  VAR_21++;
 }

 if (VAR_16 == VAR_15)
  VAR_23 = ~0UL;

retry_tsb_alloc:
 VAR_24 = VAR_0;
 if (VAR_16 > (VAR_4 * 2))
  VAR_24 |= VAR_7 | VAR_6;

 VAR_20 = FUNC_1(VAR_11[VAR_21],
     VAR_24, FUNC_3());
 if (FUNC_13(!VAR_20)) {





  if (VAR_12->context.tsb_block[VAR_13].tsb == ((void*)0) &&
      VAR_21 > 0) {
   VAR_21 = 0;
   VAR_16 = 8192;
   VAR_23 = ~0UL;
   goto retry_tsb_alloc;
  }




  if (VAR_12->context.tsb_block[VAR_13].tsb != ((void*)0))
   VAR_12->context.tsb_block[VAR_13].tsb_rss_limit = ~0UL;
  return;
 }


 FUNC_11(VAR_20, VAR_16);
 FUNC_8(&VAR_12->context.lock, VAR_18);

 VAR_19 = VAR_12->context.tsb_block[VAR_13].tsb;
 VAR_22 =
  (VAR_12->context.tsb_block[VAR_13].tsb_reg_val & 0x7UL);
 VAR_17 = (VAR_12->context.tsb_block[VAR_13].tsb_nentries *
      sizeof(struct tsb));






 if (FUNC_13(VAR_19 &&
       (VAR_14 < VAR_12->context.tsb_block[VAR_13].tsb_rss_limit))) {
  FUNC_9(&VAR_12->context.lock, VAR_18);

  FUNC_2(VAR_11[VAR_21], VAR_20);
  return;
 }

 VAR_12->context.tsb_block[VAR_13].tsb_rss_limit = VAR_23;

 if (VAR_19) {
  extern void FUNC_0(unsigned long VAR_25,
         unsigned long VAR_26,
         unsigned long VAR_27,
         unsigned long VAR_28,
         unsigned long VAR_29);
  unsigned long VAR_30 = (unsigned long) VAR_19;
  unsigned long VAR_31 = (unsigned long) VAR_20;

  if (VAR_10 == VAR_8 || VAR_10 == VAR_9) {
   VAR_30 = FUNC_0(VAR_30);
   VAR_31 = FUNC_0(VAR_31);
  }
  FUNC_0(VAR_30, VAR_17, VAR_31, VAR_16,
   VAR_13 == VAR_2 ?
   VAR_3 : VAR_5);
 }

 VAR_12->context.tsb_block[VAR_13].tsb = VAR_20;
 FUNC_6(VAR_12, VAR_13, VAR_16);

 FUNC_9(&VAR_12->context.lock, VAR_18);




 if (VAR_19) {

  FUNC_10(VAR_12);


  FUNC_4();
  FUNC_7(VAR_12);
  FUNC_5();


  FUNC_2(VAR_11[VAR_22], VAR_19);
 }
}
