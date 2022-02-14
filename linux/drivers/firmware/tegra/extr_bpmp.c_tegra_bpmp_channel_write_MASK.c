
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_channel {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct tegra_bpmp_channel*,unsigned int,unsigned long,void const*,size_t) ;
 int FUNC_1 (struct tegra_bpmp_channel*) ;

__attribute__((used)) static ssize_t FUNC_2(struct tegra_bpmp_channel *VAR_0,
     unsigned int VAR_1, unsigned long VAR_2,
     const void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
