
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdei_event {int dummy; } ;
typedef int sdei_event_callback ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdei_event*) ;
 int FUNC_1 (struct sdei_event*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdei_event*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,...) ;
 struct sdei_event* FUNC_8 (int ,int *,void*) ;
 int FUNC_9 (struct sdei_event*) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_1 ;

int FUNC_11(u32 VAR_2, sdei_event_callback *VAR_3, void *VAR_4)
{
 int VAR_5;
 struct sdei_event *VAR_6;

 FUNC_2(FUNC_4());

 FUNC_5(&VAR_1);
 do {
  if (FUNC_10(VAR_2)) {
   FUNC_7("Event %u already registered\n", VAR_2);
   VAR_5 = -VAR_0;
   break;
  }

  VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4);
  if (FUNC_0(VAR_6)) {
   VAR_5 = FUNC_1(VAR_6);
   FUNC_7("Failed to create event %u: %d\n", VAR_2,
    VAR_5);
   break;
  }

  VAR_5 = FUNC_3(VAR_6);
  if (VAR_5) {
   FUNC_9(VAR_6);
   FUNC_7("Failed to register event %u: %d\n", VAR_2,
    VAR_5);
  }
 } while (0);
 FUNC_6(&VAR_1);

 return VAR_5;
}
