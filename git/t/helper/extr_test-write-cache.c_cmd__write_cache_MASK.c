
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lock_file*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,struct lock_file*,int ) ;

int FUNC_6(int VAR_4, const char **VAR_5)
{
 struct lock_file VAR_6 = VAR_2;
 int VAR_7, VAR_8 = 1;
 if (VAR_4 == 2)
  VAR_8 = FUNC_4(VAR_5[1], ((void*)0), 0);
 FUNC_3();
 FUNC_2();
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_1(&VAR_6, VAR_1);
  if (FUNC_5(&VAR_3, &VAR_6, VAR_0))
   FUNC_0("unable to write index file");
 }

 return 0;
}
