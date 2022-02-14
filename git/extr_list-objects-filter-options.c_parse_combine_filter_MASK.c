
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;
struct list_objects_filter_options {int choice; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct list_objects_filter_options*) ;
 int FUNC_3 (struct list_objects_filter_options*,int ,int) ;
 int FUNC_4 (struct list_objects_filter_options*,struct strbuf*,struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 int FUNC_6 (struct strbuf**) ;
 int FUNC_7 (struct strbuf*,size_t,int) ;
 struct strbuf** FUNC_8 (char const*,char,int ) ;

__attribute__((used)) static int FUNC_9(
 struct list_objects_filter_options *VAR_1,
 const char *VAR_2,
 struct strbuf *VAR_3)
{
 struct strbuf **VAR_4 = FUNC_8(VAR_2, '+', 0);
 size_t VAR_5;
 int VAR_6 = 0;

 if (!VAR_4[0]) {
  FUNC_5(VAR_3, FUNC_0("expected something after combine:"));
  VAR_6 = 1;
  goto cleanup;
 }

 for (VAR_5 = 0; VAR_4[VAR_5] && !VAR_6; VAR_5++) {
  if (VAR_4[VAR_5 + 1]) {




   size_t VAR_7 = VAR_4[VAR_5]->len - 1;
   FUNC_1(VAR_4[VAR_5]->buf[VAR_7] == '+');
   FUNC_7(VAR_4[VAR_5], VAR_7, 1);
  }
  VAR_6 = FUNC_4(
   VAR_1, VAR_4[VAR_5], VAR_3);
 }

 VAR_1->choice = VAR_0;

cleanup:
 FUNC_6(VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_1, 0, sizeof(*VAR_1));
 }
 return VAR_6;
}
