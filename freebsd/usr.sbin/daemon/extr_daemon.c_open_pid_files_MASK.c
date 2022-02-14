
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 struct pidfh* FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (struct pidfh*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, const char *VAR_3,
        struct pidfh **VAR_4, struct pidfh **VAR_5)
{
 pid_t VAR_6;
 int VAR_7;

 if (VAR_2) {
  *VAR_4 = FUNC_2(VAR_2, 0600, &VAR_6);
  if (*VAR_4 == ((void*)0)) {
   if (VAR_1 == VAR_0) {
    FUNC_1(3, "process already running, pid: %d",
        VAR_6);
   }
   FUNC_0(2, "pidfile ``%s''", VAR_2);
  }
 }

 if (VAR_3) {
  *VAR_5 = FUNC_2(VAR_3, 0600, &VAR_6);
  if (*VAR_5 == ((void*)0)) {
   VAR_7 = VAR_1;
   FUNC_3(*VAR_4);
   VAR_1 = VAR_7;
   if (VAR_1 == VAR_0) {
    FUNC_1(3, "process already running, pid: %d",
         VAR_6);
   }
   FUNC_0(2, "ppidfile ``%s''", VAR_3);
  }
 }
}
