
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct cper_sec_proc_ia {int validation_bits; struct cper_ia_proc_ctx* cpuid; int lapic_id; } ;
struct cper_ia_proc_ctx {int reg_arr_size; size_t reg_ctx_type; int mm_reg_addr; int msr_addr; } ;
struct cper_ia_err_info {int validation_bits; int ip; int responder_id; int requestor_id; int target_id; int check_info; int err_type; } ;
typedef int newpfx ;
typedef int infopfx ;


 size_t FUNC_0 (char**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int *) ;
 char** VAR_11 ;
 char** VAR_12 ;
 int FUNC_4 (char*,size_t,int ) ;
 int FUNC_5 (char const*,char*,int ,int,int,struct cper_ia_proc_ctx*,int,int ) ;
 int FUNC_6 (char*,char const*,...) ;
 int FUNC_7 (char*,int,char*,char const*) ;

void FUNC_8(const char *VAR_13, const struct cper_sec_proc_ia *VAR_14)
{
 int VAR_15;
 struct cper_ia_err_info *VAR_16;
 struct cper_ia_proc_ctx *VAR_17;
 char VAR_18[64], VAR_19[64];
 u8 VAR_20;

 if (VAR_14->validation_bits & VAR_10)
  FUNC_6("%sLocal APIC_ID: 0x%llx\n", VAR_13, VAR_14->lapic_id);

 if (VAR_14->validation_bits & VAR_9) {
  FUNC_6("%sCPUID Info:\n", VAR_13);
  FUNC_5(VAR_13, "", VAR_2, 16, 4, VAR_14->cpuid,
          sizeof(VAR_14->cpuid), 0);
 }

 FUNC_7(VAR_18, sizeof(VAR_18), "%s ", VAR_13);

 VAR_16 = (struct cper_ia_err_info *)(VAR_14 + 1);
 for (VAR_15 = 0; VAR_15 < FUNC_2(VAR_14->validation_bits); VAR_15++) {
  FUNC_6("%sError Information Structure %d:\n", VAR_13, VAR_15);

  VAR_20 = FUNC_3(&VAR_16->err_type);
  FUNC_6("%sError Structure Type: %s\n", VAR_18,
         VAR_20 < FUNC_0(VAR_11) ?
         VAR_11[VAR_20] : "unknown");

  if (VAR_20 >= VAR_8) {
   FUNC_6("%sError Structure Type: %pUl\n", VAR_18,
          &VAR_16->err_type);
  }

  if (VAR_16->validation_bits & VAR_3) {
   FUNC_6("%sCheck Information: 0x%016llx\n", VAR_18,
          VAR_16->check_info);

   if (VAR_20 < VAR_8) {
    FUNC_7(VAR_19, sizeof(VAR_19), "%s ",
      VAR_18);

    FUNC_4(VAR_19, VAR_20,
            VAR_16->check_info);
   }
  }

  if (VAR_16->validation_bits & VAR_7) {
   FUNC_6("%sTarget Identifier: 0x%016llx\n",
          VAR_18, VAR_16->target_id);
  }

  if (VAR_16->validation_bits & VAR_5) {
   FUNC_6("%sRequestor Identifier: 0x%016llx\n",
          VAR_18, VAR_16->requestor_id);
  }

  if (VAR_16->validation_bits & VAR_6) {
   FUNC_6("%sResponder Identifier: 0x%016llx\n",
          VAR_18, VAR_16->responder_id);
  }

  if (VAR_16->validation_bits & VAR_4) {
   FUNC_6("%sInstruction Pointer: 0x%016llx\n",
          VAR_18, VAR_16->ip);
  }

  VAR_16++;
 }

 VAR_17 = (struct cper_ia_proc_ctx *)VAR_16;
 for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_14->validation_bits); VAR_15++) {
  int VAR_21 = sizeof(*VAR_17) + VAR_17->reg_arr_size;
  int VAR_22 = 4;

  FUNC_6("%sContext Information Structure %d:\n", VAR_13, VAR_15);

  FUNC_6("%sRegister Context Type: %s\n", VAR_18,
         VAR_17->reg_ctx_type < FUNC_0(VAR_12) ?
         VAR_12[VAR_17->reg_ctx_type] : "unknown");

  FUNC_6("%sRegister Array Size: 0x%04x\n", VAR_18,
         VAR_17->reg_arr_size);

  if (VAR_17->reg_ctx_type == VAR_1) {
   VAR_22 = 8;
   FUNC_6("%sMSR Address: 0x%08x\n", VAR_18,
          VAR_17->msr_addr);
  }

  if (VAR_17->reg_ctx_type == VAR_0) {
   FUNC_6("%sMM Register Address: 0x%016llx\n", VAR_18,
          VAR_17->mm_reg_addr);
  }

  FUNC_6("%sRegister Array:\n", VAR_18);
  FUNC_5(VAR_18, "", VAR_2, 16, VAR_22,
          (VAR_17 + 1), VAR_17->reg_arr_size, 0);

  VAR_17 = (struct cper_ia_proc_ctx *)((long)VAR_17 + VAR_21);
 }
}
