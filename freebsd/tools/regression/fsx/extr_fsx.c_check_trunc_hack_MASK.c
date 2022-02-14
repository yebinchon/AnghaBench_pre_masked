
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*) ;

void
FUNC_4(void)
{
 struct stat VAR_1;

 FUNC_2(VAR_0, (off_t)0);
 FUNC_2(VAR_0, (off_t)100000);
 FUNC_1(VAR_0, &VAR_1);
 if (VAR_1.st_size != (off_t)100000) {
  FUNC_3("no extend on truncate! not posix!\n");
  FUNC_0(130);
 }
 FUNC_2(VAR_0, (off_t)0);
}
