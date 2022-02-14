
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (unsigned char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,char*,int*,int ,int) ;
 struct option FUNC_4 (char,char*,char const**,int ,int ) ;
 struct option FUNC_5 (int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct pathspec*,char const*,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_7 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_8 (struct pathspec*,int ,int,char const*,char const**) ;

__attribute__((used)) static int FUNC_9(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = -1;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 const char *VAR_10 = ((void*)0);
 struct pathspec VAR_11;
 struct option VAR_12[] = {
  FUNC_1('k', "keep-index", &VAR_6,
    FUNC_0("keep index")),
  FUNC_1('p', "patch", &VAR_7,
    FUNC_0("stash in patch mode")),
  FUNC_5(&VAR_9, FUNC_0("quiet mode")),
  FUNC_1('u', "include-untracked", &VAR_8,
    FUNC_0("include untracked files in stash")),
  FUNC_3('a', "all", &VAR_8,
       FUNC_0("include ignore files"), 2),
  FUNC_4('m', "message", &VAR_10, FUNC_0("message"),
      FUNC_0("stash message")),
  FUNC_2()
 };

 if (VAR_3)
  VAR_3 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_12,
         VAR_2,
         0);

 FUNC_8(&VAR_11, 0, VAR_0 | VAR_1,
         VAR_5, VAR_4);
 return FUNC_6(&VAR_11, VAR_10, VAR_9, VAR_6, VAR_7,
        VAR_8);
}
