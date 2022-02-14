
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmbus_channel_offer_channel {scalar_t__ is_dedicated_interrupt; scalar_t__ monitorid; int connection_id; } ;
struct vmbus_channel {int is_dedicated_interrupt; int monitor_grp; int monitor_bit; int offermsg; int sig_event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct vmbus_channel_offer_channel*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct vmbus_channel *VAR_3,
          struct vmbus_channel_offer_channel *VAR_4)
{



 VAR_3->sig_event = VAR_1;

 if (VAR_2 != VAR_0) {
  VAR_3->is_dedicated_interrupt =
    (VAR_4->is_dedicated_interrupt != 0);
  VAR_3->sig_event = VAR_4->connection_id;
 }

 FUNC_0(&VAR_3->offermsg, VAR_4,
        sizeof(struct vmbus_channel_offer_channel));
 VAR_3->monitor_grp = (u8)VAR_4->monitorid / 32;
 VAR_3->monitor_bit = (u8)VAR_4->monitorid % 32;
}
