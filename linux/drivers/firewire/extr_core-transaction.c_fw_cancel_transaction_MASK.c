
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_transaction {int packet; } ;
struct fw_card {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* cancel_packet ) (struct fw_card*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fw_transaction*,struct fw_card*,int ) ;
 scalar_t__ FUNC_1 (struct fw_card*,int *) ;

int FUNC_2(struct fw_card *VAR_1,
     struct fw_transaction *VAR_2)
{






 if (VAR_1->driver->cancel_packet(VAR_1, &VAR_2->packet) == 0)
  return 0;






 return FUNC_0(VAR_2, VAR_1, VAR_0);
}
