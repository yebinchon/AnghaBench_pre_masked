
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int dummy; } ;
typedef int each_reflog_ent_fn ;
typedef int FILE ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 struct files_ref_store* FUNC_1 (struct ref_store*,int ,char*) ;
 int FUNC_2 (struct files_ref_store*,struct strbuf*,char const*) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (struct strbuf*,int ,void*) ;
 int FUNC_5 (struct strbuf*,int *,char) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(struct ref_store *VAR_2,
         const char *VAR_3,
         each_reflog_ent_fn VAR_4, void *VAR_5)
{
 struct files_ref_store *VAR_6 =
  FUNC_1(VAR_2, VAR_0,
          "for_each_reflog_ent");
 FILE *VAR_7;
 struct strbuf VAR_8 = VAR_1;
 int VAR_9 = 0;

 FUNC_2(VAR_6, &VAR_8, VAR_3);
 VAR_7 = FUNC_3(VAR_8.buf, "r");
 FUNC_6(&VAR_8);
 if (!VAR_7)
  return -1;

 while (!VAR_9 && !FUNC_5(&VAR_8, VAR_7, '\n'))
  VAR_9 = FUNC_4(&VAR_8, VAR_4, VAR_5);
 FUNC_0(VAR_7);
 FUNC_6(&VAR_8);
 return VAR_9;
}
