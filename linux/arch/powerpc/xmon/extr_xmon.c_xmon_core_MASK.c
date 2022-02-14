
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long nip; int msr; int trap; } ;
struct bpt {unsigned long address; int * instr; int ref_count; } ;


 char* FUNC_0 (struct bpt*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pt_regs*) ;
 struct bpt* FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 long* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int,int *) ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (struct pt_regs*,int ) ;
 int FUNC_13 (struct pt_regs*) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 struct bpt* FUNC_17 (unsigned long,unsigned long*) ;
 int VAR_9 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (unsigned long) ;
 int FUNC_21 (unsigned long) ;
 int FUNC_22 (long*,int) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (unsigned long,int,int ) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 scalar_t__ FUNC_30 (long*) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 (int ,int*) ;
 int FUNC_37 () ;
 int VAR_10 ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 scalar_t__ FUNC_40 (struct pt_regs*) ;
 int FUNC_41 (int) ;
 int FUNC_42 () ;
 long** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_43 (unsigned long,char*,char*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_44(struct pt_regs *VAR_15, int VAR_16)
{
 int VAR_17 = 0;
 struct bpt *VAR_18;
 long VAR_19[VAR_1];
 unsigned long VAR_20;
 unsigned long VAR_21;





 FUNC_21(VAR_21);
 FUNC_16();

 if (!VAR_16) {
  VAR_10 = FUNC_38();
  FUNC_39();
 }

 VAR_18 = FUNC_17(VAR_15->nip, &VAR_20);
 if (VAR_18 != ((void*)0)) {
  VAR_15->nip = VAR_18->address + VAR_20;
  FUNC_4(&VAR_18->ref_count);
 }

 FUNC_29();
 if (VAR_9) {
  FUNC_26("Exception %lx %s in xmon, returning to main loop\n",
         VAR_15->trap, FUNC_15(FUNC_2(VAR_15)));
  FUNC_22(VAR_11[0], 1);
 }
 if (FUNC_30(VAR_19) == 0) {
  VAR_11[0] = VAR_19;
  VAR_9 = 1;

  FUNC_13(VAR_15);
  VAR_18 = FUNC_3(VAR_15->nip);
  if (VAR_18) {
   FUNC_26("Stopped at breakpoint %tx (", FUNC_0(VAR_18));
   FUNC_43(VAR_15->nip, " ", ")\n");
  }
  if (FUNC_40(VAR_15))
   FUNC_26("WARNING: exception is not recoverable, "
          "can't continue\n");
  FUNC_28();
  FUNC_11();

  if (VAR_18 || FUNC_2(VAR_15) == 0xd00)
   FUNC_25(VAR_15->nip, 1, 0);
  FUNC_26("enter ? for help\n");
 }

 VAR_17 = FUNC_7(VAR_15);

 FUNC_18();
 VAR_9 = 0;
 if ((VAR_15->msr & (VAR_4|VAR_5|VAR_2)) == (VAR_4|VAR_2)) {
  VAR_18 = FUNC_3(VAR_15->nip);
  if (VAR_18 != ((void*)0)) {
   int VAR_22 = FUNC_12(VAR_15, VAR_18->instr[0]);
   if (VAR_22 == 0) {
    VAR_15->nip = (unsigned long) &VAR_18->instr[0];
    FUNC_5(&VAR_18->ref_count);
   } else if (VAR_22 < 0) {
    FUNC_26("Couldn't single-step %s instruction\n",
        (FUNC_1(VAR_18->instr[0])? "rfid": "mtmsrd"));
   }
  }
 }

 FUNC_19();

 FUNC_37();
 FUNC_20(VAR_21);

 return VAR_17 != 'X' && VAR_17 != VAR_0;
}
