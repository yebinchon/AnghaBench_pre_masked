
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int buf; } ;
struct TYPE_2__ {int string; } ;


 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct string_list*) ;
 int FUNC_3 (struct string_list*) ;
 int FUNC_4 (struct string_list*) ;
 int FUNC_5 (struct string_list*) ;
 int FUNC_6 (struct string_list*,int ) ;
 int FUNC_7 (struct string_list*,int ) ;
 int FUNC_8 (struct string_list*) ;
 scalar_t__ FUNC_9 (char const*,int,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (struct strbuf*,char const*,int) ;
 int FUNC_13 (struct strbuf*) ;
 char* FUNC_14 (char const*,char) ;
 int FUNC_15 (struct string_list*,int ) ;
 int FUNC_16 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_17(const char *VAR_2)
{
 struct string_list VAR_3 = VAR_1;
 int VAR_4;
 int VAR_5;





 FUNC_11(&VAR_5);

 while (*VAR_2) {
  const char *VAR_6 = FUNC_14(VAR_2, ',');
  int VAR_7 = VAR_6 - VAR_2;

  if (FUNC_9(VAR_2, VAR_7, "builtins"))
   FUNC_6(&VAR_3, 0);
  else if (FUNC_9(VAR_2, VAR_7, "main"))
   FUNC_4(&VAR_3);
  else if (FUNC_9(VAR_2, VAR_7, "others"))
   FUNC_5(&VAR_3);
  else if (FUNC_9(VAR_2, VAR_7, "nohelpers"))
   FUNC_2(&VAR_3);
  else if (FUNC_9(VAR_2, VAR_7, "alias"))
   FUNC_3(&VAR_3);
  else if (FUNC_9(VAR_2, VAR_7, "config"))
   FUNC_8(&VAR_3);
  else if (VAR_7 > 5 && !FUNC_16(VAR_2, "list-", 5)) {
   struct strbuf VAR_8 = VAR_0;

   FUNC_12(&VAR_8, VAR_2 + 5, VAR_7 - 5);
   FUNC_7(&VAR_3, VAR_8.buf);
   FUNC_13(&VAR_8);
  }
  else
   FUNC_1(FUNC_0("unsupported command listing type '%s'"), VAR_2);
  VAR_2 += VAR_7;
  if (*VAR_2 == ',')
   VAR_2++;
 }
 for (VAR_4 = 0; VAR_4 < VAR_3.nr; VAR_4++)
  FUNC_10(VAR_3.items[VAR_4].string);
 FUNC_15(&VAR_3, 0);
 return 0;
}
