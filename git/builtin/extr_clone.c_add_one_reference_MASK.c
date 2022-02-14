
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; } ;
struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,struct strbuf*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int FUNC_6 (struct strbuf*,char*,char*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static int FUNC_8(struct string_list_item *VAR_2, void *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int *VAR_5 = VAR_3;
 char *VAR_6 = FUNC_2(VAR_2->string, &VAR_4);

 if (!VAR_6) {
  if (*VAR_5)
   FUNC_3("%s", VAR_4.buf);
  else
   FUNC_4(VAR_1,
    FUNC_0("info: Could not add alternate for '%s': %s\n"),
    VAR_2->string, VAR_4.buf);
 } else {
  struct strbuf VAR_7 = VAR_0;
  FUNC_6(&VAR_7, "%s/objects", VAR_6);
  FUNC_1(VAR_7.buf);
  FUNC_7(&VAR_7);
 }

 FUNC_7(&VAR_4);
 FUNC_5(VAR_6);
 return 0;
}
