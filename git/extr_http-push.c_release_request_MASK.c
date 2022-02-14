
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer_request {struct transfer_request* url; struct transfer_request* next; } ;


 int FUNC_0 (struct transfer_request*) ;
 struct transfer_request* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct transfer_request *VAR_1)
{
 struct transfer_request *VAR_2 = VAR_0;

 if (VAR_1 == VAR_0) {
  VAR_0 = VAR_1->next;
 } else {
  while (VAR_2 && VAR_2->next != VAR_1)
   VAR_2 = VAR_2->next;
  if (VAR_2)
   VAR_2->next = VAR_1->next;
 }

 FUNC_0(VAR_1->url);
 FUNC_0(VAR_1);
}
