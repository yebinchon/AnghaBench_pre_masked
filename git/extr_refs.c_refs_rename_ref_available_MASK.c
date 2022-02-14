
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;


 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ref_store*,char const*,int *,struct string_list*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*,char const*) ;

int FUNC_5(struct ref_store *VAR_2,
         const char *VAR_3,
         const char *VAR_4)
{
 struct string_list VAR_5 = VAR_1;
 struct strbuf VAR_6 = VAR_0;
 int VAR_7;

 FUNC_4(&VAR_5, VAR_3);
 VAR_7 = !FUNC_1(VAR_2, VAR_4,
         ((void*)0), &VAR_5, &VAR_6);
 if (!VAR_7)
  FUNC_0("%s", VAR_6.buf);

 FUNC_3(&VAR_5, 0);
 FUNC_2(&VAR_6);
 return VAR_7;
}
