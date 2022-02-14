
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lock_file*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,struct lock_file*,int ) ;

int FUNC_5(int VAR_5, const char **VAR_6)
{
 struct lock_file VAR_7 = VAR_2;

 FUNC_3();
 FUNC_1(&VAR_7, VAR_1);
 if (FUNC_2() < 0)
  FUNC_0("unable to read index file");
 VAR_3 = ((void*)0);
 if (FUNC_4(&VAR_4, &VAR_7, VAR_0))
  FUNC_0("unable to write index file");
 return 0;
}
