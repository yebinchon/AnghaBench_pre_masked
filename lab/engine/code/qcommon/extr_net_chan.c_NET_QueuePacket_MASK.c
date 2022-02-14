
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; struct TYPE_4__* next; scalar_t__ release; int to; void* data; } ;
typedef TYPE_1__ packetQueue_t ;
typedef int netadr_t ;
struct TYPE_5__ {float value; } ;


 int FUNC_0 (void*,void const*,int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3( int VAR_2, const void *VAR_3, netadr_t VAR_4,
 int VAR_5 )
{
 packetQueue_t *VAR_6, *VAR_7 = VAR_1;

 if(VAR_5 > 999)
  VAR_5 = 999;

 VAR_6 = FUNC_1(sizeof(packetQueue_t));
 VAR_6->data = FUNC_1(VAR_2);
 FUNC_0(VAR_6->data, VAR_3, VAR_2);
 VAR_6->length = VAR_2;
 VAR_6->to = VAR_4;
 VAR_6->release = FUNC_2() + (int)((float)VAR_5 / VAR_0->value);
 VAR_6->next = ((void*)0);

 if(!VAR_1) {
  VAR_1 = VAR_6;
  return;
 }
 while(VAR_7) {
  if(!VAR_7->next) {
   VAR_7->next = VAR_6;
   return;
  }
  VAR_7 = VAR_7->next;
 }
}
