
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct grab_nth_branch_switch_cbdata {long remaining; struct strbuf* sb; } ;


 int FUNC_0 (struct repository*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (int ,char*,int ,struct grab_nth_branch_switch_cbdata*) ;
 long FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_4(struct repository *VAR_1,
     const char *VAR_2, int VAR_3,
     struct strbuf *VAR_4)
{
 long VAR_5;
 int VAR_6;
 struct grab_nth_branch_switch_cbdata VAR_7;
 const char *VAR_8;
 char *VAR_9;

 if (VAR_3 < 4)
  return -1;
 if (VAR_2[0] != '@' || VAR_2[1] != '{' || VAR_2[2] != '-')
  return -1;
 VAR_8 = FUNC_1(VAR_2, '}', VAR_3);
 if (!VAR_8)
  return -1;
 VAR_5 = FUNC_3(VAR_2 + 3, &VAR_9, 10);
 if (VAR_9 != VAR_8)
  return -1;
 if (VAR_5 <= 0)
  return -1;
 VAR_7.remaining = VAR_5;
 VAR_7.sb = VAR_4;

 VAR_6 = FUNC_2(FUNC_0(VAR_1),
   "HEAD", VAR_0, &VAR_7);
 if (0 < VAR_6) {
  VAR_6 = VAR_8 - VAR_2 + 1;
 } else
  VAR_6 = 0;

 return VAR_6;
}
