
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,size_t,char const*) ;
 scalar_t__ FUNC_2 (char const*,size_t) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0,
         size_t VAR_1,
         const char *VAR_2)
{
 if (FUNC_2(VAR_0, VAR_1))
  FUNC_3(FUNC_0("'%s': cmd for supported man viewer.\n"
     "Please consider using 'man.<tool>.path' instead."),
   VAR_0);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);

 return 0;
}
