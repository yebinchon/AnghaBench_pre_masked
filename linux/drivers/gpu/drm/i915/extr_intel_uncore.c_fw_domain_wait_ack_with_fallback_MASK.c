
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore_forcewake_domain {int id; } ;
typedef enum ack_type { ____Placeholder_ack_type } ack_type ;


 int const VAR_0 ;
 int FUNC_0 (char*,int ,char*,int const,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const FUNC_1 (struct intel_uncore_forcewake_domain const*) ;
 int FUNC_2 (struct intel_uncore_forcewake_domain const*,int ) ;
 int FUNC_3 (struct intel_uncore_forcewake_domain const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct intel_uncore_forcewake_domain const*,int ) ;
 int FUNC_7 (struct intel_uncore_forcewake_domain const*,int ) ;

__attribute__((used)) static int
FUNC_8(const struct intel_uncore_forcewake_domain *VAR_4,
     const enum ack_type VAR_5)
{
 const u32 VAR_6 = VAR_2;
 const u32 VAR_7 = VAR_5 == VAR_0 ? VAR_6 : 0;
 unsigned int VAR_8;
 bool VAR_9;
 VAR_8 = 1;
 do {
  FUNC_6(VAR_4, VAR_3);

  FUNC_3(VAR_4, VAR_3);

  FUNC_5(10 * VAR_8);
  FUNC_7(VAR_4, VAR_3);

  VAR_9 = (FUNC_1(VAR_4) & VAR_6) == VAR_7;

  FUNC_2(VAR_4, VAR_3);
 } while (!VAR_9 && VAR_8++ < 10);

 FUNC_0("%s had to use fallback to %s ack, 0x%x (passes %u)\n",
    FUNC_4(VAR_4->id),
    VAR_5 == VAR_0 ? "set" : "clear",
    FUNC_1(VAR_4),
    VAR_8);

 return VAR_9 ? 0 : -VAR_1;
}
