
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct listen_ctx {int dummy; } ;
struct chtls_dev {TYPE_1__* lldi; int tids; } ;
struct TYPE_2__ {int * rxq_ids; int * ports; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct listen_ctx*) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (struct chtls_dev*,struct sock*) ;
 scalar_t__ FUNC_4 (int ,int) ;

void FUNC_5(struct chtls_dev *VAR_0, struct sock *VAR_1)
{
 struct listen_ctx *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return;

 VAR_2 = (struct listen_ctx *)FUNC_4(VAR_0->tids, VAR_3);
 FUNC_1(VAR_2);

 FUNC_2(VAR_0->lldi->ports[0], VAR_3,
       VAR_0->lldi->rxq_ids[0], 0);
 FUNC_0(VAR_1);
}
