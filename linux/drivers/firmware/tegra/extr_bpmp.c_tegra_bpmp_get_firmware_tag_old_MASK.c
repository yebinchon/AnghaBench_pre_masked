
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {TYPE_1__ tx; int mrq; int addr; } ;
struct tegra_bpmp {int dev; } ;
struct mrq_query_tag_request {TYPE_1__ tx; int mrq; int addr; } ;
typedef int request ;
typedef int msg ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int ,size_t,int *,int) ;
 int FUNC_1 (int ,size_t,void*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,void*,size_t) ;
 int FUNC_5 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_6 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_7(struct tegra_bpmp *VAR_6, char *VAR_7,
        size_t VAR_8)
{
 struct mrq_query_tag_request VAR_9;
 struct tegra_bpmp_message VAR_10;
 unsigned long VAR_11;
 dma_addr_t VAR_12;
 void *VAR_13;
 int VAR_14;

 if (VAR_8 != VAR_5)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_6->dev, VAR_5, &VAR_12,
      VAR_3 | VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.addr = VAR_12;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.mrq = VAR_4;
 VAR_10.tx.data = &VAR_9;
 VAR_10.tx.size = sizeof(VAR_9);

 FUNC_3(VAR_11);
 VAR_14 = FUNC_6(VAR_6, &VAR_10);
 FUNC_2(VAR_11);

 if (VAR_14 == 0)
  FUNC_4(VAR_7, VAR_13, VAR_5);

 FUNC_1(VAR_6->dev, VAR_5, VAR_13, VAR_12);

 return VAR_14;
}
