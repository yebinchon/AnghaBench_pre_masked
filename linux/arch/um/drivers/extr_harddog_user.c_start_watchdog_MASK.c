
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dog_data {int stdin_fd; int stdout_fd; int* close_me; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ,struct dog_data*,char**) ;
 int FUNC_7 (char*,char*,int) ;

int FUNC_8(int *VAR_3, int *VAR_4, char *VAR_5)
{
 struct dog_data VAR_6;
 int VAR_7[2], VAR_8[2], VAR_9, VAR_10, VAR_11;
 char VAR_12[sizeof("nnnnnnn\0")], VAR_13;
 char *VAR_14[] = { "/usr/bin/uml_watchdog", "-pid", VAR_12, ((void*)0) };
 char *VAR_15[] = { "/usr/bin/uml_watchdog", "-mconsole", ((void*)0),
      ((void*)0) };
 char **VAR_16 = ((void*)0);

 VAR_11 = FUNC_3(VAR_7, 1, 0);
 if (VAR_11 < 0) {
  FUNC_4("harddog_open - os_pipe failed, err = %d\n", -VAR_11);
  goto out;
 }

 VAR_11 = FUNC_3(VAR_8, 1, 0);
 if (VAR_11 < 0) {
  FUNC_4("harddog_open - os_pipe failed, err = %d\n", -VAR_11);
  goto out_close_in;
 }

 VAR_6.stdin_fd = VAR_8[0];
 VAR_6.stdout_fd = VAR_7[1];
 VAR_6.close_me[0] = VAR_8[1];
 VAR_6.close_me[1] = VAR_7[0];

 if (VAR_5 != ((void*)0)) {
  VAR_15[2] = VAR_5;
  VAR_16 = VAR_15;
 }
 else {

  FUNC_7(VAR_12, "%d", FUNC_2());
  VAR_16 = VAR_14;
 }

 VAR_9 = FUNC_6(VAR_2, &VAR_6, VAR_16);

 FUNC_0(VAR_8[0]);
 FUNC_0(VAR_7[1]);

 if (VAR_9 < 0) {
  VAR_11 = -VAR_9;
  FUNC_4("harddog_open - run_helper failed, errno = %d\n", -VAR_11);
  goto out_close_out;
 }

 VAR_10 = FUNC_5(VAR_7[0], &VAR_13, sizeof(VAR_13));
 if (VAR_10 == 0) {
  FUNC_4("harddog_open - EOF on watchdog pipe\n");
  FUNC_1(VAR_9);
  VAR_11 = -VAR_0;
  goto out_close_out;
 }
 else if (VAR_10 < 0) {
  FUNC_4("harddog_open - read of watchdog pipe failed, "
         "err = %d\n", VAR_1);
  FUNC_1(VAR_9);
  VAR_11 = VAR_10;
  goto out_close_out;
 }
 *VAR_3 = VAR_7[0];
 *VAR_4 = VAR_8[1];
 return 0;

 out_close_in:
 FUNC_0(VAR_7[0]);
 FUNC_0(VAR_7[1]);
 out_close_out:
 FUNC_0(VAR_8[0]);
 FUNC_0(VAR_8[1]);
 out:
 return VAR_11;
}
