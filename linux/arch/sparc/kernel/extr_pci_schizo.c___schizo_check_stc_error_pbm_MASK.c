
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct strbuf {unsigned long strbuf_control; } ;
struct pci_pbm_info {unsigned long pbm_regs; int name; struct strbuf stc; } ;
typedef enum schizo_error_type { ____Placeholder_schizo_error_type } schizo_error_type ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (char*,int ,int,unsigned long,unsigned long,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_16 ;
 unsigned long* VAR_17 ;
 unsigned long* VAR_18 ;
 unsigned long* VAR_19 ;
 void* FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pci_pbm_info *VAR_20,
      enum schizo_error_type VAR_21)
{
 struct strbuf *VAR_22 = &VAR_20->stc;
 unsigned long VAR_23 = VAR_20->pbm_regs;
 unsigned long VAR_24, VAR_25, VAR_26;
 u64 VAR_27;
 int VAR_28;

 VAR_24 = VAR_23 + VAR_12;
 VAR_25 = VAR_23 + VAR_14;
 VAR_26 = VAR_23 + VAR_13;

 FUNC_1(&VAR_16);
 VAR_27 = FUNC_3(VAR_22->strbuf_control);
 FUNC_4((VAR_27 | VAR_15),
     VAR_22->strbuf_control);
 for (VAR_28 = 0; VAR_28 < 128; VAR_28++) {
  unsigned long VAR_29;

  VAR_29 = FUNC_3(VAR_24 + (VAR_28 * 8UL));
  FUNC_4(0UL, VAR_24 + (VAR_28 * 8UL));
  VAR_17[VAR_28] = VAR_29;
 }
 for (VAR_28 = 0; VAR_28 < 16; VAR_28++) {
  VAR_19[VAR_28] = FUNC_3(VAR_25 + (VAR_28 * 8UL));
  VAR_18[VAR_28] = FUNC_3(VAR_26 + (VAR_28 * 8UL));
  FUNC_4(0UL, VAR_25 + (VAR_28 * 8UL));
  FUNC_4(0UL, VAR_26 + (VAR_28 * 8UL));
 }


 FUNC_4(VAR_27, VAR_22->strbuf_control);

 for (VAR_28 = 0; VAR_28 < 16; VAR_28++) {
  int VAR_30, VAR_31, VAR_32, VAR_33;

  VAR_31 = 0;
  VAR_32 = VAR_28 * 8;
  VAR_33 = VAR_32 + 8;
  for (VAR_30 = VAR_32; VAR_30 < VAR_33; VAR_30++) {
   unsigned long VAR_34 = VAR_17[VAR_30];
   if (VAR_34 != 0) {
    VAR_31++;
    FUNC_0("%s: STC_ERR(%d)[wr(%d)rd(%d)]\n",
           VAR_20->name,
           VAR_30,
           (VAR_34 & VAR_1) ? 1 : 0,
           (VAR_34 & VAR_0) ? 1 : 0);
   }
  }
  if (VAR_31 != 0) {
   unsigned long VAR_35 = VAR_19[VAR_28];
   unsigned long VAR_36 = VAR_18[VAR_28];
   FUNC_0("%s: STC_TAG(%d)[PA(%016lx)VA(%08lx)V(%d)R(%d)]\n",
          VAR_20->name,
          VAR_28,
          ((VAR_35 & VAR_8) >> 19UL),
          (VAR_35 & VAR_11),
          ((VAR_35 & VAR_10) ? 1 : 0),
          ((VAR_35 & VAR_9) ? 1 : 0));


   FUNC_0("%s: STC_LINE(%d)[LIDX(%lx)SP(%lx)LADDR(%lx)EP(%lx)"
          "V(%d)FOFN(%d)]\n",
          VAR_20->name,
          VAR_28,
          ((VAR_36 & VAR_5) >> 23UL),
          ((VAR_36 & VAR_6) >> 13UL),
          ((VAR_36 & VAR_4) >> 6UL),
          ((VAR_36 & VAR_2) >> 0UL),
          ((VAR_36 & VAR_7) ? 1 : 0),
          ((VAR_36 & VAR_3) ? 1 : 0));
  }
 }

 FUNC_2(&VAR_16);
}
