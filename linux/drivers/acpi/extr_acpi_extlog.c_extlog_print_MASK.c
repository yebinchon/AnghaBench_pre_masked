
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct notifier_block {int dummy; } ;
struct mce {int bank; int extcpu; } ;
struct cper_sec_mem_err {int dummy; } ;
struct acpi_hest_generic_status {scalar_t__ block_status; } ;
struct acpi_hest_generic_data {int validation_bits; char* fru_text; int error_data_length; scalar_t__ error_severity; scalar_t__ section_type; scalar_t__ fru_id; } ;
typedef int guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct acpi_hest_generic_status* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,void*,int ) ;
 int FUNC_3 (int *,struct acpi_hest_generic_status*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct cper_sec_mem_err*,int ,int const*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_8, unsigned long VAR_9,
   void *VAR_10)
{
 struct mce *VAR_11 = (struct mce *)VAR_10;
 int VAR_12 = VAR_11->bank;
 int VAR_13 = VAR_11->extcpu;
 struct acpi_hest_generic_status *VAR_14, *VAR_15;
 struct acpi_hest_generic_data *VAR_16;
 const guid_t *VAR_17 = &VAR_7;
 char *VAR_18 = "";
 guid_t *VAR_19;
 static u32 VAR_20;

 VAR_14 = FUNC_0(VAR_13, VAR_12);
 if (VAR_14 == ((void*)0))
  return VAR_4;

 FUNC_2(VAR_6, (void *)VAR_14, VAR_3);

 VAR_14->block_status = 0;

 VAR_15 = (struct acpi_hest_generic_status *)VAR_6;

 if (!FUNC_4()) {
  FUNC_3(((void*)0), VAR_15, VAR_13);
  goto out;
 }


 VAR_20++;
 VAR_16 = (struct acpi_hest_generic_data *)(VAR_15 + 1);
 if (VAR_16->validation_bits & VAR_1)
  VAR_17 = (guid_t *)VAR_16->fru_id;
 if (VAR_16->validation_bits & VAR_2)
  VAR_18 = VAR_16->fru_text;
 VAR_19 = (guid_t *)VAR_16->section_type;
 if (FUNC_1(VAR_19, &VAR_0)) {
  struct cper_sec_mem_err *VAR_21 = (void *)(VAR_16 + 1);
  if (VAR_16->error_data_length >= sizeof(*VAR_21))
   FUNC_5(VAR_21, VAR_20, VAR_17, VAR_18,
            (u8)VAR_16->error_severity);
 }

out:
 return VAR_5;
}
