
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int pid_t ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(pid_t VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 ssize_t VAR_8;
 char VAR_9;

 VAR_7 = FUNC_0(VAR_5, ((void*)0), ((void*)0));
 if (VAR_7 < 0) {
  VAR_6 = VAR_3;
  (void)FUNC_4(VAR_4, VAR_2);
  VAR_3 = VAR_6;
  FUNC_2(-1, "tcp_server: accept");
 }






 VAR_9 = 'A';
 VAR_8 = FUNC_5(VAR_7, &VAR_9, sizeof(VAR_9), VAR_1);
 if (VAR_8 < 0) {
  VAR_6 = VAR_3;
  (void)FUNC_4(VAR_4, VAR_2);
  VAR_3 = VAR_6;
  FUNC_2(-1, "tcp_server: send (1)");
 }
 if (VAR_8 != sizeof(VAR_9)) {
  (void)FUNC_4(VAR_4, VAR_2);
  FUNC_3(-1, "tcp_server: send (1) len");
 }

 FUNC_6 (10);

 VAR_9 = 'A';
 VAR_8 = FUNC_5(VAR_7, &VAR_9, sizeof(VAR_9), VAR_1);
 if (VAR_8 >= 0) {
  (void)FUNC_4(VAR_4, VAR_2);
  FUNC_3(-1, "tcp_server: send (2): success");
 } else if (VAR_3 != VAR_0) {
  VAR_6 = VAR_3;
  (void)FUNC_4(VAR_4, VAR_2);
  VAR_3 = VAR_6;
  FUNC_2(-1, "tcp_server: send (2)");
 }

 FUNC_1(VAR_7);
 FUNC_1(VAR_5);
}
