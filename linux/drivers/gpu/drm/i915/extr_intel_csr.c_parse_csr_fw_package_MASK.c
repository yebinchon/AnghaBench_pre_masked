
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct stepping_info {int stepping; } ;
struct intel_package_header {int header_ver; int header_len; size_t num_entries; } ;
struct intel_fw_info {int dummy; } ;
struct intel_csr {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (struct intel_fw_info const*,size_t,struct stepping_info const*,int) ;

__attribute__((used)) static u32
FUNC_3(struct intel_csr *VAR_3,
       const struct intel_package_header *VAR_4,
       const struct stepping_info *VAR_5,
       size_t VAR_6)
{
 u32 VAR_7 = sizeof(struct intel_package_header);
 u32 VAR_8, VAR_9, VAR_10;
 const struct intel_fw_info *VAR_11;

 if (VAR_6 < VAR_7)
  goto error_truncated;

 if (VAR_4->header_ver == 1) {
  VAR_9 = VAR_1;
 } else if (VAR_4->header_ver == 2) {
  VAR_9 = VAR_2;
 } else {
  FUNC_0("DMC firmware has unknown header version %u\n",
     VAR_4->header_ver);
  return 0;
 }





 VAR_7 += VAR_9 * sizeof(struct intel_fw_info);
 if (VAR_6 < VAR_7)
  goto error_truncated;

 if (VAR_4->header_len * 4 != VAR_7) {
  FUNC_0("DMC firmware has wrong package header length "
     "(%u bytes)\n", VAR_7);
  return 0;
 }

 VAR_8 = VAR_4->num_entries;
 if (FUNC_1(VAR_4->num_entries > VAR_9))
  VAR_8 = VAR_9;

 VAR_11 = (const struct intel_fw_info *)
  ((u8 *)VAR_4 + sizeof(*VAR_4));
 VAR_10 = FUNC_2(VAR_11, VAR_8, VAR_5,
     VAR_4->header_ver);
 if (VAR_10 == VAR_0) {
  FUNC_0("DMC firmware not supported for %c stepping\n",
     VAR_5->stepping);
  return 0;
 }


 return VAR_7 + VAR_10 * 4;

error_truncated:
 FUNC_0("Truncated DMC firmware, refusing.\n");
 return 0;
}
