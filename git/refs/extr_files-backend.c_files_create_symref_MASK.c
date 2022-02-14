
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;
struct ref_lock {int dummy; } ;
struct files_ref_store {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct files_ref_store*,struct ref_lock*,char const*,char const*,char const*) ;
 int FUNC_1 (char*,int ) ;
 struct files_ref_store* FUNC_2 (struct ref_store*,int ,char*) ;
 struct ref_lock* FUNC_3 (struct files_ref_store*,char const*,int *,int *,int *,int ,int *,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct ref_lock*) ;

__attribute__((used)) static int FUNC_6(struct ref_store *VAR_3,
          const char *VAR_4, const char *VAR_5,
          const char *VAR_6)
{
 struct files_ref_store *VAR_7 =
  FUNC_2(VAR_3, VAR_1, "create_symref");
 struct strbuf VAR_8 = VAR_2;
 struct ref_lock *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_7, VAR_4, ((void*)0),
      ((void*)0), ((void*)0), VAR_0, ((void*)0),
      &VAR_8);
 if (!VAR_9) {
  FUNC_1("%s", VAR_8.buf);
  FUNC_4(&VAR_8);
  return -1;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_4, VAR_5, VAR_6);
 FUNC_5(VAR_9);
 return VAR_10;
}
