
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_ino; } ;
struct TYPE_4__ {int i_data; } ;
typedef TYPE_1__ PLAN ;
typedef int OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,struct stat*) ;
 char* FUNC_2 (int *,char***) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (char*,struct stat*) ;

PLAN *
FUNC_5(OPTION *VAR_3, char ***VAR_4)
{
 char *VAR_5;
 PLAN *VAR_6;
 struct stat VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 VAR_2 &= ~VAR_0;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_2 & VAR_1)
  VAR_8 = FUNC_1(VAR_5, &VAR_7);
 else
  VAR_8 = FUNC_4(VAR_5, &VAR_7);
 if (VAR_8 != 0)
  FUNC_0(1, "%s", VAR_5);
 VAR_6->i_data = VAR_7.st_ino;
 return VAR_6;
}
