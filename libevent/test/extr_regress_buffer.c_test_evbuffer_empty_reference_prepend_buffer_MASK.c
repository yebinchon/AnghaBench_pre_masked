
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*,char*,int) ;
 int FUNC_1 (struct evbuffer*,char*,int ,int *,int *) ;
 int FUNC_2 (struct evbuffer*) ;
 struct evbuffer* FUNC_3 () ;
 int FUNC_4 (struct evbuffer*,struct evbuffer*) ;
 scalar_t__ FUNC_5 (struct evbuffer*,int) ;
 int FUNC_6 (struct evbuffer*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_0)
{
 struct evbuffer *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);

 VAR_1 = FUNC_3();
 FUNC_8(VAR_1);
 VAR_2 = FUNC_3();
 FUNC_8(VAR_2);


 FUNC_1(VAR_1, "", 0, ((void*)0), ((void*)0));
 FUNC_6(VAR_1);
 FUNC_0(VAR_2, "foo", 3);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2, VAR_1);
 FUNC_6(VAR_2);

 FUNC_8(!FUNC_7((char *)FUNC_5(VAR_2, -1), "foo", 3));
 FUNC_6(VAR_2);

 FUNC_8(!FUNC_7((char *)FUNC_5(VAR_1, -1), "", 0));
 FUNC_6(VAR_2);

end:
 if (VAR_1)
  FUNC_2(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_2);
}
