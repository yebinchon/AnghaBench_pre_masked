
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct ref_store {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ref_store*,char const*,int,struct strbuf*) ;

__attribute__((used)) static int FUNC_4(struct ref_store *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = FUNC_1(*VAR_2++, "refname");
 int VAR_4 = FUNC_0(*VAR_2++, "force-create");
 struct strbuf VAR_5 = VAR_0;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4, &VAR_5);
 if (VAR_5.len)
  FUNC_2(VAR_5.buf);
 return VAR_6;
}
