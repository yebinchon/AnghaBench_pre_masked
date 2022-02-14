
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {char const* ki_comm; } ;
typedef int proc ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,struct kinfo_proc*,size_t*,int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3(pid_t VAR_5)
{
 static struct kinfo_proc VAR_6;
 size_t VAR_7;
 int VAR_8[4];

 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_2;
 VAR_8[2] = VAR_3;
 VAR_8[3] = (int)VAR_5;
 VAR_7 = sizeof(VAR_6);
 if (FUNC_1(VAR_8, FUNC_0(VAR_8), &VAR_6, &VAR_7, ((void*)0), 0) == -1) {

  if (VAR_4 != VAR_1)
   FUNC_2("sysctl()");
  return ("??");
 }
 return (VAR_6.ki_comm);
}
