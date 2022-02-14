
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(char *VAR_6)
{
        struct stat VAR_7;


        if (FUNC_1(VAR_6, VAR_3) == 0 &&
            FUNC_4(VAR_6, &VAR_7) == 0 &&
            FUNC_0(VAR_7.st_mode) &&
            (FUNC_3() != 0 ||
            (VAR_7.st_mode & (VAR_2 | VAR_0 | VAR_1)) != 0)) {
                if (VAR_4 > 1)
   FUNC_2(VAR_5, "#env   matched:\t'%s'\n", VAR_6);
                return (1);
        }
        return (0);
}
