
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_sched_pipe {int error; } ;
struct lima_ip {struct lima_device* dev; } ;
struct lima_device {int dev; struct lima_sched_pipe* pipe; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_11 ;
 int FUNC_3 (struct lima_sched_pipe*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_12, void *VAR_13)
{
 struct lima_ip *VAR_14 = VAR_13;
 struct lima_device *VAR_15 = VAR_14->dev;
 struct lima_sched_pipe *VAR_16 = VAR_15->pipe + VAR_11;
 u32 VAR_17 = FUNC_1(VAR_4);
 u32 VAR_18 = FUNC_1(VAR_8);
 bool VAR_19 = 0;


 if (!VAR_17)
  return VAR_1;

 if (VAR_17 & VAR_5) {
  FUNC_0(VAR_15->dev, "gp error irq state=%x status=%x\n",
   VAR_17, VAR_18);


  FUNC_2(VAR_3, 0);

  VAR_16->error = 1;
  VAR_19 = 1;
 } else {
  bool VAR_20 = VAR_17 & (VAR_7 |
          VAR_6);
  bool VAR_21 = VAR_18 & (VAR_10 |
     VAR_9);
  VAR_19 = VAR_20 && !VAR_21;
 }

 FUNC_2(VAR_2, VAR_17);

 if (VAR_19)
  FUNC_3(VAR_16);

 return VAR_0;
}
