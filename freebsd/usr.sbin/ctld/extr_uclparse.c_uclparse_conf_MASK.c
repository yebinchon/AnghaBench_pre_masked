
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
struct conf {int dummy; } ;


 struct conf* VAR_0 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (struct ucl_parser*,char const*) ;
 int FUNC_2 (struct ucl_parser*) ;
 int FUNC_3 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct conf *VAR_1, const char *VAR_2)
{
 struct ucl_parser *VAR_3;
 int VAR_4;

 VAR_0 = VAR_1;
 VAR_3 = FUNC_4(0);

 if (!FUNC_1(VAR_3, VAR_2)) {
  FUNC_0("unable to parse configuration file %s: %s", VAR_2,
      FUNC_2(VAR_3));
  return (1);
 }

 VAR_4 = FUNC_5(FUNC_3(VAR_3));

 return (VAR_4);
}
