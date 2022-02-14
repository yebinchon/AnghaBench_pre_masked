
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct transfer_request {scalar_t__ curl_result; int http_code; scalar_t__ state; char* url; scalar_t__ userData; TYPE_2__* obj; int * headers; TYPE_1__* slot; } ;
struct http_pack_request {int dummy; } ;
struct http_object_request {scalar_t__ rename; } ;
struct TYPE_8__ {size_t* hash; } ;
struct TYPE_7__ {scalar_t__ can_update_info_refs; } ;
struct TYPE_6__ {int flags; TYPE_4__ oid; } ;
struct TYPE_5__ {scalar_t__ curl_result; int http_code; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 char* VAR_10 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct http_object_request*) ;
 scalar_t__ FUNC_4 (struct http_pack_request*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 char* FUNC_6 (TYPE_4__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (struct http_object_request*) ;
 int FUNC_8 (struct http_pack_request*) ;
 int FUNC_9 (struct transfer_request*) ;
 int* VAR_12 ;
 TYPE_3__* VAR_13 ;
 int FUNC_10 (struct transfer_request*) ;
 int FUNC_11 (struct transfer_request*) ;
 int FUNC_12 (struct transfer_request*) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_13(struct transfer_request *VAR_15)
{
 struct http_pack_request *VAR_16;
 struct http_object_request *VAR_17;

 VAR_15->curl_result = VAR_15->slot->curl_result;
 VAR_15->http_code = VAR_15->slot->http_code;
 VAR_15->slot = ((void*)0);


 FUNC_1();

 if (VAR_15->headers != ((void*)0))
  FUNC_2(VAR_15->headers);


 if (VAR_15->state != VAR_8 && VAR_15->state != VAR_5) {
  FUNC_0(VAR_15->url);
 }

 if (VAR_15->state == VAR_6) {
  if (VAR_15->curl_result == VAR_1 ||
      VAR_15->http_code == 405) {
   VAR_12[VAR_15->obj->oid.hash[0]] = 1;
   FUNC_12(VAR_15);
  } else {
   FUNC_5(VAR_14, "MKCOL %s failed, aborting (%ld/%d)\n",
    FUNC_6(&VAR_15->obj->oid),
    VAR_15->curl_result, VAR_15->http_code);
   VAR_15->state = VAR_0;
   VAR_9 = 1;
  }
 } else if (VAR_15->state == VAR_8) {
  if (VAR_15->curl_result == VAR_1) {
   FUNC_11(VAR_15);
  } else {
   FUNC_5(VAR_14, "PUT %s failed, aborting (%ld/%d)\n",
    FUNC_6(&VAR_15->obj->oid),
    VAR_15->curl_result, VAR_15->http_code);
   VAR_15->state = VAR_0;
   VAR_9 = 1;
  }
 } else if (VAR_15->state == VAR_7) {
  if (VAR_15->curl_result == VAR_1) {
   if (VAR_11)
    FUNC_5(VAR_14, "    sent %s\n",
     FUNC_6(&VAR_15->obj->oid));
   VAR_15->obj->flags |= VAR_3;
   FUNC_9(VAR_15);
  } else {
   FUNC_5(VAR_14, "MOVE %s failed, aborting (%ld/%d)\n",
    FUNC_6(&VAR_15->obj->oid),
    VAR_15->curl_result, VAR_15->http_code);
   VAR_15->state = VAR_0;
   VAR_9 = 1;
  }
 } else if (VAR_15->state == VAR_4) {
  VAR_17 = (struct http_object_request *)VAR_15->userData;

  if (FUNC_3(VAR_17) == 0)
   if (VAR_17->rename == 0)
    VAR_15->obj->flags |= (VAR_2 | VAR_3);


  if (VAR_15->obj->flags & VAR_2) {
   FUNC_7(VAR_17);
   FUNC_9(VAR_15);
  } else
   FUNC_10(VAR_15);

 } else if (VAR_15->state == VAR_5) {
  int VAR_18 = 1;
  if (VAR_15->curl_result != VAR_1) {
   FUNC_5(VAR_14, "Unable to get pack file %s\n%s",
    VAR_15->url, VAR_10);
  } else {
   VAR_16 = (struct http_pack_request *)VAR_15->userData;

   if (VAR_16) {
    if (FUNC_4(VAR_16) == 0)
     VAR_18 = 0;
    FUNC_8(VAR_16);
   }
  }
  if (VAR_18)
   VAR_13->can_update_info_refs = 0;
  FUNC_9(VAR_15);
 }
}
