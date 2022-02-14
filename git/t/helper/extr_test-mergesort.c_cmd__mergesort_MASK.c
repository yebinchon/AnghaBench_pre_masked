
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct line {char* text; struct line* next; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct line* FUNC_0 (struct line*,int ,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (struct strbuf*,int *) ;
 scalar_t__ FUNC_3 (struct strbuf*,int ,char) ;
 struct line* FUNC_4 (int) ;

int FUNC_5(int VAR_5, const char **VAR_6)
{
 struct line *VAR_7, *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct strbuf VAR_10 = VAR_0;

 for (;;) {
  if (FUNC_3(&VAR_10, VAR_4, '\n'))
   break;
  VAR_7 = FUNC_4(sizeof(struct line));
  VAR_7->text = FUNC_2(&VAR_10, ((void*)0));
  if (VAR_8) {
   VAR_7->next = VAR_8->next;
   VAR_8->next = VAR_7;
  } else {
   VAR_7->next = ((void*)0);
   VAR_9 = VAR_7;
  }
  VAR_8 = VAR_7;
 }

 VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_3, VAR_1);

 while (VAR_9) {
  FUNC_1("%s", VAR_9->text);
  VAR_9 = VAR_9->next;
 }
 return 0;
}
