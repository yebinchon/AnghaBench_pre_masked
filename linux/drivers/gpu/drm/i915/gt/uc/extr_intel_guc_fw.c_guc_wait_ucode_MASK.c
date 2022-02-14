
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_uncore*,int*) ;
 int FUNC_4 (struct intel_uncore*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct intel_uncore *VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 VAR_8 = FUNC_5(FUNC_3(VAR_6, &VAR_7), 100);
 FUNC_0("GuC status %#x\n", VAR_7);

 if ((VAR_7 & VAR_2) == VAR_3) {
  FUNC_1("GuC firmware signature verification failed\n");
  VAR_8 = -VAR_0;
 }

 if ((VAR_7 & VAR_5) == VAR_4) {
  FUNC_1("GuC firmware exception. EIP: %#x\n",
     FUNC_4(VAR_6, FUNC_2(13)));
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
