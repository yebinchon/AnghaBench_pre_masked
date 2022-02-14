
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {scalar_t__* buf; scalar_t__ len; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct strbuf*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct string_list*,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_4, struct string_list *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 FILE *VAR_7 = FUNC_3(FUNC_4("%s", VAR_4), "r");

 if (!VAR_7) {
  if (VAR_3 == VAR_0)
   return -1;
  FUNC_1("Could not open file %s for reading",
     FUNC_4("%s", VAR_4));
 }
 while (!FUNC_5(&VAR_6, VAR_7)) {
  if (VAR_6.len && VAR_6.buf[0] == VAR_2)
   continue;
  FUNC_7(&VAR_6);
  if (!VAR_6.len)
   continue;
  FUNC_0(&VAR_6);
  FUNC_8(VAR_5, VAR_6.buf);
 }
 FUNC_2(VAR_7);
 FUNC_6(&VAR_6);
 return 0;
}
