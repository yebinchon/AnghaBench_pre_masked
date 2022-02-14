
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,struct stat*) ;
 int VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct stat VAR_3;

 if (FUNC_2(VAR_2, &VAR_3) == -1) {
  FUNC_0(1, "stat");

 }

 if (VAR_1 > VAR_3.st_size) {
  FUNC_1(1, "can't split into more than %d files",
      (int)VAR_3.st_size);

 }

 VAR_0 = VAR_3.st_size / VAR_1;
 FUNC_3();
}
