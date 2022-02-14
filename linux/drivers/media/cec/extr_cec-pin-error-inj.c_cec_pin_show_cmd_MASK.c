
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, u32 VAR_2, u8 VAR_3)
{
 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1, "any,");
 else
  FUNC_0(VAR_1, "0x%02x,", VAR_2);
 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_1, "once ");
  break;
 case 130:
  FUNC_1(VAR_1, "always ");
  break;
 case 128:
  FUNC_1(VAR_1, "toggle ");
  break;
 default:
  FUNC_1(VAR_1, "off ");
  break;
 }
}
