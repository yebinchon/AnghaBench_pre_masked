
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transfer_request {struct transfer_request* next; int state; int * headers; int * lock; int * url; struct object* obj; } ;
struct TYPE_2__ {size_t* hash; } ;
struct object {int flags; TYPE_1__ oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (size_t) ;
 int* VAR_3 ;
 struct transfer_request* VAR_4 ;
 int FUNC_3 () ;
 struct transfer_request* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct object *VAR_5)
{
 struct transfer_request *VAR_6;

 FUNC_0();





 if (VAR_3[VAR_5->oid.hash[0]] == -1)
  FUNC_2(VAR_5->oid.hash[0]);
 if (VAR_5->flags & (VAR_1 | VAR_0))
  return;

 VAR_5->flags |= VAR_0;
 VAR_6 = FUNC_4(sizeof(*VAR_6));
 VAR_6->obj = VAR_5;
 VAR_6->url = ((void*)0);
 VAR_6->lock = ((void*)0);
 VAR_6->headers = ((void*)0);
 VAR_6->state = VAR_2;
 VAR_6->next = VAR_4;
 VAR_4 = VAR_6;





}
