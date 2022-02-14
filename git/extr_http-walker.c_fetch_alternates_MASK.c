
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker_data {int got_alternates; } ;
struct walker {scalar_t__ get_verbosely; struct walker_data* data; } ;
struct strbuf {struct strbuf* buf; } ;
struct alternates_request {char const* base; int http_specific; struct active_request_slot* slot; struct strbuf* buffer; struct strbuf* url; struct walker* walker; } ;
struct active_request_slot {int curl; struct alternates_request* callback_data; int callback_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (int ,int ,struct strbuf*) ;
 int FUNC_1 (int ,char*,char const*) ;
 struct strbuf* VAR_4 ;
 struct active_request_slot* FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (struct active_request_slot*) ;
 scalar_t__ FUNC_4 (struct active_request_slot*) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(struct walker *VAR_7, const char *VAR_8)
{
 struct strbuf VAR_9 = VAR_3;
 struct strbuf VAR_10 = VAR_3;
 struct active_request_slot *VAR_11;
 struct alternates_request VAR_12;
 struct walker_data *VAR_13 = VAR_7->data;
 if (VAR_13->got_alternates == 1)
  return;


 VAR_13->got_alternates = 0;

 if (VAR_7->get_verbosely)
  FUNC_1(VAR_6, "Getting alternates list for %s\n", VAR_8);

 FUNC_6(&VAR_10, "%s/objects/info/http-alternates", VAR_8);





 VAR_11 = FUNC_2();
 VAR_11->callback_func = VAR_5;
 VAR_12.walker = VAR_7;
 VAR_11->callback_data = &VAR_12;

 FUNC_0(VAR_11->curl, VAR_0, &VAR_9);
 FUNC_0(VAR_11->curl, VAR_2, VAR_4);
 FUNC_0(VAR_11->curl, VAR_1, VAR_10.buf);

 VAR_12.base = VAR_8;
 VAR_12.url = &VAR_10;
 VAR_12.buffer = &VAR_9;
 VAR_12.http_specific = 1;
 VAR_12.slot = VAR_11;

 if (FUNC_4(VAR_11))
  FUNC_3(VAR_11);
 else
  VAR_13->got_alternates = -1;

 FUNC_7(&VAR_9);
 FUNC_7(&VAR_10);
}
