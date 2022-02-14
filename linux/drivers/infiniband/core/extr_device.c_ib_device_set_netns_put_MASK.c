
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int user_ns; } ;
struct TYPE_4__ {scalar_t__ init_port; int disassociate_ucontext; } ;
struct ib_device {int dev; TYPE_1__ ops; } ;
struct TYPE_6__ {TYPE_2__* nsproxy; } ;
struct TYPE_5__ {int net_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int *) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct ib_device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct ib_device*,int ,struct net*) ;

int FUNC_9(struct sk_buff *VAR_5,
       struct ib_device *VAR_6, u32 VAR_7)
{
 struct net *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  goto net_err;
 }

 if (!FUNC_5(VAR_5, VAR_8->user_ns, VAR_0)) {
  VAR_9 = -VAR_2;
  goto ns_err;
 }







 if (!VAR_6->ops.disassociate_ucontext || VAR_6->ops.init_port ||
     VAR_4) {
  VAR_9 = -VAR_1;
  goto ns_err;
 }

 FUNC_2(&VAR_6->dev);
 FUNC_4(VAR_6);
 VAR_9 = FUNC_8(VAR_6, VAR_3->nsproxy->net_ns, VAR_8);
 FUNC_6(&VAR_6->dev);

 FUNC_7(VAR_8);
 return VAR_9;

ns_err:
 FUNC_7(VAR_8);
net_err:
 FUNC_4(VAR_6);
 return VAR_9;
}
