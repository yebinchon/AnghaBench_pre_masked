
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_sched_pipe {int num_processor; struct lima_ip** processor; } ;
struct lima_ip {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (struct lima_ip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct lima_sched_pipe *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_processor; VAR_3++) {
  struct lima_ip *VAR_4 = VAR_2->processor[VAR_3];

  FUNC_0(VAR_4->dev->dev, "pp task error %d int_state=%x status=%x\n",
   VAR_3, FUNC_2(VAR_0), FUNC_2(VAR_1));

  FUNC_1(VAR_4);
 }
}
