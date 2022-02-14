
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lineevent_state {int eflags; int wait; int events; int desc; scalar_t__ timestamp; } ;
struct gpioevent_data {void* id; scalar_t__ timestamp; } ;
typedef int irqreturn_t ;
typedef int ge ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct gpioevent_data) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct gpioevent_data*,int ,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct lineevent_state *VAR_9 = VAR_8;
 struct gpioevent_data VAR_10;
 int VAR_11;


 FUNC_3(&VAR_10, 0, sizeof(VAR_10));





 if (!VAR_9->timestamp)
  VAR_10.timestamp = FUNC_2();
 else
  VAR_10.timestamp = VAR_9->timestamp;

 if (VAR_9->eflags & VAR_4
     && VAR_9->eflags & VAR_3) {
  int VAR_12 = FUNC_0(VAR_9->desc);
  if (VAR_12)

   VAR_10.id = VAR_2;
  else

   VAR_10.id = VAR_1;
 } else if (VAR_9->eflags & VAR_4) {

  VAR_10.id = VAR_2;
 } else if (VAR_9->eflags & VAR_3) {

  VAR_10.id = VAR_1;
 } else {
  return VAR_6;
 }

 VAR_11 = FUNC_1(&VAR_9->events, VAR_10);
 if (VAR_11)
  FUNC_4(&VAR_9->wait, VAR_0);

 return VAR_5;
}
