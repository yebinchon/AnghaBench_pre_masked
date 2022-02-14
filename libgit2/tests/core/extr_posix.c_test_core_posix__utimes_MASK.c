
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_atime; int st_mtime; } ;
struct p_timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct p_timeval*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,struct p_timeval*) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 struct p_timeval VAR_1[2];
 struct stat VAR_2;
 time_t VAR_3;
 int VAR_4;


 VAR_1[0].tv_sec = 1234567890;
 VAR_1[0].tv_usec = 0;
 VAR_1[1].tv_sec = 1234567890;
 VAR_1[1].tv_usec = 0;

 FUNC_2("foo", "Dummy file.");
 FUNC_3(FUNC_9("foo", VAR_1));

 FUNC_3(FUNC_7("foo", &VAR_2));
 FUNC_1(1234567890, VAR_2.st_atime);
 FUNC_1(1234567890, VAR_2.st_mtime);



 VAR_1[0].tv_sec = 1414141414;
 VAR_1[0].tv_usec = 0;
 VAR_1[1].tv_sec = 1414141414;
 VAR_1[1].tv_usec = 0;

 FUNC_3(VAR_4 = FUNC_6("foo", VAR_0));
 FUNC_3(FUNC_5(VAR_4, VAR_1));
 FUNC_3(FUNC_4(VAR_4));

 FUNC_3(FUNC_7("foo", &VAR_2));
 FUNC_1(1414141414, VAR_2.st_atime);
 FUNC_1(1414141414, VAR_2.st_mtime);





 FUNC_3(FUNC_9("foo", ((void*)0)));

 VAR_3 = FUNC_10(((void*)0));
 FUNC_3(FUNC_7("foo", &VAR_2));
 FUNC_0((VAR_2.st_atime - VAR_3) < 5);
 FUNC_0((VAR_2.st_mtime - VAR_3) < 5);

 FUNC_3(FUNC_8("foo"));
}
