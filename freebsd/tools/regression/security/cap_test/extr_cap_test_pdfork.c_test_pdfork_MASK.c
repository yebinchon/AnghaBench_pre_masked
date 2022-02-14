
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_birthtime; scalar_t__ st_atime; scalar_t__ st_ctime; scalar_t__ st_mtime; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,struct stat*) ;
 scalar_t__ FUNC_9 (int*,int ) ;
 int FUNC_10 (int,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (scalar_t__,int*,int ) ;

int
FUNC_13(void)
{
 struct stat VAR_4;
 int VAR_5 = VAR_2;
 int VAR_6, VAR_7;
 pid_t VAR_8;
 time_t VAR_9;



 VAR_8 = FUNC_9(&VAR_6, 0);
 if (VAR_8 < 0)
  FUNC_6(-1, "pdfork");

 else if (VAR_8 == 0) {





  VAR_7 = FUNC_10(VAR_6, &VAR_8);
  if (VAR_7 != -1)
   FUNC_2("pdgetpid succeeded");
  else if (VAR_3 != VAR_0)
   FUNC_1("pdgetpid failed, but errno != EBADF");

  FUNC_7(VAR_5);
 }


 FUNC_3(FUNC_8(VAR_6, &VAR_4));

 VAR_9 = FUNC_11(((void*)0));
 FUNC_0(VAR_9 != (time_t)-1);

 FUNC_0(VAR_9 >= VAR_4.st_birthtime);
 FUNC_0((VAR_9 - VAR_4.st_birthtime) < 2);
 FUNC_0(VAR_4.st_birthtime == VAR_4.st_atime);
 FUNC_0(VAR_4.st_atime == VAR_4.st_ctime);
 FUNC_0(VAR_4.st_ctime == VAR_4.st_mtime);


 VAR_7 = FUNC_10(VAR_6, &VAR_8);
 FUNC_0(VAR_7 == 0);
 FUNC_0(VAR_8 > 0);

 int VAR_10;
 while (FUNC_12(VAR_8, &VAR_10, 0) != VAR_8) {}
 if ((VAR_5 == VAR_2) && FUNC_5(VAR_10))
  VAR_5 = FUNC_4(VAR_10);
 else
  VAR_5 = VAR_1;

 return (VAR_5);
}
