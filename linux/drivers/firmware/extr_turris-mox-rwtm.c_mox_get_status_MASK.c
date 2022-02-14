
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum mbox_cmd { ____Placeholder_mbox_cmd } mbox_cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(enum mbox_cmd VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_4) != VAR_3 ||
     FUNC_1(VAR_4) != VAR_2)
  return -VAR_0;
 else if (FUNC_1(VAR_4) == VAR_1)
  return -(int)FUNC_2(VAR_4);
 else
  return FUNC_2(VAR_4);
}
