
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pathspec {int dummy; } ;
struct option {int dummy; } ;
typedef int ps ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (unsigned char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,char*,int*,int ,int) ;
 struct option FUNC_4 (char,char*,char const**,char*,int ) ;
 struct option FUNC_5 (int*,int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_6 (struct pathspec*,char const*,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_7 (struct pathspec*,int ,int) ;
 int FUNC_8 (int,char const**,char const*,struct option*,int ,int ) ;
 char* FUNC_9 (struct strbuf*,int,char const**,char) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static int FUNC_11(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = -1;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 const char *VAR_11 = ((void*)0);
 struct pathspec VAR_12;
 struct strbuf VAR_13 = VAR_1;
 struct option VAR_14[] = {
  FUNC_1('k', "keep-index", &VAR_6,
    FUNC_0("keep index")),
  FUNC_1('p', "patch", &VAR_7,
    FUNC_0("stash in patch mode")),
  FUNC_5(&VAR_9, FUNC_0("quiet mode")),
  FUNC_1('u', "include-untracked", &VAR_8,
    FUNC_0("include untracked files in stash")),
  FUNC_3('a', "all", &VAR_8,
       FUNC_0("include ignore files"), 2),
  FUNC_4('m', "message", &VAR_11, "message",
      FUNC_0("stash message")),
  FUNC_2()
 };

 VAR_3 = FUNC_8(VAR_3, VAR_4, VAR_5, VAR_14,
        VAR_2,
        VAR_0);

 if (VAR_3)
  VAR_11 = FUNC_9(&VAR_13, VAR_3, VAR_4, ' ');

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_10 = FUNC_6(&VAR_12, VAR_11, VAR_9, VAR_6,
       VAR_7, VAR_8);

 FUNC_10(&VAR_13);
 return VAR_10;
}
