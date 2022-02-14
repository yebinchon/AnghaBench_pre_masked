
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct transfer_request {scalar_t__ state; struct http_pack_request* userData; TYPE_2__* slot; struct transfer_request* next; int url; TYPE_1__* obj; } ;
struct packed_git {int hash; } ;
struct http_pack_request {TYPE_2__* slot; int url; int * lst; } ;
struct TYPE_8__ {int hash; } ;
struct TYPE_7__ {scalar_t__ can_update_info_refs; int packs; int url; } ;
struct TYPE_6__ {struct transfer_request* callback_data; int callback_func; } ;
struct TYPE_5__ {TYPE_4__ oid; } ;


 scalar_t__ VAR_0 ;
 struct packed_git* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ) ;
 struct http_pack_request* FUNC_3 (struct packed_git*,int ) ;
 char* FUNC_4 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_5 (struct http_pack_request*) ;
 int FUNC_6 (struct transfer_request*) ;
 TYPE_3__* VAR_2 ;
 struct transfer_request* VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct transfer_request *VAR_5)
{
 struct packed_git *VAR_6;

 struct transfer_request *VAR_7 = VAR_3;
 struct http_pack_request *VAR_8;

 VAR_6 = FUNC_0(VAR_5->obj->oid.hash, VAR_2->packs);
 if (!VAR_6) {
  FUNC_1(VAR_4, "Unable to fetch %s, will not be able to update server info refs\n", FUNC_4(&VAR_5->obj->oid));
  VAR_2->can_update_info_refs = 0;
  FUNC_6(VAR_5);
  return;
 }

 FUNC_1(VAR_4, "Fetching pack %s\n",
  FUNC_2(VAR_6->hash));
 FUNC_1(VAR_4, " which contains %s\n", FUNC_4(&VAR_5->obj->oid));

 VAR_8 = FUNC_3(VAR_6, VAR_2->url);
 if (VAR_8 == ((void*)0)) {
  VAR_2->can_update_info_refs = 0;
  return;
 }
 VAR_8->lst = &VAR_2->packs;


 while (VAR_7) {
  if (VAR_7->state == VAR_0 &&
      !FUNC_8(VAR_7->url, VAR_8->url)) {
   FUNC_5(VAR_8);
   FUNC_6(VAR_5);
   return;
  }
  VAR_7 = VAR_7->next;
 }

 VAR_8->slot->callback_func = VAR_1;
 VAR_8->slot->callback_data = VAR_5;
 VAR_5->slot = VAR_8->slot;
 VAR_5->userData = VAR_8;


 VAR_5->state = VAR_0;
 if (!FUNC_7(VAR_8->slot)) {
  FUNC_1(VAR_4, "Unable to start GET request\n");
  FUNC_5(VAR_8);
  VAR_2->can_update_info_refs = 0;
  FUNC_6(VAR_5);
 }
}
