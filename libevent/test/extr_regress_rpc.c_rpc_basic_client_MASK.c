
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct kill {int dummy; } ;
struct evrpc_request_wrapper {int dummy; } ;
struct evrpc_pool {int dummy; } ;
typedef struct evrpc_pool evrpc_base ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 struct evrpc_request_wrapper* FUNC_0 (int ,struct msg*,struct kill*,struct evrpc_pool*,struct msg*,struct kill*,int ,int *) ;
 int FUNC_1 (int ,struct evrpc_pool*,struct msg*,struct kill*,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct msg*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct evhttp*) ;
 int * FUNC_6 (struct evrpc_pool*,int ,int ,void*) ;
 int FUNC_7 (struct evrpc_request_wrapper*) ;
 int FUNC_8 (struct evrpc_pool*) ;
 int VAR_4 ;
 int FUNC_9 (struct kill*) ;
 int FUNC_10 (struct kill*) ;
 struct kill* FUNC_11 () ;
 int FUNC_12 (struct msg*) ;
 struct msg* FUNC_13 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct evrpc_pool* FUNC_14 (int ) ;
 int FUNC_15 (struct evhttp**,int *,struct evrpc_pool**) ;
 int FUNC_16 (struct evrpc_pool*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (int) ;

__attribute__((used)) static void
FUNC_18(void)
{
 ev_uint16_t VAR_12;
 struct evhttp *VAR_13 = ((void*)0);
 struct evrpc_base *VAR_14 = ((void*)0);
 struct evrpc_pool *VAR_15 = ((void*)0);
 struct msg *VAR_16 = ((void*)0);
 struct kill *VAR_17 = ((void*)0);

 FUNC_15(&VAR_13, &VAR_12, &VAR_14);

 VAR_5 = 1;
 VAR_6 = 1;

 FUNC_3(FUNC_6(VAR_14, VAR_0, VAR_7, (void*)"input")
     != ((void*)0));
 FUNC_3(FUNC_6(VAR_14, VAR_1, VAR_7, (void*)"output")
     != ((void*)0));

 VAR_15 = FUNC_14(VAR_12);
 FUNC_17(VAR_15);

 FUNC_3(FUNC_6(VAR_15, VAR_1, VAR_8, ((void*)0)));
 FUNC_3(FUNC_6(VAR_15, VAR_0, VAR_9, (void*)"output"));


 VAR_16 = FUNC_13();
 FUNC_17(VAR_16);
 FUNC_2(VAR_16, VAR_4, "niels");
 FUNC_2(VAR_16, VAR_11, "tester");

 VAR_17 = FUNC_11();

 FUNC_1(VAR_3, VAR_15, VAR_16, VAR_17, VAR_2, ((void*)0));

 VAR_10 = 0;

 FUNC_4();

 FUNC_17(VAR_10 == 1);


 FUNC_9(VAR_17);

 FUNC_1(VAR_3, VAR_15, VAR_16, VAR_17, VAR_2, ((void*)0));

 FUNC_4();

 FUNC_17(VAR_10 == 2);


 FUNC_9(VAR_17);

 {
  struct evrpc_request_wrapper *VAR_18 =
      FUNC_0(VAR_3, VAR_16, VAR_17,
   VAR_15, VAR_16, VAR_17, VAR_2, ((void*)0));
  FUNC_7(VAR_18);
 }

 FUNC_4();

 FUNC_16(VAR_14);

 FUNC_17(VAR_10 == 3);

end:
 if (VAR_16)
  FUNC_12(VAR_16);
 if (VAR_17)
  FUNC_10(VAR_17);

 if (VAR_15)
  FUNC_8(VAR_15);
 if (VAR_13)
  FUNC_5(VAR_13);

 VAR_5 = 0;
 VAR_6 = 0;
}
