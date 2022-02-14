
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_2__ {char* message; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(git_repository *VAR_0, int VAR_1, char **VAR_2)
{
 git_config *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_3(&VAR_3, VAR_0)) < 0) {
  FUNC_4("Unable to obtain repository config: %s\n", FUNC_2()->message);
  goto out;
 }

 if (VAR_1 == 2) {
  VAR_4 = FUNC_0(VAR_3, VAR_2[1]);
 } else if (VAR_1 == 3) {
  VAR_4 = FUNC_1(VAR_3, VAR_2[1], VAR_2[2]);
 } else {
  FUNC_4("USAGE: %s config <KEY> [<VALUE>]\n", VAR_2[0]);
  VAR_4 = 1;
 }

out:
 return VAR_4;
}
