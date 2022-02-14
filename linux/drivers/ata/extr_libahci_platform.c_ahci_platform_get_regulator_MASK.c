
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct regulator {int dummy; } ;
struct device {int dummy; } ;
struct ahci_host_priv {struct regulator** target_pwrs; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 struct regulator* FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct ahci_host_priv *VAR_0, u32 VAR_1,
    struct device *VAR_2)
{
 struct regulator *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_2, "target");

 if (!FUNC_0(VAR_3))
  VAR_0->target_pwrs[VAR_1] = VAR_3;
 else
  VAR_4 = FUNC_1(VAR_3);

 return VAR_4;
}
