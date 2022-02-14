
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct files_ref_store* FUNC_1 (struct ref_store*,int ,char*) ;
 scalar_t__ FUNC_2 (struct files_ref_store*,char const*,int,int*,struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct ref_store *VAR_1,
          const char *VAR_2, int VAR_3,
          struct strbuf *VAR_4)
{
 struct files_ref_store *VAR_5 =
  FUNC_1(VAR_1, VAR_0, "create_reflog");
 int VAR_6;

 if (FUNC_2(VAR_5, VAR_2, VAR_3, &VAR_6, VAR_4))
  return -1;

 if (VAR_6 >= 0)
  FUNC_0(VAR_6);

 return 0;
}
