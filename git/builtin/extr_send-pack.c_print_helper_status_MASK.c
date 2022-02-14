
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct ref {int status; char* remote_status; int name; struct ref* next; } ;
 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ref *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 for (; VAR_1; VAR_1 = VAR_1->next) {
  const char *VAR_3 = ((void*)0);
  const char *VAR_4;

  switch(VAR_1->status) {
  case 137:
   VAR_4 = "error";
   VAR_3 = "no match";
   break;

  case 136:
   VAR_4 = "ok";
   break;

  case 128:
   VAR_4 = "ok";
   VAR_3 = "up to date";
   break;

  case 131:
   VAR_4 = "error";
   VAR_3 = "non-fast forward";
   break;

  case 134:
   VAR_4 = "error";
   VAR_3 = "fetch first";
   break;

  case 133:
   VAR_4 = "error";
   VAR_3 = "needs force";
   break;

  case 130:
   VAR_4 = "error";
   VAR_3 = "stale info";
   break;

  case 135:
   VAR_4 = "error";
   VAR_3 = "already exists";
   break;

  case 132:
  case 129:
   VAR_4 = "error";
   break;

  case 138:
  default:
   continue;
  }

  FUNC_4(&VAR_2);
  FUNC_2(&VAR_2, "%s %s", VAR_4, VAR_1->name);
  if (VAR_1->remote_status)
   VAR_3 = VAR_1->remote_status;
  if (VAR_3) {
   FUNC_1(&VAR_2, ' ');
   FUNC_0(&VAR_2, "", VAR_3, 0);
  }
  FUNC_1(&VAR_2, '\n');

  FUNC_5(1, VAR_2.buf, VAR_2.len);
 }
 FUNC_3(&VAR_2);
}
