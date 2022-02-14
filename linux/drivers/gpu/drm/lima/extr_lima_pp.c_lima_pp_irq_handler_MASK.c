
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_sched_pipe {int task; } ;
struct lima_ip {struct lima_device* dev; } ;
struct lima_device {struct lima_sched_pipe* pipe; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct lima_ip*,int ) ;
 int FUNC_2 (struct lima_sched_pipe*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct lima_ip *VAR_6 = VAR_5;
 struct lima_device *VAR_7 = VAR_6->dev;
 struct lima_sched_pipe *VAR_8 = VAR_7->pipe + VAR_3;
 u32 VAR_9 = FUNC_3(VAR_2);


 if (!VAR_9)
  return VAR_1;

 FUNC_1(VAR_6, VAR_9);

 if (FUNC_0(&VAR_8->task))
  FUNC_2(VAR_8);

 return VAR_0;
}
