
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {char* text; } ;


 int FUNC_0 (char**,char*,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct event *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = VAR_0->text;
 if (VAR_2 == ((void*)0))
  FUNC_2(1, "event_continue: cannot allocate memory");

 FUNC_0(&VAR_0->text, "%s\n%s", VAR_2, VAR_3);
 if (VAR_0->text == ((void*)0))
  FUNC_2(1, "event_continue: cannot allocate memory");
 FUNC_3(VAR_2);
 FUNC_3(VAR_3);

 return;
}
