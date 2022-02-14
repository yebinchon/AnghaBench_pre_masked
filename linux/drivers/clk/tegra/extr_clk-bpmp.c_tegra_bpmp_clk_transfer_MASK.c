
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ret; int size; int data; } ;
struct TYPE_6__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {int cmd_and_id; TYPE_4__ rx; TYPE_2__ tx; int mrq; } ;
struct TYPE_7__ {int size; int data; } ;
struct TYPE_5__ {int size; int data; } ;
struct tegra_bpmp_clk_message {int cmd; int id; TYPE_3__ rx; TYPE_1__ tx; } ;
struct tegra_bpmp {int dummy; } ;
struct mrq_clk_request {int cmd_and_id; TYPE_4__ rx; TYPE_2__ tx; int mrq; } ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_2 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_3(struct tegra_bpmp *VAR_2,
       const struct tegra_bpmp_clk_message *VAR_3)
{
 struct mrq_clk_request VAR_4;
 struct tegra_bpmp_message VAR_5;
 void *VAR_6 = &VAR_4;
 int VAR_7;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd_and_id = (VAR_3->cmd << 24) | VAR_3->id;
 FUNC_0(VAR_6 + 4, VAR_3->tx.data, VAR_3->tx.size);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.mrq = VAR_1;
 VAR_5.tx.data = &VAR_4;
 VAR_5.tx.size = sizeof(VAR_4);
 VAR_5.rx.data = VAR_3->rx.data;
 VAR_5.rx.size = VAR_3->rx.size;

 VAR_7 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_5.rx.ret < 0)
  return -VAR_0;

 return 0;
}
