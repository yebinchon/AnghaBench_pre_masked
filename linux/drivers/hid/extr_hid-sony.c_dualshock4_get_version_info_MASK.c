
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sony_sc {void* fw_version; void* hw_version; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sony_sc *VAR_5)
{
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_0, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_5->hdev, 0xA3, VAR_6,
     VAR_0,
     VAR_3,
     VAR_4);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 VAR_5->hw_version = FUNC_0(&VAR_6[35]);
 VAR_5->fw_version = FUNC_0(&VAR_6[41]);

 FUNC_2(VAR_6);
 return 0;
}
