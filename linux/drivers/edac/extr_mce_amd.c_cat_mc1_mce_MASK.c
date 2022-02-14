
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(u16 VAR_3, u8 VAR_4)
{
 u8 VAR_5 = FUNC_1(VAR_3);
 bool VAR_6 = 1;

 if (!FUNC_0(VAR_3))
  return 0;

 if (FUNC_2(VAR_3) != VAR_2)
  return 0;

 if (VAR_5 == VAR_0)
  FUNC_3("Data/tag array parity error for a tag hit.\n");
 else if (VAR_5 == VAR_1)
  FUNC_3("Tag error during snoop/victimization.\n");
 else if (VAR_4 == 0x0)
  FUNC_3("Tag parity error from victim castout.\n");
 else if (VAR_4 == 0x2)
  FUNC_3("Microcode patch RAM parity error.\n");
 else
  VAR_6 = 0;

 return VAR_6;
}
