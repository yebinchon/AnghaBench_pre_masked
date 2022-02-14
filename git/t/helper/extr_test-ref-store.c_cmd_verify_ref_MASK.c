
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct ref_store {int dummy; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ref_store*,char const*,int *,int *,struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct ref_store *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = FUNC_0(*VAR_2++, "refname");
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3, ((void*)0), ((void*)0), &VAR_4);
 if (VAR_4.len)
  FUNC_1(VAR_4.buf);
 return VAR_5;
}
