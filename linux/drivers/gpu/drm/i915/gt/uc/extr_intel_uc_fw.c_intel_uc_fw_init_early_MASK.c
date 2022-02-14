
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_uc_fw {int type; scalar_t__* path; scalar_t__* status; } ;
typedef enum intel_uc_fw_type { ____Placeholder_intel_uc_fw_type } intel_uc_fw_type ;
typedef enum intel_platform { ____Placeholder_intel_platform } intel_platform ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct intel_uc_fw*,int,int ) ;
 int FUNC_3 (struct intel_uc_fw*) ;
 int FUNC_4 (struct intel_uc_fw*,int ) ;

void FUNC_5(struct intel_uc_fw *VAR_4,
       enum intel_uc_fw_type VAR_5, bool VAR_6,
       enum intel_platform VAR_7, u8 VAR_8)
{




 FUNC_0(VAR_3);
 FUNC_1(VAR_4->status);
 FUNC_1(VAR_4->path);

 VAR_4->type = VAR_5;

 if (VAR_6) {
  FUNC_2(VAR_4, VAR_7, VAR_8);
  FUNC_3(VAR_4);
 }

 FUNC_4(VAR_4, VAR_4->path ? *VAR_4->path ?
      VAR_2 :
      VAR_0 :
      VAR_1);
}
