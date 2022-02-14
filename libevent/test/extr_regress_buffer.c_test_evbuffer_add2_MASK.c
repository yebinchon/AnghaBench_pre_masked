
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
 int FUNC_2 (struct evbuffer*,int) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;
 struct evbuffer* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct evbuffer*,int) ;
 int FUNC_7 (struct evbuffer*) ;
 int FUNC_8 (char*,char,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2)
{
 struct evbuffer *VAR_3;
 static char VAR_4[4096];
 int VAR_5 = VAR_1-VAR_0-10;
 char *VAR_6;
 int VAR_7;

 FUNC_8(VAR_4, 'P', sizeof(VAR_4));
 VAR_3 = FUNC_5();
 FUNC_0(VAR_3, VAR_4, VAR_5);
 FUNC_7(VAR_3);
 FUNC_2(VAR_3, 100);
 FUNC_7(VAR_3);
 FUNC_0(VAR_3, "2", 1);
 FUNC_7(VAR_3);
 FUNC_1(VAR_3, "3");
 FUNC_7(VAR_3);

 VAR_7 = FUNC_4(VAR_3);
 FUNC_9(VAR_7 == VAR_5+2);
 VAR_6 = (char *)FUNC_6(VAR_3, -1);
 FUNC_9(VAR_6[VAR_7-3] == 'P');
 FUNC_9(VAR_6[VAR_7-2] == '2');
 FUNC_9(VAR_6[VAR_7-1] == '3');
end:
 FUNC_3(VAR_3);
}
