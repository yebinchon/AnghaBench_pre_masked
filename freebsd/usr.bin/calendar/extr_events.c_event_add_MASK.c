
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int month; int day; int var; int * extra; int * text; int * date; } ;


 int FUNC_0 (struct event*,int,int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;

struct event *
FUNC_4(int VAR_0, int VAR_1, int VAR_2, char *VAR_3, int VAR_4, char *VAR_5,
    char *VAR_6)
{
 struct event *VAR_7;
 VAR_7 = (struct event *)FUNC_1(1, sizeof(struct event));
 if (VAR_7 == ((void*)0))
  FUNC_3(1, "event_add: cannot allocate memory");
 VAR_7->month = VAR_1;
 VAR_7->day = VAR_2;
 VAR_7->var = VAR_4;
 VAR_7->date = FUNC_2(VAR_3);
 if (VAR_7->date == ((void*)0))
  FUNC_3(1, "event_add: cannot allocate memory");
 VAR_7->text = FUNC_2(VAR_5);
 if (VAR_7->text == ((void*)0))
  FUNC_3(1, "event_add: cannot allocate memory");
 VAR_7->extra = ((void*)0);
 if (VAR_6 != ((void*)0) && VAR_6[0] != '\0')
  VAR_7->extra = FUNC_2(VAR_6);
 FUNC_0(VAR_7, VAR_0, VAR_1, VAR_2);
 return (VAR_7);
}
