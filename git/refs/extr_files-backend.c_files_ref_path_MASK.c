
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct files_ref_store {int gitcommondir; int gitdir; } ;


 int FUNC_0 (char*,...) ;





 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (struct strbuf*,char*,int ,char const*) ;

__attribute__((used)) static void FUNC_4(struct files_ref_store *VAR_0,
      struct strbuf *VAR_1,
      const char *VAR_2)
{
 switch (FUNC_1(VAR_2)) {
 case 129:
 case 128:
  FUNC_3(VAR_1, "%s/%s", VAR_0->gitdir, VAR_2);
  break;
 case 132:
  if (!FUNC_2(VAR_2, "main-worktree/", &VAR_2))
   FUNC_0("ref %s is not a main pseudoref", VAR_2);

 case 130:
 case 131:
  FUNC_3(VAR_1, "%s/%s", VAR_0->gitcommondir, VAR_2);
  break;
 default:
  FUNC_0("unknown ref type %d of ref %s",
      FUNC_1(VAR_2), VAR_2);
 }
}
