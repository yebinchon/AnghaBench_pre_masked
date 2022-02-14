
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsck_gitmodules_data {int obj; int options; int ret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_4 (int ,int ,int ,char*,char const*) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 struct fsck_gitmodules_data *VAR_6 = VAR_5;
 const char *VAR_7, *VAR_8;
 int VAR_9;
 char *VAR_10;

 if (FUNC_3(VAR_3, "submodule", &VAR_7, &VAR_9, &VAR_8) < 0 ||
     !VAR_7)
  return 0;

 VAR_10 = FUNC_6(VAR_7, VAR_9);
 if (FUNC_0(VAR_10) < 0)
  VAR_6->ret |= FUNC_4(VAR_6->options, VAR_6->obj,
        VAR_0,
        "disallowed submodule name: %s",
        VAR_10);
 if (!FUNC_5(VAR_8, "url") && VAR_4 &&
     FUNC_2(VAR_4))
  VAR_6->ret |= FUNC_4(VAR_6->options, VAR_6->obj,
        VAR_2,
        "disallowed submodule url: %s",
        VAR_4);
 if (!FUNC_5(VAR_8, "path") && VAR_4 &&
     FUNC_2(VAR_4))
  VAR_6->ret |= FUNC_4(VAR_6->options, VAR_6->obj,
        VAR_1,
        "disallowed submodule path: %s",
        VAR_4);
 FUNC_1(VAR_10);

 return 0;
}
