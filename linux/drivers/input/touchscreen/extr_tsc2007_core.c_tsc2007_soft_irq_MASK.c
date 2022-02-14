
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tsc2007 {scalar_t__ max_rt; int (* clear_penirq ) () ;TYPE_1__* client; int poll_period; int stopped; int wait; int get_pendown_state; int mlock; struct input_dev* input; } ;
struct ts_event {scalar_t__ x; scalar_t__ y; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct tsc2007*,struct ts_event*) ;
 scalar_t__ FUNC_8 (struct tsc2007*) ;
 int FUNC_9 (struct tsc2007*,struct ts_event*) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_5, void *VAR_6)
{
 struct tsc2007 *VAR_7 = VAR_6;
 struct input_dev *VAR_8 = VAR_7->input;
 struct ts_event VAR_9;
 u32 VAR_10;

 while (!VAR_7->stopped && FUNC_8(VAR_7)) {



  FUNC_4(&VAR_7->mlock);
  FUNC_9(VAR_7, &VAR_9);
  FUNC_5(&VAR_7->mlock);

  VAR_10 = FUNC_7(VAR_7, &VAR_9);

  if (!VAR_10 && !VAR_7->get_pendown_state) {





   break;
  }

  if (VAR_10 <= VAR_7->max_rt) {
   FUNC_0(&VAR_7->client->dev,
    "DOWN point(%4d,%4d), resistance (%4u)\n",
    VAR_9.x, VAR_9.y, VAR_10);

   VAR_10 = VAR_7->max_rt - VAR_10;

   FUNC_2(VAR_8, VAR_3, 1);
   FUNC_1(VAR_8, VAR_1, VAR_9.x);
   FUNC_1(VAR_8, VAR_2, VAR_9.y);
   FUNC_1(VAR_8, VAR_0, VAR_10);

   FUNC_3(VAR_8);

  } else {





   FUNC_0(&VAR_7->client->dev, "ignored pressure %d\n", VAR_10);
  }

  FUNC_10(VAR_7->wait, VAR_7->stopped, VAR_7->poll_period);
 }

 FUNC_0(&VAR_7->client->dev, "UP\n");

 FUNC_2(VAR_8, VAR_3, 0);
 FUNC_1(VAR_8, VAR_0, 0);
 FUNC_3(VAR_8);

 if (VAR_7->clear_penirq)
  VAR_7->clear_penirq();

 return VAR_4;
}
