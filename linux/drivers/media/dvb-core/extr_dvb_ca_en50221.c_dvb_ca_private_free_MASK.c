
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct dvb_ca_private {unsigned int slot_count; struct dvb_ca_private* slot_info; TYPE_1__ rx_buffer; int dvbdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dvb_ca_private*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dvb_ca_private *VAR_0)
{
 unsigned int VAR_1;

 FUNC_0(VAR_0->dvbdev);
 for (VAR_1 = 0; VAR_1 < VAR_0->slot_count; VAR_1++)
  FUNC_2(VAR_0->slot_info[VAR_1].rx_buffer.data);

 FUNC_1(VAR_0->slot_info);
 FUNC_1(VAR_0);
}
