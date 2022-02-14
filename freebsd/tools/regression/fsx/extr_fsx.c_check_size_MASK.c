
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

void
FUNC_5(void)
{
 struct stat VAR_3;
 off_t VAR_4;

 if (FUNC_0(VAR_1, &VAR_3)) {
  FUNC_3("check_size: fstat");
  VAR_3.st_size = -1;
 }
 VAR_4 = FUNC_1(VAR_1, (off_t)0, VAR_0);
 if (VAR_2 != VAR_3.st_size || VAR_2 != VAR_4) {
  FUNC_2("Size error: expected 0x%llx stat 0x%llx seek 0x%llx\n",
      (unsigned long long)VAR_2,
      (unsigned long long)VAR_3.st_size,
      (unsigned long long)VAR_4);
  FUNC_4(120);
 }
}
