
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ims_pcu {int * cmd_buf; } ;
typedef scalar_t__ s16 ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ims_pcu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ims_pcu *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 int VAR_6;
 s16 VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_1,
     &VAR_4, sizeof(VAR_4));
 if (VAR_6)
  return VAR_6;

 VAR_7 = (s16)FUNC_0(VAR_3->cmd_buf + VAR_2);
 if (VAR_7 < 0)
  return -VAR_0;


 *VAR_5 = VAR_3->cmd_buf[VAR_2];
 return 0;
}
