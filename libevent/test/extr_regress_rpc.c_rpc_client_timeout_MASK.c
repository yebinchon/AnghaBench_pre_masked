
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct kill {int dummy; } ;
struct evrpc_pool {int dummy; } ;
struct evrpc_base {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (int ,struct evrpc_pool*,struct msg*,struct kill*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct msg*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct evhttp*) ;
 int FUNC_5 (struct evrpc_pool*) ;
 int FUNC_6 (struct evrpc_pool*,int) ;
 int VAR_2 ;
 int FUNC_7 (struct kill*) ;
 struct kill* FUNC_8 () ;
 int FUNC_9 (struct msg*) ;
 struct msg* FUNC_10 () ;
 struct evrpc_pool* FUNC_11 (int ) ;
 int FUNC_12 (struct evhttp**,int *,struct evrpc_base**) ;
 int FUNC_13 (struct evrpc_base*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(void)
{
 ev_uint16_t VAR_6;
 struct evhttp *VAR_7 = ((void*)0);
 struct evrpc_base *VAR_8 = ((void*)0);
 struct evrpc_pool *VAR_9 = ((void*)0);
 struct msg *VAR_10 = ((void*)0);
 struct kill *VAR_11 = ((void*)0);

 FUNC_12(&VAR_7, &VAR_6, &VAR_8);

 VAR_9 = FUNC_11(VAR_6);
 FUNC_14(VAR_9);


 FUNC_6(VAR_9, 1);


 VAR_10 = FUNC_10();
 FUNC_14(VAR_10);
 FUNC_2(VAR_10, VAR_2, "niels");
 FUNC_2(VAR_10, VAR_5, "tester");

 VAR_11 = FUNC_8();

 FUNC_0(VAR_1, VAR_9, VAR_10, VAR_11, VAR_0, ((void*)0));

 VAR_4 = 0;

 FUNC_3();


 FUNC_1(VAR_3);

 FUNC_13(VAR_8);

 FUNC_14(VAR_4 == 2);

end:
 if (VAR_10)
  FUNC_9(VAR_10);
 if (VAR_11)
  FUNC_7(VAR_11);

 if (VAR_9)
  FUNC_5(VAR_9);
 if (VAR_7)
  FUNC_4(VAR_7);
}
