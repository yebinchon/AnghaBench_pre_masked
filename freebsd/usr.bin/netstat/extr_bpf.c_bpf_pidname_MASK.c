
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {char* ki_comm; } ;
typedef int pid_t ;
typedef int newkp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int*,int,struct kinfo_proc*,size_t*,int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(pid_t VAR_3)
{
 struct kinfo_proc VAR_4;
 int VAR_5, VAR_6[4];
 size_t VAR_7;

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_1;
 VAR_6[2] = VAR_2;
 VAR_6[3] = VAR_3;
 VAR_7 = sizeof(VAR_4);
 VAR_5 = FUNC_1(VAR_6, 4, &VAR_4, &VAR_7, ((void*)0), 0);
 if (VAR_5 < 0) {
  FUNC_2("kern.proc.pid failed");
  return (FUNC_0("??????"));
 }
 return (FUNC_0(VAR_4.ki_comm));
}
