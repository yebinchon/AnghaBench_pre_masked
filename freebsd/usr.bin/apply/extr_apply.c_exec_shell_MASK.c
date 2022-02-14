
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const*,char const*,char*,char const*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int*,int ) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 pid_t VAR_7;
 int VAR_8, VAR_9;
 sig_t VAR_10, VAR_11;

 if (!VAR_4)
  return(1);

 VAR_8 = FUNC_3(FUNC_4(VAR_0));
 switch(VAR_7 = FUNC_7()) {
 case -1:
  FUNC_1(1, "vfork");
 case 0:
  (void)FUNC_6(VAR_8);
  FUNC_2(VAR_5, VAR_6, "-c", VAR_4, (char *)((void*)0));
  FUNC_9("%s", VAR_5);
  FUNC_0(1);
 }
 VAR_10 = FUNC_5(VAR_1, VAR_3);
 VAR_11 = FUNC_5(VAR_2, VAR_3);
 VAR_7 = FUNC_8(VAR_7, &VAR_9, 0);
 (void)FUNC_6(VAR_8);
 (void)FUNC_5(VAR_1, VAR_10);
 (void)FUNC_5(VAR_2, VAR_11);
 return(VAR_7 == -1 ? -1 : VAR_9);
}
