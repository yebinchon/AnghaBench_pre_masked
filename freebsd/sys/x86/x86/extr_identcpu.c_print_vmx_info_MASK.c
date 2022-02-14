
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 uint64_t VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 int VAR_38;

 FUNC_0("\n  VT-x: ");
 VAR_31 = FUNC_1(VAR_1);
 if (!(VAR_31 & VAR_0))
  FUNC_0("(disabled in BIOS) ");
 VAR_30 = FUNC_1(VAR_2);
 VAR_35 = FUNC_2(VAR_30, VAR_6,
     VAR_11);
 VAR_36 = FUNC_2(VAR_30, VAR_7,
     VAR_12);
 if (VAR_36 & VAR_24)
  VAR_37 = FUNC_2(VAR_30, VAR_8,
      VAR_8);
 else
  VAR_37 = 0;
 VAR_33 = FUNC_2(VAR_30, VAR_5, VAR_10);
 VAR_32 = FUNC_2(VAR_30, VAR_3, VAR_9);

 if (!VAR_29) {
  VAR_38 = 0;
  if (VAR_33 & VAR_28 && VAR_33 & VAR_27 &&
      VAR_32 & VAR_26) {
   FUNC_0("%sPAT", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_36 & VAR_21) {
   FUNC_0("%sHLT", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_36 & VAR_22) {
   FUNC_0("%sMTF", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_36 & VAR_23) {
   FUNC_0("%sPAUSE", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_37 & VAR_15) {
   FUNC_0("%sEPT", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_37 & VAR_17) {
   FUNC_0("%sUG", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_37 & VAR_16) {
   FUNC_0("%sVPID", VAR_38 ? "," : "");
   VAR_38 = 1;
  }
  if (VAR_36 & VAR_25 &&
      VAR_37 & VAR_18 &&
      VAR_37 & VAR_19 &&
      VAR_37 & VAR_14 &&
      VAR_37 & VAR_20) {
   FUNC_0("%sVID", VAR_38 ? "," : "");
   VAR_38 = 1;
   if (VAR_35 & VAR_13)
    FUNC_0(",PostIntr");
  }
  return;
 }

 VAR_34 = VAR_30 >> 32;
 FUNC_0("Basic Features=0x%b", VAR_34,
 "\020"
 "\02132PA"
 "\022SMM"
 "\027INS/OUTS"
 "\030TRUE"
 );
 FUNC_0("\n        Pin-Based Controls=0x%b", VAR_35,
 "\020"
 "\001ExtINT"
 "\004NMI"
 "\006VNMI"
 "\007PreTmr"
 "\010PostIntr"
 );
 FUNC_0("\n        Primary Processor Controls=0x%b", VAR_36,
 "\020"
 "\003INTWIN"
 "\004TSCOff"
 "\010HLT"
 "\012INVLPG"
 "\013MWAIT"
 "\014RDPMC"
 "\015RDTSC"
 "\020CR3-LD"
 "\021CR3-ST"
 "\024CR8-LD"
 "\025CR8-ST"
 "\026TPR"
 "\027NMIWIN"
 "\030MOV-DR"
 "\031IO"
 "\032IOmap"
 "\034MTF"
 "\035MSRmap"
 "\036MONITOR"
 "\037PAUSE"
 );
 if (VAR_36 & VAR_24)
  FUNC_0("\n        Secondary Processor Controls=0x%b", VAR_37,
  "\020"
  "\001APIC"
  "\002EPT"
  "\003DT"
  "\004RDTSCP"
  "\005x2APIC"
  "\006VPID"
  "\007WBINVD"
  "\010UG"
  "\011APIC-reg"
  "\012VID"
  "\013PAUSE-loop"
  "\014RDRAND"
  "\015INVPCID"
  "\016VMFUNC"
  "\017VMCS"
  "\020EPT#VE"
  "\021XSAVES"
  );
 FUNC_0("\n        Exit Controls=0x%b", VAR_34,
 "\020"
 "\003DR"

 "\015PERF"
 "\020AckInt"
 "\023PAT-SV"
 "\024PAT-LD"
 "\025EFER-SV"
 "\026EFER-LD"
 "\027PTMR-SV"
 );
 FUNC_0("\n        Entry Controls=0x%b", VAR_34,
 "\020"
 "\003DR"



 "\016PERF"
 "\017PAT"
 "\020EFER"
 );
 if (VAR_36 & VAR_24 &&
     (VAR_37 & (VAR_15 | VAR_16)) != 0) {
  VAR_31 = FUNC_1(VAR_4);
  VAR_34 = VAR_31;
  FUNC_0("\n        EPT Features=0x%b", VAR_34,
  "\020"
  "\001XO"
  "\007PW4"
  "\011UC"
  "\017WB"
  "\0212M"
  "\0221G"
  "\025INVEPT"
  "\026AD"
  "\032single"
  "\033all"
  );
  VAR_34 = VAR_31 >> 32;
  FUNC_0("\n        VPID Features=0x%b", VAR_34,
  "\020"
  "\001INVVPID"
  "\011individual"
  "\012single"
  "\013all"

  "\014single-globals"
  );
 }
}
