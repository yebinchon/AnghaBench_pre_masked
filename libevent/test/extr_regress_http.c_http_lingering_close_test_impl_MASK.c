
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
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_request* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*,char*) ;
 int FUNC_6 (struct evhttp*) ;
 int FUNC_7 (struct evhttp_request*,struct evhttp_request*,int ,char*) ;
 int FUNC_8 (struct evhttp_request*) ;
 int FUNC_9 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_10 (void (*) (struct evhttp_request*,void*),int ) ;
 int FUNC_11 (struct evhttp*,int ) ;
 int FUNC_12 (struct evhttp*,size_t) ;
 int FUNC_13 (char*) ;
 void FUNC_14 (struct evhttp_request*,void*) ;
 void FUNC_15 (struct evhttp_request*,void*) ;
 struct evhttp* FUNC_16 (int *,int ,int ) ;
 char* FUNC_17 (size_t) ;
 int FUNC_18 (char*,char,size_t) ;
 int VAR_2 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int) ;

__attribute__((used)) static void
FUNC_21(void *VAR_3, int VAR_4)
{
 struct basic_test_data *VAR_5 = VAR_3;
 ev_uint16_t VAR_6 = 0;
 struct evhttp_connection *VAR_7 = ((void*)0);
 struct evhttp_request *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 size_t VAR_10 = (1<<20) * 3;
 void (*VAR_11)(struct evhttp_request *, void *);
 struct evhttp *VAR_12 = FUNC_16(&VAR_6, VAR_5->base, 0);

 VAR_2 = 0;

 if (VAR_4)
  FUNC_20(!FUNC_11(VAR_12, VAR_1));
 FUNC_12(VAR_12, VAR_10 / 2);

 VAR_7 = FUNC_3(VAR_5->base, ((void*)0), "127.0.0.1", VAR_6);
 FUNC_20(VAR_7);
 FUNC_5(VAR_7, "127.0.0.1");






 VAR_9 = FUNC_17(VAR_10);
 FUNC_18(VAR_9, 'a', VAR_10);
 VAR_9[VAR_10 - 1] = '\0';

 if (VAR_4)
  VAR_11 = FUNC_15;
 else
  VAR_11 = FUNC_14;
 VAR_8 = FUNC_10(VAR_11, VAR_5->base);
 FUNC_20(VAR_8);
 FUNC_2(FUNC_9(VAR_8), "Host", "somehost");
 FUNC_0(FUNC_8(VAR_8), "%s", VAR_9);
 if (FUNC_7(VAR_7, VAR_8, VAR_0, "/") == -1) {
  FUNC_19("Couldn't make request");
 }
 FUNC_1(VAR_5->base);

 VAR_2 = 1;
 end:
 if (VAR_7)
  FUNC_4(VAR_7);
 if (VAR_12)
  FUNC_6(VAR_12);
 if (VAR_9)
  FUNC_13(VAR_9);
}
