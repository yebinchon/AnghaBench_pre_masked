
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 scalar_t__ FUNC_0 (struct lock_file*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct lock_file*) ;

int FUNC_3(struct lock_file *VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_1, VAR_2)) {
  int VAR_3 = VAR_0;
  FUNC_1(VAR_2);
  VAR_0 = VAR_3;
  return -1;
 }
 FUNC_1(VAR_2);
 return 0;
}
