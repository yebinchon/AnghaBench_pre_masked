
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int submodule_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(struct diff_options *VAR_3, const char *VAR_4)
{
 if (!FUNC_0(VAR_4, "log"))
  VAR_3->submodule_format = VAR_1;
 else if (!FUNC_0(VAR_4, "short"))
  VAR_3->submodule_format = VAR_2;
 else if (!FUNC_0(VAR_4, "diff"))
  VAR_3->submodule_format = VAR_0;




 else
  return -1;
 return 0;
}
