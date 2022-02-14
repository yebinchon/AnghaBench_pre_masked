
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {unsigned int cluster_id; TYPE_1__ tx; int mrq; int addr; } ;
struct tegra_bpmp {int dev; } ;
struct platform_device {int dev; } ;
struct mrq_cpu_vhint_request {unsigned int cluster_id; TYPE_1__ tx; int mrq; int addr; } ;
struct cpufreq_frequency_table {int driver_data; scalar_t__ frequency; } ;
struct cpu_vhint_data {int vfloor; int vceil; scalar_t__* ndiv; scalar_t__ ndiv_min; scalar_t__ ndiv_max; scalar_t__ ref_clk_hz; scalar_t__ pdiv; scalar_t__ mdiv; } ;
typedef int req ;
typedef int msg ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cpufreq_frequency_table* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct cpufreq_frequency_table* FUNC_1 (int *,int,int,int ) ;
 void* FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ,int,void*,int ) ;
 int FUNC_4 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_5 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static struct cpufreq_frequency_table *FUNC_6(
 struct platform_device *VAR_6, struct tegra_bpmp *VAR_7,
 unsigned int VAR_8)
{
 struct cpufreq_frequency_table *VAR_9;
 struct mrq_cpu_vhint_request VAR_10;
 struct tegra_bpmp_message VAR_11;
 struct cpu_vhint_data *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 dma_addr_t VAR_17;
 void *VAR_18;

 VAR_18 = FUNC_2(VAR_7->dev, sizeof(*VAR_12), &VAR_17,
      VAR_4);
 if (!VAR_18)
  return FUNC_0(-VAR_3);

 VAR_12 = (struct cpu_vhint_data *)VAR_18;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.addr = VAR_17;
 VAR_10.cluster_id = VAR_8;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.mrq = VAR_5;
 VAR_11.tx.data = &VAR_10;
 VAR_11.tx.size = sizeof(VAR_10);

 VAR_13 = FUNC_5(VAR_7, &VAR_11);
 if (VAR_13) {
  VAR_9 = FUNC_0(VAR_13);
  goto free;
 }

 for (VAR_14 = VAR_12->vfloor; VAR_14 <= VAR_12->vceil; VAR_14++) {
  u16 VAR_19 = VAR_12->ndiv[VAR_14];

  if (VAR_19 < VAR_12->ndiv_min || VAR_19 > VAR_12->ndiv_max)
   continue;


  if (VAR_14 > 0 && VAR_19 == VAR_12->ndiv[VAR_14 - 1])
   continue;

  VAR_16++;
 }

 VAR_9 = FUNC_1(&VAR_6->dev, VAR_16 + 1, sizeof(*VAR_9),
        VAR_4);
 if (!VAR_9) {
  VAR_9 = FUNC_0(-VAR_3);
  goto free;
 }

 for (VAR_14 = VAR_12->vfloor, VAR_15 = 0; VAR_14 <= VAR_12->vceil; VAR_14++) {
  struct cpufreq_frequency_table *VAR_20;
  u16 VAR_21 = VAR_12->ndiv[VAR_14];
  u32 VAR_22 = 0;

  if (VAR_21 < VAR_12->ndiv_min || VAR_21 > VAR_12->ndiv_max)
   continue;


  if (VAR_14 > 0 && VAR_21 == VAR_12->ndiv[VAR_14 - 1])
   continue;

  VAR_22 |= VAR_14 << VAR_2;
  VAR_22 |= VAR_21 << VAR_1;

  VAR_20 = &VAR_9[VAR_15++];
  VAR_20->driver_data = VAR_22;
  VAR_20->frequency = VAR_12->ref_clk_hz * VAR_21 / VAR_12->pdiv /
   VAR_12->mdiv / 1000;
 }

 VAR_9[VAR_15].frequency = VAR_0;

free:
 FUNC_3(VAR_7->dev, sizeof(*VAR_12), VAR_18, VAR_17);

 return VAR_9;
}
