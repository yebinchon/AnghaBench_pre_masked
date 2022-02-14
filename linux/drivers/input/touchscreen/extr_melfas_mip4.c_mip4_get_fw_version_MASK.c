
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mip4_ts {int fw_version; } ;
typedef int cmd ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct mip4_ts*,int *,int,int *,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct mip4_ts *VAR_2)
{
 u8 VAR_3[] = { VAR_0, VAR_1 };
 u8 VAR_4[sizeof(VAR_2->fw_version)];
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), VAR_4, sizeof(VAR_4));
 if (VAR_5) {
  FUNC_0(&VAR_2->fw_version, 0xff, sizeof(VAR_2->fw_version));
  return VAR_5;
 }

 FUNC_2(VAR_4, &VAR_2->fw_version);

 return 0;
}
