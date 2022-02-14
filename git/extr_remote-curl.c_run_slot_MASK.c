
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct slot_results {int http_code; int curl_result; } ;
struct active_request_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct active_request_slot*,struct slot_results*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,int) ;
 int FUNC_5 (struct strbuf*,scalar_t__*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(struct active_request_slot *VAR_5,
      struct slot_results *VAR_6)
{
 int VAR_7;
 struct slot_results VAR_8;

 if (!VAR_6)
  VAR_6 = &VAR_8;

 VAR_7 = FUNC_2(VAR_5, VAR_6);

 if (VAR_7 != VAR_1 && VAR_7 != VAR_2) {
  struct strbuf VAR_9 = VAR_3;
  if (VAR_6->http_code && VAR_6->http_code != 200)
   FUNC_4(&VAR_9, "HTTP %ld", VAR_6->http_code);
  if (VAR_6->curl_result != VAR_0) {
   if (VAR_9.len)
    FUNC_3(&VAR_9, ' ');
   FUNC_4(&VAR_9, "curl %d", VAR_6->curl_result);
   if (VAR_4[0]) {
    FUNC_3(&VAR_9, ' ');
    FUNC_5(&VAR_9, VAR_4);
   }
  }
  FUNC_1(FUNC_0("RPC failed; %s"), VAR_9.buf);
  FUNC_6(&VAR_9);
 }

 return VAR_7;
}
