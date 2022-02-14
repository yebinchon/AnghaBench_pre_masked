
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_sched_pipe {int error; } ;
struct lima_ip {struct lima_device* dev; } ;
struct lima_device {int dev; struct lima_sched_pipe* pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct lima_ip *VAR_5, u32 VAR_6)
{
 struct lima_device *VAR_7 = VAR_5->dev;
 struct lima_sched_pipe *VAR_8 = VAR_7->pipe + VAR_4;

 if (VAR_6 & VAR_2) {
  u32 VAR_9 = FUNC_1(VAR_3);

  FUNC_0(VAR_7->dev, "pp error irq state=%x status=%x\n",
   VAR_6, VAR_9);

  VAR_8->error = 1;


  FUNC_2(VAR_1, 0);
 }

 FUNC_2(VAR_0, VAR_6);
}
