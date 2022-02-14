
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
typedef struct evhttp_request evhttp_connection ;
struct evhttp {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 struct evhttp_request* FUNC_4 (int ,int *,char*,int ) ;
 int FUNC_5 (struct evhttp_request*) ;
 int FUNC_6 (struct evhttp_request*,int ) ;
 int FUNC_7 (struct evhttp_request*,char*) ;
 int FUNC_8 (struct evhttp*) ;
 int FUNC_9 (struct evhttp_request*,struct evhttp_request*,int ,char*) ;
 int FUNC_10 (struct evhttp_request*) ;
 int FUNC_11 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_12 (void (*) (struct evhttp_request*,void*),int ) ;
 int FUNC_13 (struct evhttp*,size_t const) ;
 int FUNC_14 (struct evhttp*,size_t const) ;
 int FUNC_15 (char*) ;
 void FUNC_16 (struct evhttp_request*,void*) ;
 void FUNC_17 (struct evhttp_request*,void*) ;
 void FUNC_18 (struct evhttp_request*,void*) ;
 void FUNC_19 (struct evhttp_request*,void*) ;
 void FUNC_20 (struct evhttp_request*,void*) ;
 struct evhttp* FUNC_21 (int *,int ,int ) ;
 char* FUNC_22 (size_t const) ;
 int FUNC_23 (char*,char,size_t const) ;
 int VAR_3 ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int) ;

__attribute__((used)) static void
FUNC_26(void *VAR_4, int VAR_5)
{
 struct basic_test_data *VAR_6 = VAR_4;
 ev_uint16_t VAR_7 = 0;
 struct evhttp_connection *VAR_8 = ((void*)0);
 struct evhttp_request *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 const size_t VAR_11 = 1<<20;
 const size_t VAR_12 = (1<<20) * 3;
 void (*VAR_13)(struct evhttp_request *, void *);
 struct evhttp *VAR_14 = FUNC_21(&VAR_7, VAR_6->base, 0);

 VAR_3 = 0;
 VAR_13 = FUNC_19;
 if (VAR_5)
  VAR_13 = FUNC_16;

 FUNC_25(VAR_11 < VAR_12);

 VAR_10 = FUNC_22(VAR_12);
 FUNC_23(VAR_10, 'a', VAR_12);
 VAR_10[VAR_12 - 1] = '\0';

 FUNC_0(("Creating connection to :%i", VAR_7));
 VAR_8 = FUNC_4(VAR_6->base, ((void*)0), "127.0.0.1", VAR_7);
 FUNC_25(VAR_8);

 if (VAR_5)
  FUNC_25(!FUNC_6(VAR_8, VAR_0));

 FUNC_7(VAR_8, "127.0.0.1");

 FUNC_14(VAR_14, VAR_12 - 1);
 FUNC_0(("Set max header size %zu", VAR_12 - 1));

 VAR_9 = FUNC_12(FUNC_16, VAR_6->base);
 FUNC_25(VAR_9);
 FUNC_3(FUNC_11(VAR_9), "Host", "somehost");
 FUNC_3(FUNC_11(VAR_9), "Longheader", VAR_10);
 FUNC_0(("GET /?arg=val"));
 if (FUNC_9(VAR_8, VAR_9, VAR_1, "/?arg=val") == -1) {
  FUNC_24("Couldn't make request");
 }
 FUNC_2(VAR_6->base);

 VAR_9 = FUNC_12(FUNC_16, VAR_6->base);
 FUNC_25(VAR_9);
 FUNC_3(FUNC_11(VAR_9), "Host", "somehost");

 FUNC_0(("GET %s", VAR_10));
 if (FUNC_9(VAR_8, VAR_9, VAR_1, VAR_10) == -1) {
  FUNC_24("Couldn't make request");
 }
 FUNC_2(VAR_6->base);

 FUNC_13(VAR_14, VAR_12 - 2);
 FUNC_0(("Set body header size %zu", VAR_12 - 2));

 if (VAR_5)
  VAR_13 = FUNC_20;
 VAR_9 = FUNC_12(VAR_13, VAR_6->base);
 FUNC_3(FUNC_11(VAR_9), "Host", "somehost");
 FUNC_1(FUNC_10(VAR_9), "%s", VAR_10);
 FUNC_0(("POST /"));
 if (FUNC_9(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_24("Couldn't make request");
 }
 FUNC_2(VAR_6->base);

 VAR_9 = FUNC_12(FUNC_20, VAR_6->base);
 FUNC_3(FUNC_11(VAR_9), "Host", "somehost");
 FUNC_3(FUNC_11(VAR_9), "Expect", "100-continue");
 FUNC_1(FUNC_10(VAR_9), "%s", VAR_10);
 FUNC_0(("POST / (Expect: 100-continue, http_large_entity_test_done)"));
 if (FUNC_9(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_24("Couldn't make request");
 }
 FUNC_2(VAR_6->base);

 VAR_10[VAR_11] = '\0';

 VAR_9 = FUNC_12(FUNC_17, VAR_6->base);
 FUNC_3(FUNC_11(VAR_9), "Host", "somehost");
 FUNC_3(FUNC_11(VAR_9), "Expect", "100-continue");
 FUNC_1(FUNC_10(VAR_9), "%s", VAR_10);
 FUNC_0(("POST / (Expect: 100-continue, http_dispatcher_test_done)"));
 if (FUNC_9(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_24("Couldn't make request");
 }
 FUNC_2(VAR_6->base);

 if (VAR_5)
  VAR_13 = FUNC_18;
 VAR_9 = FUNC_12(VAR_13, VAR_6->base);
 FUNC_3(FUNC_11(VAR_9), "Host", "somehost");
 FUNC_3(FUNC_11(VAR_9), "Expect", "101-continue");
 FUNC_1(FUNC_10(VAR_9), "%s", VAR_10);
 FUNC_0(("POST / (Expect: 101-continue)"));
 if (FUNC_9(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_24("Couldn't make request");
 }
 FUNC_2(VAR_6->base);

 VAR_3 = 1;
 end:
 if (VAR_8)
  FUNC_5(VAR_8);
 if (VAR_14)
  FUNC_8(VAR_14);
 if (VAR_10)
  FUNC_15(VAR_10);
}
