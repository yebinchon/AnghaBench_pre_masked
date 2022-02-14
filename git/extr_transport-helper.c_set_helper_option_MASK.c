
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct helper_data* data; } ;
struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct helper_data {int option; } ;


 int FUNC_0 (char**) ;
 struct strbuf VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (struct transport*) ;
 int FUNC_2 (char const*,struct strbuf*,int *,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,char const*) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct helper_data*,struct strbuf*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (struct helper_data*,char const*,struct string_list*) ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_10(struct transport *VAR_3,
     const char *VAR_4, const char *VAR_5)
{
 struct helper_data *VAR_6 = VAR_3->data;
 struct strbuf VAR_7 = VAR_0;
 int VAR_8, VAR_9, VAR_10 = 0;

 FUNC_1(VAR_3);

 if (!VAR_6->option)
  return 1;

 if (!FUNC_8(VAR_4, "deepen-not"))
  return FUNC_9(VAR_6, VAR_4,
           (struct string_list *)VAR_5);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (!FUNC_8(VAR_4, VAR_2[VAR_8]))
   return 1;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (!FUNC_8(VAR_4, VAR_1[VAR_8])) {
   VAR_10 = 1;
   break;
  }
 }

 FUNC_4(&VAR_7, "option %s ", VAR_4);
 if (VAR_10)
  FUNC_5(&VAR_7, VAR_5 ? "true" : "false");
 else
  FUNC_2(VAR_5, &VAR_7, ((void*)0), 0);
 FUNC_3(&VAR_7, '\n');

 VAR_9 = FUNC_7(VAR_6, &VAR_7);
 FUNC_6(&VAR_7);
 return VAR_9;
}
