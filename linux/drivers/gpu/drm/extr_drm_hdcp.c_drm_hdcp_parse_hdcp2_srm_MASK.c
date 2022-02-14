
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hdcp_srm_header {int srm_id; scalar_t__ reserved; int srm_gen_no; int srm_version; } ;
struct TYPE_2__ {int revoked_ksv_cnt; int revoked_ksv_list; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int const FUNC_2 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int const*,int) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_8(const u8 *VAR_9, size_t VAR_10)
{
 struct hdcp_srm_header *VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_10 < (sizeof(struct hdcp_srm_header) +
     VAR_2 + VAR_0)) {
  FUNC_1("Invalid blob length\n");
  return -VAR_5;
 }

 VAR_11 = (struct hdcp_srm_header *)VAR_9;
 FUNC_0("SRM ID: 0x%x, SRM Ver: 0x%x, SRM Gen No: 0x%x\n",
    VAR_11->srm_id & VAR_4,
    FUNC_3(VAR_11->srm_version), VAR_11->srm_gen_no);

 if (VAR_11->reserved)
  return -VAR_5;

 VAR_9 = VAR_9 + sizeof(*VAR_11);
 VAR_12 = FUNC_4(VAR_9);

 if (VAR_10 < (sizeof(struct hdcp_srm_header) + VAR_12) ||
     VAR_12 < (VAR_2 +
     VAR_0)) {
  FUNC_1("Invalid blob length or vrl length\n");
  return -VAR_5;
 }


 VAR_12 -= (VAR_2 +
         VAR_0);

 if (!VAR_12) {
  FUNC_1("No vrl found\n");
  return -VAR_5;
 }

 VAR_9 += VAR_2;
 VAR_13 = (*VAR_9 << 2) | FUNC_2(*(VAR_9 + 1));
 if (!VAR_13) {
  FUNC_0("Revoked KSV count is 0\n");
  return VAR_10;
 }

 FUNC_6(VAR_8->revoked_ksv_list);
 VAR_8->revoked_ksv_list = FUNC_5(VAR_13, VAR_3,
          VAR_7);
 if (!VAR_8->revoked_ksv_list) {
  FUNC_1("Out of Memory\n");
  return -VAR_6;
 }

 VAR_14 = VAR_13 * VAR_3;
 VAR_9 += VAR_1;

 FUNC_0("Revoked KSVs: %d\n", VAR_13);
 FUNC_7(VAR_8->revoked_ksv_list, VAR_9, VAR_14);

 VAR_8->revoked_ksv_cnt = VAR_13;
 return VAR_10;
}
