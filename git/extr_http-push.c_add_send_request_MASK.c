
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transfer_request {struct transfer_request* next; int state; int * headers; struct remote_lock* lock; int * url; struct object* obj; } ;
struct remote_lock {int dummy; } ;
struct packed_git {int dummy; } ;
struct TYPE_3__ {size_t* hash; } ;
struct object {int flags; TYPE_1__ oid; } ;
struct TYPE_4__ {int packs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct packed_git* FUNC_2 (size_t*,int ) ;
 int FUNC_3 (size_t) ;
 int* VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct transfer_request* VAR_5 ;
 int FUNC_4 () ;
 struct transfer_request* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct object *VAR_6, struct remote_lock *VAR_7)
{
 struct transfer_request *VAR_8;
 struct packed_git *VAR_9;


 FUNC_0();





 if (VAR_3[VAR_6->oid.hash[0]] == -1)
  FUNC_3(VAR_6->oid.hash[0]);
 if (VAR_6->flags & (VAR_2 | VAR_1))
  return 0;
 VAR_9 = FUNC_2(VAR_6->oid.hash, VAR_4->packs);
 if (VAR_9) {
  VAR_6->flags |= VAR_2;
  return 0;
 }

 VAR_6->flags |= VAR_1;
 VAR_8 = FUNC_5(sizeof(*VAR_8));
 VAR_8->obj = VAR_6;
 VAR_8->url = ((void*)0);
 VAR_8->lock = VAR_7;
 VAR_8->headers = ((void*)0);
 VAR_8->state = VAR_0;
 VAR_8->next = VAR_5;
 VAR_5 = VAR_8;






 return 1;
}
