
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 if (VAR_5)
  VAR_2 = 0;
 else if (VAR_4)
  VAR_2 = FUNC_2(VAR_4);
 else
  VAR_2 = VAR_0;

 if (VAR_2 < 0)
  FUNC_1(FUNC_0("invalid --decorate option: %s"), VAR_4);

 VAR_1 = 1;

 return 0;
}
