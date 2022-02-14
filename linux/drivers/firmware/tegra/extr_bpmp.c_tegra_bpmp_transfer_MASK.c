
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int ret; int size; int data; } ;
struct TYPE_6__ {int size; int data; } ;
struct tegra_bpmp_message {TYPE_5__ rx; TYPE_1__ tx; int mrq; } ;
struct tegra_bpmp_channel {int completion; } ;
struct tegra_bpmp {TYPE_4__* soc; } ;
struct TYPE_7__ {int timeout; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_9__ {TYPE_3__ channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tegra_bpmp_channel*) ;
 int FUNC_1 (struct tegra_bpmp_channel*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct tegra_bpmp_channel*,int ,int ,int *) ;
 int FUNC_5 (struct tegra_bpmp_message*) ;
 int FUNC_6 (struct tegra_bpmp*) ;
 struct tegra_bpmp_channel* FUNC_7 (struct tegra_bpmp*,int ,int ,int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct tegra_bpmp *VAR_3,
   struct tegra_bpmp_message *VAR_4)
{
 struct tegra_bpmp_channel *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_2(FUNC_3()))
  return -VAR_1;

 if (!FUNC_5(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_7(VAR_3, VAR_4->mrq, VAR_4->tx.data,
         VAR_4->tx.size);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_8(VAR_3->soc->channels.thread.timeout);

 VAR_7 = FUNC_9(&VAR_5->completion, VAR_6);
 if (VAR_7 == 0)
  return -VAR_2;

 return FUNC_4(VAR_5, VAR_4->rx.data, VAR_4->rx.size,
           &VAR_4->rx.ret);
}
