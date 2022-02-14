
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; struct tegra_bpmp_message* data; } ;
struct TYPE_3__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {int challenge; int reply; TYPE_2__ rx; TYPE_1__ tx; int mrq; } ;
struct tegra_bpmp {int dev; } ;
struct mrq_ping_response {int challenge; int reply; TYPE_2__ rx; TYPE_1__ tx; int mrq; } ;
struct mrq_ping_request {int challenge; int reply; TYPE_2__ rx; TYPE_1__ tx; int mrq; } ;
typedef int response ;
typedef int request ;
typedef int msg ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_7 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_8(struct tegra_bpmp *VAR_1)
{
 struct mrq_ping_response VAR_2;
 struct mrq_ping_request VAR_3;
 struct tegra_bpmp_message VAR_4;
 unsigned long VAR_5;
 ktime_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_6(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.challenge = 1;

 FUNC_6(&VAR_2, 0, sizeof(VAR_2));

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.mrq = VAR_0;
 VAR_4.tx.data = &VAR_3;
 VAR_4.tx.size = sizeof(VAR_3);
 VAR_4.rx.data = &VAR_2;
 VAR_4.rx.size = sizeof(VAR_2);

 FUNC_5(VAR_5);
 VAR_6 = FUNC_1();
 VAR_8 = FUNC_7(VAR_1, &VAR_4);
 VAR_7 = FUNC_1();
 FUNC_4(VAR_5);

 if (!VAR_8)
  FUNC_0(VAR_1->dev,
   "ping ok: challenge: %u, response: %u, time: %lld\n",
   VAR_3.challenge, VAR_2.reply,
   FUNC_3(FUNC_2(VAR_7, VAR_6)));

 return VAR_8;
}
