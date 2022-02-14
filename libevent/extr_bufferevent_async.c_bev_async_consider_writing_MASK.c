
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent {int enabled; int output; } ;
struct TYPE_3__ {scalar_t__ write_suspended; scalar_t__ connecting; struct bufferevent bev; } ;
struct bufferevent_async {size_t write_in_progress; TYPE_1__ bev; scalar_t__ ok; int write_overlapped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*,int ,int ) ;
 int FUNC_1 (struct bufferevent_async*) ;
 int FUNC_2 (struct bufferevent_async*) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct bufferevent*) ;
 size_t FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,size_t,int *) ;

__attribute__((used)) static void
FUNC_9(struct bufferevent_async *VAR_2)
{
 size_t VAR_3;
 int VAR_4;
 struct bufferevent *VAR_5 = &VAR_2->bev.bev;



 if (VAR_2->write_in_progress || VAR_2->bev.connecting)
  return;
 if (!VAR_2->ok || !(VAR_5->enabled&VAR_1) ||
     !FUNC_7(VAR_5->output)) {
  FUNC_2(VAR_2);
  return;
 }

 VAR_3 = FUNC_7(VAR_5->output);



 VAR_4 = (int)FUNC_5(&VAR_2->bev);
 if (VAR_3 >= (size_t)VAR_4 && VAR_4 >= 0)
  VAR_3 = VAR_4;

 if (VAR_2->bev.write_suspended) {
  FUNC_2(VAR_2);
  return;
 }


 FUNC_6(VAR_5);
 if (FUNC_8(VAR_5->output, VAR_3,
     &VAR_2->write_overlapped)) {
  FUNC_3(VAR_5);
  VAR_2->ok = 0;
  FUNC_0(VAR_5, VAR_0, 0);
 } else {
  VAR_2->write_in_progress = VAR_3;
  FUNC_4(&VAR_2->bev, VAR_3);
  FUNC_1(VAR_2);
 }
}
