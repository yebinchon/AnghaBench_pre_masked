
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_sched_pipe {struct lima_ip** processor; } ;
struct lima_ip {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lima_ip*) ;

__attribute__((used)) static void FUNC_3(struct lima_sched_pipe *VAR_2)
{
 struct lima_ip *VAR_3 = VAR_2->processor[0];

 FUNC_0(VAR_3->dev->dev, "gp task error int_state=%x status=%x\n",
  FUNC_1(VAR_0), FUNC_1(VAR_1));

 FUNC_2(VAR_3);
}
