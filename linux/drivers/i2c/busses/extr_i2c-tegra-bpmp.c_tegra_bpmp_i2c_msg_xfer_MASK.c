
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; struct mrq_i2c_response* data; } ;
struct TYPE_5__ {int size; struct mrq_i2c_request* data; } ;
struct tegra_bpmp_message {TYPE_3__ rx; TYPE_2__ tx; int mrq; } ;
struct tegra_bpmp_i2c {int bpmp; int bus; } ;
struct mrq_i2c_response {int dummy; } ;
struct TYPE_4__ {int bus_id; } ;
struct mrq_i2c_request {TYPE_1__ xfer; int cmd; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_message*) ;
 int FUNC_2 (int ,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_3(struct tegra_bpmp_i2c *VAR_2,
       struct mrq_i2c_request *VAR_3,
       struct mrq_i2c_response *VAR_4,
       bool VAR_5)
{
 struct tegra_bpmp_message VAR_6;
 int VAR_7;

 VAR_3->cmd = VAR_0;
 VAR_3->xfer.bus_id = VAR_2->bus;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.mrq = VAR_1;
 VAR_6.tx.data = VAR_3;
 VAR_6.tx.size = sizeof(*VAR_3);
 VAR_6.rx.data = VAR_4;
 VAR_6.rx.size = sizeof(*VAR_4);

 if (VAR_5)
  VAR_7 = FUNC_2(VAR_2->bpmp, &VAR_6);
 else
  VAR_7 = FUNC_1(VAR_2->bpmp, &VAR_6);

 return VAR_7;
}
