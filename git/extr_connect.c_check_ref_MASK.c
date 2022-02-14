
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,char*,char const**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, unsigned int VAR_4)
{
 if (!VAR_4)
  return 1;

 if (!FUNC_1(VAR_3, "refs/", &VAR_3))
  return 0;


 if ((VAR_4 & VAR_1) && FUNC_0(VAR_3, 0))
  return 0;


 if ((VAR_4 & VAR_0) && FUNC_2(VAR_3, "heads/"))
  return 1;


 if ((VAR_4 & VAR_2) && FUNC_2(VAR_3, "tags/"))
  return 1;


 return !(VAR_4 & ~VAR_1);
}
