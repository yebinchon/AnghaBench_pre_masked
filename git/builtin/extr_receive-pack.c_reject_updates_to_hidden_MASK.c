
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;
struct command {char* error_string; int new_oid; int ref_name; struct command* next; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_6(struct command *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 size_t VAR_3;
 struct command *VAR_4;

 FUNC_3(&VAR_2, FUNC_0());
 VAR_3 = VAR_2.len;

 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->error_string)
   continue;

  FUNC_5(&VAR_2, VAR_3);
  FUNC_3(&VAR_2, VAR_4->ref_name);

  if (!FUNC_2(VAR_4->ref_name, VAR_2.buf))
   continue;
  if (FUNC_1(&VAR_4->new_oid))
   VAR_4->error_string = "deny deleting a hidden ref";
  else
   VAR_4->error_string = "deny updating a hidden ref";
 }

 FUNC_4(&VAR_2);
}
