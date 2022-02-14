
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*,void*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 const char *VAR_5;

 if (!FUNC_4(VAR_2, "help.autocorrect"))
  VAR_1 = FUNC_1(VAR_2,VAR_3);

 if (FUNC_3(VAR_2, "alias.", &VAR_5))
  FUNC_0(&VAR_0, VAR_5, FUNC_5(VAR_5));

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
