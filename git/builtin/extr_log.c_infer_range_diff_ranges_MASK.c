
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char const* FUNC_2 (int *) ;
 int FUNC_3 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_0,
        struct strbuf *VAR_1,
        const char *VAR_2,
        struct commit *VAR_3,
        struct commit *VAR_4)
{
 const char *VAR_5 = FUNC_2(&VAR_4->object.oid);

 if (!FUNC_5(VAR_2, "..")) {
  FUNC_3(VAR_0, "%s..%s", VAR_5, VAR_2);
  FUNC_3(VAR_1, "%s..%s", VAR_2, VAR_5);
 } else if (!VAR_3) {
  FUNC_1(FUNC_0("failed to infer range-diff ranges"));
 } else {
  FUNC_4(VAR_0, VAR_2);
  FUNC_3(VAR_1, "%s..%s",
       FUNC_2(&VAR_3->object.oid), VAR_5);
 }
}
