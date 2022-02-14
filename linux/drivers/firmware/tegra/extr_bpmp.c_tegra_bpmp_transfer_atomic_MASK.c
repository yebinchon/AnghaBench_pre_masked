
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ret; int size; int data; } ;
struct TYPE_3__ {int size; int data; } ;
struct tegra_bpmp_message {TYPE_2__ rx; TYPE_1__ tx; int mrq; } ;
struct tegra_bpmp_channel {int dummy; } ;
struct tegra_bpmp {int atomic_tx_lock; struct tegra_bpmp_channel* tx_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tegra_bpmp_channel*,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tegra_bpmp_channel*,int ,int ,int ,int ) ;
 int FUNC_6 (struct tegra_bpmp_message*) ;
 int FUNC_7 (struct tegra_bpmp*) ;
 int FUNC_8 (struct tegra_bpmp_channel*) ;

int FUNC_9(struct tegra_bpmp *VAR_3,
          struct tegra_bpmp_message *VAR_4)
{
 struct tegra_bpmp_channel *VAR_5;
 int VAR_6;

 if (FUNC_0(!FUNC_2()))
  return -VAR_1;

 if (!FUNC_6(VAR_4))
  return -VAR_0;

 VAR_5 = VAR_3->tx_channel;

 FUNC_3(&VAR_3->atomic_tx_lock);

 VAR_6 = FUNC_5(VAR_5, VAR_4->mrq, VAR_2,
           VAR_4->tx.data, VAR_4->tx.size);
 if (VAR_6 < 0) {
  FUNC_4(&VAR_3->atomic_tx_lock);
  return VAR_6;
 }

 FUNC_4(&VAR_3->atomic_tx_lock);

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_5, VAR_4->rx.data, VAR_4->rx.size,
      &VAR_4->rx.ret);
}
