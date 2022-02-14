
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {char const* buf; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 struct string_list VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct string_list*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct string_list*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int,char const**,char const*,int ,int ,int ) ;
 int FUNC_7 (struct string_list*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (struct strbuf*,int ) ;
 int FUNC_9 (struct strbuf*) ;
 scalar_t__ VAR_8 ;

int FUNC_10(int VAR_9, const char **VAR_10, const char *VAR_11)
{
 int VAR_12;
 struct string_list VAR_13 = VAR_2;

 FUNC_4(VAR_5, ((void*)0));
 VAR_9 = FUNC_6(VAR_9, VAR_10, VAR_11, VAR_3,
        VAR_4, 0);
 if (VAR_9 == 0 && !VAR_8)
  FUNC_3(FUNC_0("no contacts specified"));

 FUNC_7(&VAR_13, ((void*)0));

 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12)
  FUNC_1(&VAR_13, VAR_10[VAR_12]);
 FUNC_5(VAR_7, "stdout");

 if (VAR_8) {
  struct strbuf VAR_14 = VAR_1;
  while (FUNC_8(&VAR_14, VAR_6) != VAR_0) {
   FUNC_1(&VAR_13, VAR_14.buf);
   FUNC_5(VAR_7, "stdout");
  }
  FUNC_9(&VAR_14);
 }

 FUNC_2(&VAR_13);
 return 0;
}
