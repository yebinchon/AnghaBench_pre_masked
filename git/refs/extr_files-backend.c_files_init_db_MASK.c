
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 struct files_ref_store* FUNC_0 (struct ref_store*,int ,char*) ;
 int FUNC_1 (struct files_ref_store*,struct strbuf*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static int FUNC_5(struct ref_store *VAR_2, struct strbuf *VAR_3)
{
 struct files_ref_store *VAR_4 =
  FUNC_0(VAR_2, VAR_0, "init_db");
 struct strbuf VAR_5 = VAR_1;




 FUNC_1(VAR_4, &VAR_5, "refs/heads");
 FUNC_2(VAR_5.buf, 1);

 FUNC_4(&VAR_5);
 FUNC_1(VAR_4, &VAR_5, "refs/tags");
 FUNC_2(VAR_5.buf, 1);

 FUNC_3(&VAR_5);
 return 0;
}
