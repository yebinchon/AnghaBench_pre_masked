
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct psb_intel_sdvo {int dummy; } ;


 int FUNC_0 (char*,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct psb_intel_sdvo*) ;
 int * VAR_6 ;
 int FUNC_2 (struct psb_intel_sdvo*,scalar_t__,size_t*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct psb_intel_sdvo *VAR_7,
         void *VAR_8, int VAR_9)
{
 u8 VAR_10 = 5;
 u8 VAR_11;
 int VAR_12;

 FUNC_0("%s: R: ", FUNC_1(VAR_7));
 if (!FUNC_2(VAR_7,
      VAR_4,
      &VAR_11))
  goto log_fail;

 while ((VAR_11 == VAR_0 ||
  VAR_11 == VAR_3) && VAR_10--) {
  FUNC_3(15);
  if (!FUNC_2(VAR_7,
       VAR_4,
       &VAR_11))
   goto log_fail;
 }

 if (VAR_11 <= VAR_1)
  FUNC_0("(%s)", VAR_6[VAR_11]);
 else
  FUNC_0("(??? %d)", VAR_11);

 if (VAR_11 != VAR_2)
  goto log_fail;


 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  if (!FUNC_2(VAR_7,
       VAR_5 + VAR_12,
       &((u8 *)VAR_8)[VAR_12]))
   goto log_fail;
  FUNC_0(" %02X", ((u8 *)VAR_8)[VAR_12]);
 }
 FUNC_0("\n");
 return 1;

log_fail:
 FUNC_0("... failed\n");
 return 0;
}
