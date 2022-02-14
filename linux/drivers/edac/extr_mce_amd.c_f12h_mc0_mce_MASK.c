
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static bool FUNC_4(u16 VAR_2, u8 VAR_3)
{
 bool VAR_4 = 0;

 if (FUNC_1(VAR_2)) {
  u8 VAR_5 = FUNC_0(VAR_2);
  VAR_4 = 1;

  if (VAR_5 == VAR_1)
   FUNC_3("during L1 linefill from L2.\n");
  else if (VAR_5 == VAR_0)
   FUNC_3("Data/Tag %s error.\n", FUNC_2(VAR_2));
  else
   VAR_4 = 0;
 }
 return VAR_4;
}
