
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_channel {TYPE_1__* ib; } ;
struct mrq_ping_response {int reply; } ;
struct mrq_ping_request {int challenge; } ;
typedef int response ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (struct mrq_ping_response*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp_channel*,int ,struct mrq_ping_response*,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0,
           struct tegra_bpmp_channel *VAR_1,
           void *VAR_2)
{
 struct mrq_ping_request *VAR_3;
 struct mrq_ping_response VAR_4;

 VAR_3 = (struct mrq_ping_request *)VAR_1->ib->data;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.reply = VAR_3->challenge << 1;

 FUNC_1(VAR_1, 0, &VAR_4, sizeof(VAR_4));
}
