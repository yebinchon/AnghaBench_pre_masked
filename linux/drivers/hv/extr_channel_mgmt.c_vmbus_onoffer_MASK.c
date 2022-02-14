
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel_offer_channel {scalar_t__ child_relid; } ;
struct vmbus_channel_message_header {int dummy; } ;
struct vmbus_channel {struct vmbus_channel_offer_channel offermsg; } ;
struct TYPE_2__ {int offer_in_progress; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct vmbus_channel* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct vmbus_channel* FUNC_4 (struct vmbus_channel_offer_channel*) ;
 scalar_t__ FUNC_5 (struct vmbus_channel_offer_channel*,struct vmbus_channel_offer_channel*,size_t) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int,int,struct vmbus_channel_offer_channel*,size_t,int) ;
 int FUNC_9 (struct vmbus_channel_offer_channel*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 (struct vmbus_channel*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct vmbus_channel*,struct vmbus_channel_offer_channel*) ;

__attribute__((used)) static void FUNC_13(struct vmbus_channel_message_header *VAR_3)
{
 struct vmbus_channel_offer_channel *VAR_4;
 struct vmbus_channel *VAR_5, *VAR_6;
 size_t VAR_7;

 VAR_4 = (struct vmbus_channel_offer_channel *)VAR_3;

 FUNC_9(VAR_4);

 VAR_5 = FUNC_4(VAR_4);

 if (VAR_5 != ((void*)0)) {
  FUNC_2(&VAR_2.offer_in_progress);
  FUNC_0(VAR_5->offermsg.child_relid != VAR_1);

  VAR_5->offermsg.child_relid = VAR_4->child_relid;

  VAR_7 = sizeof(*VAR_4);
  if (FUNC_5(VAR_4, &VAR_5->offermsg, VAR_7) == 0) {
   FUNC_3();
   return;
  }







  FUNC_6("vmbus offer changed: relid=%d\n",
    VAR_4->child_relid);

  FUNC_8("Old vmbus offer: ", VAR_0,
         16, 4, &VAR_5->offermsg, VAR_7,
         0);
  FUNC_8("New vmbus offer: ", VAR_0,
         16, 4, VAR_4, VAR_7, 0);


  FUNC_12(VAR_5, VAR_4);

  FUNC_3();

  return;
 }


 VAR_6 = FUNC_1();
 if (!VAR_6) {
  FUNC_11(VAR_4->child_relid);
  FUNC_2(&VAR_2.offer_in_progress);
  FUNC_7("Unable to allocate channel object\n");
  return;
 }

 FUNC_12(VAR_6, VAR_4);

 FUNC_10(VAR_6);
}
