
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,char*,int,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 char *VAR_2 = "[^={} \t]+";
 char *VAR_3 = "={}\nfred";
 regex_t VAR_4;
 regmatch_t VAR_5[1];

 if (FUNC_1(&VAR_4, VAR_2, VAR_0 | VAR_1))
  FUNC_0("failed regcomp() for pattern '%s'", VAR_2);
 if (FUNC_2(&VAR_4, VAR_3, 1, VAR_5, 0))
  FUNC_0("no match of pattern '%s' to string '%s'", VAR_2, VAR_3);


 if (VAR_5[0].rm_so == 3)
  FUNC_0("regex bug confirmed: re-build git with NO_REGEX=1");

 return 0;
}
