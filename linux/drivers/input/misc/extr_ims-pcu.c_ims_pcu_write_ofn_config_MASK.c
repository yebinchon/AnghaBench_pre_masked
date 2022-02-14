
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ims_pcu {scalar_t__ cmd_buf; } ;
typedef scalar_t__ s16 ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ims_pcu*,int ,int **,int) ;

__attribute__((used)) static int FUNC_2(struct ims_pcu *VAR_3, u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6[] = { VAR_4, VAR_5 };
 int VAR_7;
 s16 VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_2,
     &VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return VAR_7;

 VAR_8 = (s16)FUNC_0(VAR_3->cmd_buf + VAR_1);
 if (VAR_8 < 0)
  return -VAR_0;

 return 0;
}
