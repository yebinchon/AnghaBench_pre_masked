
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct intel_dmc_header_v3 {unsigned int* mmioaddr; unsigned int* mmiodata; unsigned int mmio_count; } ;
struct intel_dmc_header_v1 {unsigned int* mmioaddr; unsigned int* mmiodata; unsigned int mmio_count; } ;
struct intel_dmc_header_base {int header_ver; int header_len; int fw_size; } ;
struct intel_csr {unsigned int* mmiodata; unsigned int mmio_count; unsigned int max_fw_size; int dmc_fw_size; int dmc_payload; int * mmioaddr; } ;
typedef scalar_t__ dmc_header ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int FUNC_3 (unsigned int const) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int ,int *,unsigned int) ;

__attribute__((used)) static u32 FUNC_6(struct intel_csr *VAR_5,
       const struct intel_dmc_header_base *VAR_6,
       size_t VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 const u32 *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;
 u8 *VAR_16;

 FUNC_1(FUNC_0(VAR_5->mmioaddr) < VAR_3 ||
       FUNC_0(VAR_5->mmioaddr) < VAR_2);





 if (VAR_7 < sizeof(struct intel_dmc_header_base))
  goto error_truncated;


 if (VAR_6->header_ver == 3) {
  const struct intel_dmc_header_v3 *VAR_17 =
   (const struct intel_dmc_header_v3 *)VAR_6;

  if (VAR_7 < sizeof(struct intel_dmc_header_v3))
   goto error_truncated;

  VAR_12 = VAR_17->mmioaddr;
  VAR_13 = VAR_17->mmiodata;
  VAR_14 = VAR_17->mmio_count;
  VAR_15 = VAR_3;

  VAR_8 = VAR_6->header_len * 4;
  VAR_9 = sizeof(*VAR_17);
 } else if (VAR_6->header_ver == 1) {
  const struct intel_dmc_header_v1 *VAR_18 =
   (const struct intel_dmc_header_v1 *)VAR_6;

  if (VAR_7 < sizeof(struct intel_dmc_header_v1))
   goto error_truncated;

  VAR_12 = VAR_18->mmioaddr;
  VAR_13 = VAR_18->mmiodata;
  VAR_14 = VAR_18->mmio_count;
  VAR_15 = VAR_2;
  VAR_8 = VAR_6->header_len;
  VAR_9 = sizeof(*VAR_18);
 } else {
  FUNC_2("Unknown DMC fw header version: %u\n",
     VAR_6->header_ver);
  return 0;
 }

 if (VAR_8 != VAR_9) {
  FUNC_2("DMC firmware has wrong dmc header length "
     "(%u bytes)\n", VAR_8);
  return 0;
 }


 if (VAR_14 > VAR_15) {
  FUNC_2("DMC firmware has wrong mmio count %u\n", VAR_14);
  return 0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
  if (VAR_12[VAR_11] < VAR_1 ||
      VAR_12[VAR_11] > VAR_0) {
   FUNC_2("DMC firmware has wrong mmio address 0x%x\n",
      VAR_12[VAR_11]);
   return 0;
  }
  VAR_5->mmioaddr[VAR_11] = FUNC_3(VAR_12[VAR_11]);
  VAR_5->mmiodata[VAR_11] = VAR_13[VAR_11];
 }
 VAR_5->mmio_count = VAR_14;

 VAR_7 -= VAR_8;


 VAR_10 = VAR_6->fw_size * 4;
 if (VAR_7 < VAR_10)
  goto error_truncated;

 if (VAR_10 > VAR_5->max_fw_size) {
  FUNC_2("DMC FW too big (%u bytes)\n", VAR_10);
  return 0;
 }
 VAR_5->dmc_fw_size = VAR_6->fw_size;

 VAR_5->dmc_payload = FUNC_4(VAR_10, VAR_4);
 if (!VAR_5->dmc_payload) {
  FUNC_2("Memory allocation failed for dmc payload\n");
  return 0;
 }

 VAR_16 = (u8 *)(VAR_6) + VAR_8;
 FUNC_5(VAR_5->dmc_payload, VAR_16, VAR_10);

 return VAR_8 + VAR_10;

error_truncated:
 FUNC_2("Truncated DMC firmware, refusing.\n");
 return 0;
}
