
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ringbuffer_pagecount; int * ringbuffer_page; int inbound; int outbound; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vmbus_channel *VAR_1)
{
 FUNC_2(&VAR_1->outbound);
 FUNC_2(&VAR_1->inbound);

 if (VAR_1->ringbuffer_page) {
  FUNC_0(VAR_1->ringbuffer_page,
        FUNC_1(VAR_1->ringbuffer_pagecount
           << VAR_0));
  VAR_1->ringbuffer_page = ((void*)0);
 }
}
