
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_repository ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,int *,char*,int) ;
 int FUNC_2 (int *,int *,char*,int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(git_repository *VAR_4, git_revwalk *VAR_5, int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = VAR_0;

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (!FUNC_3(VAR_7[VAR_9], "--topo-order")) {
   VAR_11 = VAR_3 | (VAR_11 & VAR_1);
   FUNC_0(VAR_5, VAR_11);
  } else if (!FUNC_3(VAR_7[VAR_9], "--date-order")) {
   VAR_11 = VAR_2 | (VAR_11 & VAR_1);
   FUNC_0(VAR_5, VAR_11);
  } else if (!FUNC_3(VAR_7[VAR_9], "--reverse")) {
   VAR_11 = (VAR_11 & ~VAR_1)
       | ((VAR_11 & VAR_1) ? 0 : VAR_1);
   FUNC_0(VAR_5, VAR_11);
  } else if (!FUNC_3(VAR_7[VAR_9], "--not")) {
   VAR_8 = !VAR_8;
  } else if (VAR_7[VAR_9][0] == '^') {
   if ((VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_7[VAR_9] + 1, !VAR_8)))
    return VAR_10;
  } else if (FUNC_4(VAR_7[VAR_9], "..")) {
   if ((VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_7[VAR_9], VAR_8)))
    return VAR_10;
  } else {
   if ((VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_7[VAR_9], VAR_8)))
    return VAR_10;
  }
 }

 return 0;
}
