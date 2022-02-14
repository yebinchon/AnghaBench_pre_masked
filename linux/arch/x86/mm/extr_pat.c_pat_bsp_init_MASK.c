
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(u64 VAR_3)
{
 u64 VAR_4;

 if (!FUNC_1(VAR_1)) {
  FUNC_2("PAT not supported by CPU.");
  return;
 }

 FUNC_3(VAR_0, VAR_4);
 if (!VAR_4) {
  FUNC_2("PAT MSR is 0, disabled.");
  return;
 }

 FUNC_4(VAR_0, VAR_3);
 VAR_2 = 1;

 FUNC_0(VAR_3);
}
