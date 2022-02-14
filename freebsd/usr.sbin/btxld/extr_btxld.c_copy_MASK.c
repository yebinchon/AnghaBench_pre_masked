
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int buf ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int,char*,size_t,int) ;
 int FUNC_2 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, int VAR_2, size_t VAR_3, off_t VAR_4)
{
    char VAR_5[8192];
    size_t VAR_6;

    while (VAR_3) {
 if ((VAR_6 = sizeof(VAR_5)) > VAR_3)
     VAR_6 = VAR_3;
 if (FUNC_1(VAR_1, VAR_5, VAR_6, VAR_4) != VAR_6)
     FUNC_0(2, "%s: Short read", VAR_0);
 FUNC_2(VAR_2, VAR_5, VAR_6);
 VAR_3 -= VAR_6;
 VAR_4 = -1;
    }
}
