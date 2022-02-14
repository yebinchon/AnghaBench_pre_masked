
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(pid_t VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_3, ((void*)0), ((void*)0));
 if (VAR_5 < 0) {
  VAR_4 = VAR_1;
  (void)FUNC_3(VAR_2, VAR_0);
  VAR_1 = VAR_4;
  FUNC_2(-1, "tcp_server: accept");
 }
 FUNC_1(VAR_5);
 FUNC_1(VAR_3);
}
