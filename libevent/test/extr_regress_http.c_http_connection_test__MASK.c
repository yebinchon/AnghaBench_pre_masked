
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int dummy; } ;
struct evdns_base {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {void* base; } ;
typedef int ev_uint16_t ;
typedef int SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_2 (void*,int,int *,int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_5 (void*,struct evdns_base*,struct bufferevent*,char const*,int ) ;
 struct evhttp_connection* FUNC_6 (void*,struct evdns_base*,char const*,int ) ;
 int FUNC_7 (struct evhttp_connection*) ;
 void* FUNC_8 (struct evhttp_connection*) ;
 int * FUNC_9 (struct evhttp_connection*) ;
 int FUNC_10 (struct evhttp_connection*,int ) ;
 int FUNC_11 (struct evhttp_connection*,int) ;
 int FUNC_12 (struct evhttp*) ;
 int FUNC_13 (struct evhttp_connection*,struct evhttp_request*,int,char*) ;
 int FUNC_14 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_15 (int ,void*) ;
 int FUNC_16 (struct evhttp*,int) ;
 int FUNC_17 (int) ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 () ;
 int VAR_9 ;
 int VAR_10 ;
 struct evhttp* FUNC_20 (int *,void*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int) ;
 int FUNC_23 () ;

__attribute__((used)) static void
FUNC_24(struct basic_test_data *VAR_13, int VAR_14,
 const char *VAR_15, struct evdns_base *VAR_16, int VAR_17, int VAR_18,
 int VAR_19)
{
 ev_uint16_t VAR_20 = 0;
 struct evhttp_connection *VAR_21 = ((void*)0);
 struct evhttp_request *VAR_22 = ((void*)0);
 struct evhttp *VAR_23;

 int VAR_24 = 0;
 if (VAR_17)
  VAR_24 |= VAR_5;
 if (VAR_19)
  VAR_24 |= VAR_6;

 VAR_23 = FUNC_20(&VAR_20, VAR_13->base, VAR_24);

 VAR_12 = 0;
 if (!VAR_23 && VAR_17) {
  FUNC_23();
 }
 FUNC_22(VAR_23);

 FUNC_16(VAR_23, VAR_4 | VAR_3);

 if (VAR_19) {
  FUNC_23();

 } else {
  VAR_21 = FUNC_6(VAR_13->base, VAR_16, VAR_15, VAR_20);
 }
 FUNC_22(VAR_21);
 FUNC_11(VAR_21, VAR_18);

 FUNC_22(FUNC_8(VAR_21) == VAR_13->base);

 VAR_7 = VAR_13->base;

 FUNC_22(FUNC_9(VAR_21) == ((void*)0));


 FUNC_10(VAR_21, VAR_8);





 VAR_22 = FUNC_15(VAR_9, (void*) VAR_0);


 FUNC_4(FUNC_14(VAR_22), "Host", "somehost");


 if (FUNC_13(VAR_21, VAR_22, VAR_4, "/test") == -1) {
  FUNC_18(VAR_11, "FAILED\n");
  FUNC_17(1);
 }

 FUNC_3(VAR_13->base);

 FUNC_22(VAR_12);


 VAR_12 = 0;

 VAR_22 = FUNC_15(VAR_9, (void*) VAR_0);


 FUNC_4(FUNC_14(VAR_22), "Host", "somehost");





 if (!VAR_14)
  FUNC_4(FUNC_14(VAR_22), "Connection", "close");


 if (FUNC_13(VAR_21, VAR_22, VAR_4, "/test") == -1) {
  FUNC_21("couldn't make request");
 }

 FUNC_3(VAR_13->base);


 VAR_12 = 0;

 VAR_22 = FUNC_15(VAR_10, VAR_13->base);


 FUNC_4(FUNC_14(VAR_22), "Empty", "itis");


 if (FUNC_13(VAR_21, VAR_22, VAR_4, "/test") == -1) {
  FUNC_21("Couldn't make request");
 }

 FUNC_3(VAR_13->base);


 VAR_12 = 0;

 VAR_22 = FUNC_15(VAR_10, VAR_13->base);


 FUNC_4(FUNC_14(VAR_22), "Empty", "itis");


 if (FUNC_13(VAR_21, VAR_22, VAR_3, "/test") == -1) {
  FUNC_21("Couldn't make request");
 }

 FUNC_3(VAR_13->base);

 end:
 if (VAR_21)
  FUNC_7(VAR_21);
 if (VAR_23)
  FUNC_12(VAR_23);
}
