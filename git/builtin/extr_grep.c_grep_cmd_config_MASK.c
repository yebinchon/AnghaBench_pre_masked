
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,void*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 int VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (FUNC_2(VAR_3, VAR_4, VAR_5) < 0)
  VAR_6 = -1;

 if (!FUNC_6(VAR_3, "grep.threads")) {
  VAR_1 = FUNC_4(VAR_3, VAR_4);
  if (VAR_1 < 0)
   FUNC_1(FUNC_0("invalid number of threads specified (%d) for %s"),
       VAR_1, VAR_3);
  else if (!VAR_0 && VAR_1 > 1) {





   FUNC_7(FUNC_0("no threads support, ignoring %s"), VAR_3);
   VAR_1 = 1;
  }
 }

 if (!FUNC_6(VAR_3, "submodule.recurse"))
  VAR_2 = FUNC_3(VAR_3, VAR_4);

 return VAR_6;
}
