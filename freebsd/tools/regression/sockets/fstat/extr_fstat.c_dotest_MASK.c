
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int,int) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, int VAR_1, int VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  FUNC_1(-1, "socket(%d, %d, %d)", VAR_0, VAR_1, VAR_2);

 if (FUNC_2(VAR_4, &VAR_3) < 0)
  FUNC_1(-1, "fstat on socket(%d, %d, %d)", VAR_0, VAR_1,
      VAR_2);

 FUNC_0(VAR_4);
}
