
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct stat {int st_mode; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct files_ref_store* FUNC_1 (struct ref_store*,int ,char*) ;
 int FUNC_2 (struct files_ref_store*,struct strbuf*,char const*) ;
 int FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static int FUNC_5(struct ref_store *VAR_2,
          const char *VAR_3)
{
 struct files_ref_store *VAR_4 =
  FUNC_1(VAR_2, VAR_0, "reflog_exists");
 struct strbuf VAR_5 = VAR_1;
 struct stat VAR_6;
 int VAR_7;

 FUNC_2(VAR_4, &VAR_5, VAR_3);
 VAR_7 = !FUNC_3(VAR_5.buf, &VAR_6) && FUNC_0(VAR_6.st_mode);
 FUNC_4(&VAR_5);
 return VAR_7;
}
