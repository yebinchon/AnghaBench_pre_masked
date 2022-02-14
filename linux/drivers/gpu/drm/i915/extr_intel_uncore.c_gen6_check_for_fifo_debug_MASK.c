
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (struct intel_uncore*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool
FUNC_4(struct intel_uncore *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);

 if (FUNC_3(VAR_2)) {
  FUNC_0("GTFIFODBG = 0x08%x\n", VAR_2);
  FUNC_2(VAR_1, VAR_0, VAR_2);
 }

 return VAR_2;
}
