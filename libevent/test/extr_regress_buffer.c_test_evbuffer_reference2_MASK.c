
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evbuffer*,char*,int) ;
 int FUNC_1 (struct evbuffer*,char*) ;
 int FUNC_2 (struct evbuffer*,char*,int,int ,int *) ;
 int FUNC_3 (struct evbuffer*,int) ;
 int FUNC_4 (struct evbuffer*) ;
 int FUNC_5 (struct evbuffer*) ;
 struct evbuffer* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct evbuffer*,int) ;
 int FUNC_8 (struct evbuffer*) ;
 int FUNC_9 (char*,char,int) ;
 int VAR_2 ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(void *VAR_3)
{
 struct evbuffer *VAR_4;
 static char VAR_5[4096];
 int VAR_6 = VAR_1-VAR_0-10;
 char *VAR_7;
 int VAR_8;

 FUNC_9(VAR_5, 'P', sizeof(VAR_5));
 VAR_4 = FUNC_6();
 FUNC_0(VAR_4, VAR_5, VAR_6);
 FUNC_8(VAR_4);
 FUNC_3(VAR_4, 100);
 FUNC_8(VAR_4);
 FUNC_2(VAR_4, "2", 1, VAR_2, ((void*)0));
 FUNC_8(VAR_4);
 FUNC_1(VAR_4, "3");
 FUNC_8(VAR_4);

 VAR_8 = FUNC_5(VAR_4);
 FUNC_10(VAR_8 == VAR_6+2);
 VAR_7 = (char *)FUNC_7(VAR_4, -1);
 FUNC_10(VAR_7[VAR_8-3] == 'P');
 FUNC_10(VAR_7[VAR_8-2] == '2');
 FUNC_10(VAR_7[VAR_8-1] == '3');
end:
 FUNC_4(VAR_4);
}
