
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int release; struct TYPE_5__* data; struct TYPE_5__* next; int to; int length; } ;
typedef TYPE_1__ packetQueue_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(void)
{
 packetQueue_t *VAR_1;
 int VAR_2;

 while(VAR_0) {
  VAR_2 = FUNC_0();
  if(VAR_0->release >= VAR_2)
   break;
  FUNC_1(VAR_0->length, VAR_0->data,
   VAR_0->to);
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_2(VAR_1->data);
  FUNC_2(VAR_1);
 }
}
