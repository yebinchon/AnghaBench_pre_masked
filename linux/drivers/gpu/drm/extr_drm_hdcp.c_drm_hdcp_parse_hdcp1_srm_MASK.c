
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hdcp_srm_header {int reserved; int srm_gen_no; int srm_version; int srm_id; } ;
struct TYPE_2__ {int revoked_ksv_cnt; int revoked_ksv_list; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*,int ,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_9(const u8 *VAR_7, size_t VAR_8)
{
 struct hdcp_srm_header *VAR_9;
 u32 VAR_10, VAR_11;

 if (VAR_8 < (sizeof(struct hdcp_srm_header) +
     VAR_1 + VAR_0)) {
  FUNC_1("Invalid blob length\n");
  return -VAR_3;
 }

 VAR_9 = (struct hdcp_srm_header *)VAR_7;
 FUNC_0("SRM ID: 0x%x, SRM Ver: 0x%x, SRM Gen No: 0x%x\n",
    VAR_9->srm_id,
    FUNC_3(VAR_9->srm_version), VAR_9->srm_gen_no);

 FUNC_2(VAR_9->reserved);

 VAR_7 = VAR_7 + sizeof(*VAR_9);
 VAR_10 = FUNC_6(VAR_7);
 if (VAR_8 < (sizeof(struct hdcp_srm_header) + VAR_10) ||
     VAR_10 < (VAR_1 +
     VAR_0)) {
  FUNC_1("Invalid blob length or vrl length\n");
  return -VAR_3;
 }


 VAR_10 -= (VAR_1 +
         VAR_0);

 if (!VAR_10) {
  FUNC_1("No vrl found\n");
  return -VAR_3;
 }

 VAR_7 += VAR_1;
 VAR_11 = FUNC_4(VAR_7, VAR_10);
 if (!VAR_11) {
  FUNC_0("Revoked KSV count is 0\n");
  return VAR_8;
 }

 FUNC_8(VAR_6->revoked_ksv_list);
 VAR_6->revoked_ksv_list = FUNC_7(VAR_11, VAR_2,
          VAR_5);
 if (!VAR_6->revoked_ksv_list) {
  FUNC_1("Out of Memory\n");
  return -VAR_4;
 }

 if (FUNC_5(VAR_7, VAR_6->revoked_ksv_list,
          VAR_10) != VAR_11) {
  VAR_6->revoked_ksv_cnt = 0;
  FUNC_8(VAR_6->revoked_ksv_list);
  return -VAR_3;
 }

 VAR_6->revoked_ksv_cnt = VAR_11;
 return VAR_8;
}
