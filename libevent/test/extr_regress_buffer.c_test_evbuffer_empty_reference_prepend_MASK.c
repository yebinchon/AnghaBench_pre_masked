
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*,char*,int ,int *,int *) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (struct evbuffer*,char*,int) ;
 scalar_t__ FUNC_4 (struct evbuffer*,int) ;
 int FUNC_5 (struct evbuffer*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_0)
{
 struct evbuffer *VAR_1 = ((void*)0);

 VAR_1 = FUNC_2();
 FUNC_7(VAR_1);


 FUNC_0(VAR_1, "", 0, ((void*)0), ((void*)0));
 FUNC_5(VAR_1);
 FUNC_3(VAR_1, "foo", 3);

 FUNC_5(VAR_1);
 FUNC_7(!FUNC_6((char *)FUNC_4(VAR_1, -1), "foo", 3));
 FUNC_5(VAR_1);

end:
 if (VAR_1)
  FUNC_1(VAR_1);
}
