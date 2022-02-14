
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; int member_3; int * member_2; int member_1; } ;
typedef int null_opt ;
typedef int intel_opts ;
typedef int common_opts ;
typedef int amd_opts ;


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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int VAR_132 ;
 int VAR_133 ;
 int VAR_134 ;
 int VAR_135 ;
 int VAR_136 ;
 int VAR_137 ;
 int VAR_138 ;
 int VAR_139 ;
 int VAR_140 ;
 int VAR_141 ;
 int VAR_142 ;
 int VAR_143 ;
 int VAR_144 ;
 int VAR_145 ;
 int VAR_146 ;
 int VAR_147 ;
 int VAR_148 ;
 int VAR_149 ;
 struct option* FUNC_0 (int) ;
 int FUNC_1 (char*,struct option const*,int) ;
 int VAR_150 ;
 int VAR_151 ;
 int VAR_152 ;
 int VAR_153 ;
 int VAR_154 ;
 int VAR_155 ;
 int VAR_156 ;
 int VAR_157 ;
 int VAR_158 ;
 int VAR_159 ;
 int VAR_160 ;

__attribute__((used)) static struct option *
FUNC_2(bool VAR_161)
{
 const struct option VAR_162[] = {
  { "vm", VAR_7, 0, VAR_41 },
  { "cpu", VAR_7, 0, VAR_40 },
  { "set-mem", VAR_7, 0, VAR_28 },
  { "set-efer", VAR_7, 0, VAR_22 },
  { "set-cr0", VAR_7, 0, VAR_10 },
  { "set-cr2", VAR_7, 0, VAR_11 },
  { "set-cr3", VAR_7, 0, VAR_12 },
  { "set-cr4", VAR_7, 0, VAR_13 },
  { "set-dr0", VAR_7, 0, VAR_15 },
  { "set-dr1", VAR_7, 0, VAR_16 },
  { "set-dr2", VAR_7, 0, VAR_17 },
  { "set-dr3", VAR_7, 0, VAR_18 },
  { "set-dr6", VAR_7, 0, VAR_19 },
  { "set-dr7", VAR_7, 0, VAR_20 },
  { "set-rsp", VAR_7, 0, VAR_32 },
  { "set-rip", VAR_7, 0, VAR_31 },
  { "set-rax", VAR_7, 0, VAR_29 },
  { "set-rflags", VAR_7, 0, VAR_30 },
  { "desc-base", VAR_7, 0, VAR_3 },
  { "desc-limit", VAR_7, 0, VAR_4 },
  { "desc-access",VAR_7, 0, VAR_2 },
  { "set-cs", VAR_7, 0, VAR_14 },
  { "set-ds", VAR_7, 0, VAR_21 },
  { "set-es", VAR_7, 0, VAR_23 },
  { "set-fs", VAR_7, 0, VAR_25 },
  { "set-gs", VAR_7, 0, VAR_26 },
  { "set-ss", VAR_7, 0, VAR_35 },
  { "set-tr", VAR_7, 0, VAR_36 },
  { "set-ldtr", VAR_7, 0, VAR_27 },
  { "set-x2apic-state",VAR_7, 0, VAR_38 },
  { "set-exception-bitmap",
    VAR_7, 0, VAR_24 },
  { "capname", VAR_7, 0, VAR_1 },
  { "unassign-pptdev", VAR_7, 0, VAR_39 },
  { "setcap", VAR_7, 0, VAR_9 },
  { "get-gpa-pmap", VAR_7, 0, VAR_5 },
  { "assert-lapic-lvt", VAR_7, 0, VAR_0 },
  { "get-rtc-time", VAR_6, &VAR_125, 1 },
  { "set-rtc-time", VAR_7, 0, VAR_34 },
  { "rtc-nvram-offset", VAR_7, 0, VAR_8 },
  { "get-rtc-nvram", VAR_6, &VAR_124, 1 },
  { "set-rtc-nvram", VAR_7, 0, VAR_33 },
  { "getcap", VAR_6, &VAR_148, 1 },
  { "get-stats", VAR_6, &VAR_127, 1 },
  { "get-desc-ds",VAR_6, &VAR_62, 1 },
  { "set-desc-ds",VAR_6, &VAR_152, 1 },
  { "get-desc-es",VAR_6, &VAR_63, 1 },
  { "set-desc-es",VAR_6, &VAR_153, 1 },
  { "get-desc-ss",VAR_6, &VAR_69, 1 },
  { "set-desc-ss",VAR_6, &VAR_159, 1 },
  { "get-desc-cs",VAR_6, &VAR_61, 1 },
  { "set-desc-cs",VAR_6, &VAR_151, 1 },
  { "get-desc-fs",VAR_6, &VAR_64, 1 },
  { "set-desc-fs",VAR_6, &VAR_154, 1 },
  { "get-desc-gs",VAR_6, &VAR_66, 1 },
  { "set-desc-gs",VAR_6, &VAR_156, 1 },
  { "get-desc-tr",VAR_6, &VAR_70, 1 },
  { "set-desc-tr",VAR_6, &VAR_160, 1 },
  { "set-desc-ldtr", VAR_6, &VAR_158, 1 },
  { "get-desc-ldtr", VAR_6, &VAR_68, 1 },
  { "set-desc-gdtr", VAR_6, &VAR_155, 1 },
  { "get-desc-gdtr", VAR_6, &VAR_65, 1 },
  { "set-desc-idtr", VAR_6, &VAR_157, 1 },
  { "get-desc-idtr", VAR_6, &VAR_67, 1 },
  { "get-memmap", VAR_6, &VAR_99, 1 },
  { "get-memseg", VAR_6, &VAR_100, 1 },
  { "get-efer", VAR_6, &VAR_78, 1 },
  { "get-cr0", VAR_6, &VAR_51, 1 },
  { "get-cr2", VAR_6, &VAR_54, 1 },
  { "get-cr3", VAR_6, &VAR_55, 1 },
  { "get-cr4", VAR_6, &VAR_57, 1 },
  { "get-dr0", VAR_6, &VAR_71, 1 },
  { "get-dr1", VAR_6, &VAR_72, 1 },
  { "get-dr2", VAR_6, &VAR_73, 1 },
  { "get-dr3", VAR_6, &VAR_74, 1 },
  { "get-dr6", VAR_6, &VAR_75, 1 },
  { "get-dr7", VAR_6, &VAR_76, 1 },
  { "get-rsp", VAR_6, &VAR_123, 1 },
  { "get-rip", VAR_6, &VAR_121, 1 },
  { "get-rax", VAR_6, &VAR_114, 1 },
  { "get-rbx", VAR_6, &VAR_116, 1 },
  { "get-rcx", VAR_6, &VAR_117, 1 },
  { "get-rdx", VAR_6, &VAR_119, 1 },
  { "get-rsi", VAR_6, &VAR_122, 1 },
  { "get-rdi", VAR_6, &VAR_118, 1 },
  { "get-rbp", VAR_6, &VAR_115, 1 },
  { "get-r8", VAR_6, &VAR_112, 1 },
  { "get-r9", VAR_6, &VAR_113, 1 },
  { "get-r10", VAR_6, &VAR_106, 1 },
  { "get-r11", VAR_6, &VAR_107, 1 },
  { "get-r12", VAR_6, &VAR_108, 1 },
  { "get-r13", VAR_6, &VAR_109, 1 },
  { "get-r14", VAR_6, &VAR_110, 1 },
  { "get-r15", VAR_6, &VAR_111, 1 },
  { "get-rflags", VAR_6, &VAR_120, 1 },
  { "get-cs", VAR_6, &VAR_60, 1 },
  { "get-ds", VAR_6, &VAR_77, 1 },
  { "get-es", VAR_6, &VAR_81, 1 },
  { "get-fs", VAR_6, &VAR_85, 1 },
  { "get-gs", VAR_6, &VAR_86, 1 },
  { "get-ss", VAR_6, &VAR_126, 1 },
  { "get-tr", VAR_6, &VAR_130, 1 },
  { "get-ldtr", VAR_6, &VAR_98, 1 },
  { "get-eptp", VAR_6, &VAR_80, 1 },
  { "get-exception-bitmap",
     VAR_6, &VAR_82, 1 },
  { "get-io-bitmap-address",
     VAR_6, &VAR_97, 1 },
  { "get-tsc-offset", VAR_6, &VAR_131, 1 },
  { "get-msr-bitmap",
     VAR_6, &VAR_101, 1 },
  { "get-msr-bitmap-address",
     VAR_6, &VAR_102, 1 },
  { "get-guest-pat", VAR_6, &VAR_87, 1 },
  { "get-guest-sysenter",
     VAR_6, &VAR_88, 1 },
  { "get-exit-reason",
     VAR_6, &VAR_84, 1 },
  { "get-x2apic-state", VAR_6, &VAR_147, 1 },
  { "get-all", VAR_6, &VAR_47, 1 },
  { "run", VAR_6, &VAR_150, 1 },
  { "create", VAR_6, &VAR_42, 1 },
  { "destroy", VAR_6, &VAR_43, 1 },
  { "inject-nmi", VAR_6, &VAR_149, 1 },
  { "force-reset", VAR_6, &VAR_45, 1 },
  { "force-poweroff", VAR_6, &VAR_44, 1 },
  { "get-active-cpus", VAR_6, &VAR_46, 1 },
  { "get-suspended-cpus", VAR_6, &VAR_128, 1 },
  { "get-intinfo", VAR_6, &VAR_96, 1 },
  { "get-cpu-topology", VAR_6, &VAR_50, 1 },
 };

 const struct option VAR_163[] = {
  { "get-vmcs-pinbased-ctls",
    VAR_6, &VAR_103, 1 },
  { "get-vmcs-procbased-ctls",
    VAR_6, &VAR_104, 1 },
  { "get-vmcs-procbased-ctls2",
    VAR_6, &VAR_105, 1 },
  { "get-vmcs-guest-linear-address",
    VAR_6, &VAR_142, 1 },
  { "get-vmcs-guest-physical-address",
    VAR_6, &VAR_143, 1 },
  { "get-vmcs-entry-interruption-info",
    VAR_6, &VAR_137, 1},
  { "get-vmcs-cr0-mask", VAR_6, &VAR_52, 1 },
  { "get-vmcs-cr0-shadow", VAR_6,&VAR_53, 1 },
  { "get-vmcs-cr4-mask", VAR_6, &VAR_58, 1 },
  { "get-vmcs-cr4-shadow", VAR_6, &VAR_59, 1 },
  { "get-vmcs-cr3-targets", VAR_6, &VAR_56, 1 },
  { "get-vmcs-tpr-threshold",
     VAR_6, &VAR_129, 1 },
  { "get-vmcs-vpid", VAR_6, &VAR_146, 1 },
  { "get-vmcs-exit-ctls", VAR_6, &VAR_83, 1 },
  { "get-vmcs-entry-ctls",
     VAR_6, &VAR_79, 1 },
  { "get-vmcs-instruction-error",
     VAR_6, &VAR_95, 1 },
  { "get-vmcs-host-pat", VAR_6, &VAR_92, 1 },
  { "get-vmcs-host-cr0",
     VAR_6, &VAR_89, 1 },
  { "set-vmcs-entry-interruption-info",
    VAR_7, 0, VAR_37 },
  { "get-vmcs-exit-qualification",
    VAR_6, &VAR_141, 1 },
  { "get-vmcs-exit-inst-length",
    VAR_6, &VAR_138, 1 },
  { "get-vmcs-interruptibility",
    VAR_6, &VAR_144, 1 },
  { "get-vmcs-exit-interruption-error",
    VAR_6, &VAR_139, 1 },
  { "get-vmcs-exit-interruption-info",
    VAR_6, &VAR_140, 1 },
  { "get-vmcs-link", VAR_6, &VAR_145, 1 },
  { "get-vmcs-host-cr3",
     VAR_6, &VAR_90, 1 },
  { "get-vmcs-host-cr4",
    VAR_6, &VAR_91, 1 },
  { "get-vmcs-host-rip",
    VAR_6, &VAR_93, 1 },
  { "get-vmcs-host-rsp",
    VAR_6, &VAR_94, 1 },
  { "get-apic-access-address",
    VAR_6, &VAR_48, 1},
  { "get-virtual-apic-address",
    VAR_6, &VAR_132, 1}
 };

 const struct option VAR_164[] = {
  { "get-vmcb-intercepts",
    VAR_6, &VAR_134, 1 },
  { "get-vmcb-asid",
    VAR_6, &VAR_146, 1 },
  { "get-vmcb-exit-details",
    VAR_6, &VAR_133, 1 },
  { "get-vmcb-tlb-ctrl",
    VAR_6, &VAR_135, 1 },
  { "get-vmcb-virq",
    VAR_6, &VAR_136, 1 },
  { "get-avic-apic-bar",
    VAR_6, &VAR_48, 1 },
  { "get-avic-backing-page",
    VAR_6, &VAR_132, 1 },
  { "get-avic-table",
    VAR_6, &VAR_49, 1 }
 };

 const struct option VAR_165 = {
  ((void*)0), 0, ((void*)0), 0
 };

 struct option *VAR_166;
 char *VAR_167;
 int VAR_168;

 VAR_168 = sizeof(VAR_162);

 if (VAR_161)
  VAR_168 += sizeof(VAR_163);
 else
  VAR_168 += sizeof(VAR_164);

 VAR_168 += sizeof(VAR_165);

 VAR_166 = FUNC_0(VAR_168);

 VAR_167 = (char *)VAR_166;
 FUNC_1(VAR_167, VAR_162, sizeof(VAR_162));
 VAR_167 += sizeof(VAR_162);

 if (VAR_161) {
  FUNC_1(VAR_167, VAR_163, sizeof(VAR_163));
  VAR_167 += sizeof(VAR_163);
 } else {
  FUNC_1(VAR_167, VAR_164, sizeof(VAR_164));
  VAR_167 += sizeof(VAR_164);
 }

 FUNC_1(VAR_167, &VAR_165, sizeof(VAR_165));
 VAR_167 += sizeof(VAR_165);

 return (VAR_166);
}
