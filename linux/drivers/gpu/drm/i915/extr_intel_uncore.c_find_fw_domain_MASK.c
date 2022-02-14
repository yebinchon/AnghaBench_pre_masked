
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int fw_domains; int fw_domains_table_entries; int fw_domains_table; } ;
struct intel_forcewake_range {int domains; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 struct intel_forcewake_range* FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static enum forcewake_domains
FUNC_2(struct intel_uncore *VAR_2, u32 VAR_3)
{
 const struct intel_forcewake_range *VAR_4;

 VAR_4 = FUNC_0(VAR_3,
   VAR_2->fw_domains_table,
   VAR_2->fw_domains_table_entries,
   VAR_1);

 if (!VAR_4)
  return 0;






 if (VAR_4->domains == VAR_0)
  return VAR_2->fw_domains;

 FUNC_1(VAR_4->domains & ~VAR_2->fw_domains,
      "Uninitialized forcewake domain(s) 0x%x accessed at 0x%x\n",
      VAR_4->domains & ~VAR_2->fw_domains, VAR_3);

 return VAR_4->domains;
}
