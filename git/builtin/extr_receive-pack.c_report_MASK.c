
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct command {int error_string; int ref_name; struct command* next; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,char const*,...) ;
 int FUNC_2 (int,int,int ,int ,scalar_t__) ;
 int FUNC_3 (struct strbuf*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct command *VAR_2, const char *VAR_3)
{
 struct command *VAR_4;
 struct strbuf VAR_5 = VAR_0;

 FUNC_1(&VAR_5, "unpack %s\n",
    VAR_3 ? VAR_3 : "ok");
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (!VAR_4->error_string)
   FUNC_1(&VAR_5, "ok %s\n",
      VAR_4->ref_name);
  else
   FUNC_1(&VAR_5, "ng %s %s\n",
      VAR_4->ref_name, VAR_4->error_string);
 }
 FUNC_0(&VAR_5);

 if (VAR_1)
  FUNC_2(1, 1, VAR_5.buf, VAR_5.len, VAR_1);
 else
  FUNC_4(1, VAR_5.buf, VAR_5.len);
 FUNC_3(&VAR_5);
}
