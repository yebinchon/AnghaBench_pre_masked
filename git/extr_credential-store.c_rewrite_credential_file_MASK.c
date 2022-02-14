
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct credential {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (char const*,struct credential*,int *,int (*) (struct strbuf*)) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, struct credential *VAR_2,
        struct strbuf *VAR_3)
{
 if (FUNC_2(&VAR_0, VAR_1, 0) < 0)
  FUNC_1("unable to get credential storage lock");
 if (VAR_3)
  FUNC_4(VAR_3);
 FUNC_3(VAR_1, VAR_2, ((void*)0), FUNC_4);
 if (FUNC_0(&VAR_0) < 0)
  FUNC_1("unable to write credential store");
}
