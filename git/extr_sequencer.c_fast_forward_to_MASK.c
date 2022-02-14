
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct replay_opts*) ;
 scalar_t__ FUNC_2 (struct repository*,struct object_id const*,struct object_id const*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct replay_opts*) ;
 struct object_id const VAR_1 ;
 struct ref_transaction* FUNC_5 (struct strbuf*) ;
 scalar_t__ FUNC_6 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_7 (struct ref_transaction*) ;
 scalar_t__ FUNC_8 (struct ref_transaction*,char*,struct object_id const*,struct object_id const*,int ,int ,struct strbuf*) ;
 int FUNC_9 (struct repository*) ;
 int FUNC_10 (struct strbuf*,int ,int ) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct repository *VAR_2,
      const struct object_id *VAR_3,
      const struct object_id *VAR_4,
      int VAR_5,
      struct replay_opts *VAR_6)
{
 struct ref_transaction *VAR_7;
 struct strbuf VAR_8 = VAR_0;
 struct strbuf VAR_9 = VAR_0;

 FUNC_9(VAR_2);
 if (FUNC_2(VAR_2, VAR_4, VAR_3, 1))
  return -1;

 FUNC_10(&VAR_8, FUNC_0("%s: fast-forward"), FUNC_0(FUNC_1(VAR_6)));

 VAR_7 = FUNC_5(&VAR_9);
 if (!VAR_7 ||
     FUNC_8(VAR_7, "HEAD",
       VAR_3, VAR_5 && !FUNC_4(VAR_6) ?
       &VAR_1 : VAR_4,
       0, VAR_8.buf, &VAR_9) ||
     FUNC_6(VAR_7, &VAR_9)) {
  FUNC_7(VAR_7);
  FUNC_3("%s", VAR_9.buf);
  FUNC_11(&VAR_8);
  FUNC_11(&VAR_9);
  return -1;
 }

 FUNC_11(&VAR_8);
 FUNC_11(&VAR_9);
 FUNC_7(VAR_7);
 FUNC_12();
 return 0;
}
