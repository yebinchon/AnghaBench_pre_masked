
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;
struct am_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct am_state const*,char const*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_2, const struct am_state *VAR_3,
   const char *VAR_4, int VAR_5)
{
 FUNC_4(VAR_2);

 if (FUNC_3(VAR_2, FUNC_1(VAR_3, VAR_4), 0) >= 0) {
  if (VAR_5)
   FUNC_5(VAR_2);

  return VAR_2->len;
 }

 if (VAR_1 == VAR_0)
  return -1;

 FUNC_2(FUNC_0("could not read '%s'"), FUNC_1(VAR_3, VAR_4));
}
