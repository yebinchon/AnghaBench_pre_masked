
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct shallow_info {int dummy; } ;
struct command {char const* error_string; struct command* next; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 scalar_t__ FUNC_1 (int ,struct strbuf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct command*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int VAR_1 ;
 char const* FUNC_7 (struct command*,struct shallow_info*) ;

__attribute__((used)) static void FUNC_8(struct command *VAR_2,
     struct shallow_info *VAR_3)
{
 struct command *VAR_4;
 struct strbuf VAR_5 = VAR_0;
 const char *VAR_6 = "atomic push failure";

 VAR_1 = FUNC_0(&VAR_5);
 if (!VAR_1) {
  FUNC_3("%s", VAR_5.buf);
  FUNC_6(&VAR_5);
  VAR_6 = "transaction failed to start";
  goto failure;
 }

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (!FUNC_4(VAR_4))
   continue;

  VAR_4->error_string = FUNC_7(VAR_4, VAR_3);

  if (VAR_4->error_string)
   goto failure;
 }

 if (FUNC_1(VAR_1, &VAR_5)) {
  FUNC_3("%s", VAR_5.buf);
  VAR_6 = "atomic transaction failed";
  goto failure;
 }
 goto cleanup;

failure:
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
  if (!VAR_4->error_string)
   VAR_4->error_string = VAR_6;

cleanup:
 FUNC_2(VAR_1);
 FUNC_5(&VAR_5);
}
