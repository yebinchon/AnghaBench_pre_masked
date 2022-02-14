
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (char*,int ,int ,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(u64 VAR_0, u32 VAR_1, u32 VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0("PHY read addr = 0x%x physel = %d data = 0x%x %s\n",
  VAR_1, VAR_2, VAR_4, VAR_4 == VAR_3 ? "TRUE" : "FALSE");
}
