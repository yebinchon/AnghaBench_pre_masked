
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int (* open ) (struct iss_net_private*) ;} ;
struct iss_net_private {int lock; scalar_t__ timer_val; int timer; int opened_list; TYPE_1__ tp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct iss_net_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iss_net_private*) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5)
{
 struct iss_net_private *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 FUNC_5(&VAR_6->lock);

 VAR_7 = VAR_6->tp.open(VAR_6);
 if (VAR_7 < 0)
  goto out;

 FUNC_4(VAR_5);





 while ((VAR_7 = FUNC_0(VAR_5)) > 0)
  ;

 FUNC_6(&VAR_6->lock);
 FUNC_5(&VAR_4);
 FUNC_1(&VAR_6->opened_list, &VAR_3);
 FUNC_6(&VAR_4);
 FUNC_5(&VAR_6->lock);

 FUNC_8(&VAR_6->timer, VAR_1, 0);
 VAR_6->timer_val = VAR_0;
 FUNC_2(&VAR_6->timer, VAR_2 + VAR_6->timer_val);

out:
 FUNC_6(&VAR_6->lock);
 return VAR_7;
}
