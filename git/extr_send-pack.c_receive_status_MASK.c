
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {scalar_t__ status; struct ref* next; int remote_status; } ;
struct packet_reader {char* line; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*) ;
 struct ref* FUNC_1 (struct ref*,char const*) ;
 scalar_t__ FUNC_2 (struct packet_reader*) ;
 int FUNC_3 (struct packet_reader*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct packet_reader *VAR_4, struct ref *VAR_5)
{
 struct ref *VAR_6;
 int VAR_7;

 VAR_6 = ((void*)0);
 VAR_7 = FUNC_3(VAR_4);
 while (1) {
  const char *VAR_8;
  char *VAR_9;
  if (FUNC_2(VAR_4) != VAR_0)
   break;
  if (!FUNC_4(VAR_4->line, "ok ") && !FUNC_4(VAR_4->line, "ng ")) {
   FUNC_0("invalid ref status from remote: %s", VAR_4->line);
   VAR_7 = -1;
   break;
  }

  VAR_8 = VAR_4->line + 3;
  VAR_9 = FUNC_5(VAR_8, ' ');
  if (VAR_9)
   *VAR_9++ = '\0';


  if (VAR_6)
   VAR_6 = FUNC_1(VAR_6, VAR_8);
  if (!VAR_6)
   VAR_6 = FUNC_1(VAR_5, VAR_8);
  if (!VAR_6) {
   FUNC_6("remote reported status on unknown ref: %s",
     VAR_8);
   continue;
  }
  if (VAR_6->status != VAR_1) {
   FUNC_6("remote reported status on unexpected ref: %s",
     VAR_8);
   continue;
  }

  if (VAR_4->line[0] == 'o' && VAR_4->line[1] == 'k')
   VAR_6->status = VAR_2;
  else {
   VAR_6->status = VAR_3;
   VAR_7 = -1;
  }
  VAR_6->remote_status = FUNC_7(VAR_9);

  VAR_6 = VAR_6->next;
 }
 return VAR_7;
}
