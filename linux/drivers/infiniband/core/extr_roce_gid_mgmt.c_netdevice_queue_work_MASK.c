
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_event_work_cmd {int dummy; } ;
struct netdev_event_work {int work; TYPE_1__* cmds; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* filter_ndev; struct net_device* ndev; scalar_t__ cb; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 struct netdev_event_work* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,struct netdev_event_work_cmd*,int) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct netdev_event_work_cmd *VAR_4,
    struct net_device *VAR_5)
{
 unsigned int VAR_6;
 struct netdev_event_work *VAR_7 =
  FUNC_3(sizeof(*VAR_7), VAR_0);

 if (!VAR_7)
  return VAR_1;

 FUNC_4(VAR_7->cmds, VAR_4, sizeof(VAR_7->cmds));
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7->cmds) && VAR_7->cmds[VAR_6].cb; VAR_6++) {
  if (!VAR_7->cmds[VAR_6].ndev)
   VAR_7->cmds[VAR_6].ndev = VAR_5;
  if (!VAR_7->cmds[VAR_6].filter_ndev)
   VAR_7->cmds[VAR_6].filter_ndev = VAR_5;
  FUNC_2(VAR_7->cmds[VAR_6].ndev);
  FUNC_2(VAR_7->cmds[VAR_6].filter_ndev);
 }
 FUNC_1(&VAR_7->work, VAR_3);

 FUNC_5(VAR_2, &VAR_7->work);

 return VAR_1;
}
