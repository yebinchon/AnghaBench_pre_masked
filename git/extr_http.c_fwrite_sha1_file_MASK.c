
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t avail_in; unsigned char* next_out; int avail_out; void* next_in; } ;
struct http_object_request {scalar_t__ zret; TYPE_2__ stream; int c; int localfile; struct active_request_slot* slot; } ;
struct active_request_slot {int http_code; int curl; } ;
typedef scalar_t__ ssize_t ;
typedef int expn ;
struct TYPE_3__ {int (* update_fn ) (int *,unsigned char*,int) ;} ;
typedef scalar_t__ CURLcode ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_5 (int ,char*,size_t) ;

__attribute__((used)) static size_t FUNC_6(char *VAR_5, size_t VAR_6, size_t VAR_7,
          void *VAR_8)
{
 unsigned char VAR_9[4096];
 size_t VAR_10 = VAR_6 * VAR_7;
 int VAR_11 = 0;
 struct http_object_request *VAR_12 = VAR_8;
 struct active_request_slot *VAR_13 = VAR_12->slot;

 if (VAR_13) {
  CURLcode VAR_14 = FUNC_1(VAR_13->curl, VAR_1,
      &VAR_13->http_code);
  if (VAR_14 != VAR_0)
   FUNC_0("curl_easy_getinfo for HTTP code failed: %s",
    FUNC_2(VAR_14));
  if (VAR_13->http_code >= 300)
   return VAR_7;
 }

 do {
  ssize_t VAR_15 = FUNC_5(VAR_12->localfile,
     (char *) VAR_5 + VAR_11, VAR_10 - VAR_11);
  if (VAR_15 < 0)
   return VAR_11 / VAR_6;
  VAR_11 += VAR_15;
 } while (VAR_11 < VAR_10);

 VAR_12->stream.avail_in = VAR_10;
 VAR_12->stream.next_in = (void *)VAR_5;
 do {
  VAR_12->stream.next_out = VAR_9;
  VAR_12->stream.avail_out = sizeof(VAR_9);
  VAR_12->zret = FUNC_3(&VAR_12->stream, VAR_3);
  VAR_4->update_fn(&VAR_12->c, VAR_9,
      sizeof(VAR_9) - VAR_12->stream.avail_out);
 } while (VAR_12->stream.avail_in && VAR_12->zret == VAR_2);
 return VAR_7;
}
