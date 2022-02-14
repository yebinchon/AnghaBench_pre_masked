
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_bpmp_channel {unsigned int index; struct tegra_bpmp* bpmp; int completion; void* ob; void* ib; } ;
struct tegra_bpmp {int dev; struct tegra210_bpmp* priv; } ;
struct tegra210_bpmp {scalar_t__ atomics; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct tegra_bpmp_channel *VAR_4,
          struct tegra_bpmp *VAR_5,
          unsigned int VAR_6)
{
 struct tegra210_bpmp *VAR_7 = VAR_5->priv;
 u32 VAR_8;
 void *VAR_9;


 FUNC_4(VAR_6 << VAR_2 | VAR_1,
        VAR_7->atomics + VAR_3);
 VAR_8 = FUNC_3(VAR_7->atomics + FUNC_0(VAR_6));

 VAR_9 = FUNC_1(VAR_5->dev, VAR_8, 0x80);
 if (!VAR_9)
  return -VAR_0;

 VAR_4->ib = VAR_9;
 VAR_4->ob = VAR_9;
 VAR_4->index = VAR_6;
 FUNC_2(&VAR_4->completion);
 VAR_4->bpmp = VAR_5;

 return 0;
}
