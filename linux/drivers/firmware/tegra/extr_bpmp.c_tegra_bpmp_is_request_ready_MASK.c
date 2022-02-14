
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_ops {int (* is_request_ready ) (struct tegra_bpmp_channel*) ;} ;
struct tegra_bpmp_channel {int dummy; } ;


 struct tegra_bpmp_ops* FUNC_0 (struct tegra_bpmp_channel*) ;
 int FUNC_1 (struct tegra_bpmp_channel*) ;

__attribute__((used)) static bool FUNC_2(struct tegra_bpmp_channel *VAR_0)
{
 const struct tegra_bpmp_ops *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->is_request_ready(VAR_0);
}
