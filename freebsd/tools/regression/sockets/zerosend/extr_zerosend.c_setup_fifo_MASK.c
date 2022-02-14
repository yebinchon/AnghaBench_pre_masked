
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*,...) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, int *VAR_4)
{
 char VAR_5[] = "0send_fifo.XXXXXXX";
 int VAR_6, VAR_7;

 if (FUNC_2(VAR_5) == -1)
  FUNC_0(1, "%s: setup_fifo: mktemp", VAR_3);
 FUNC_4(VAR_5);

 if (FUNC_1(VAR_5, 0600) < 0)
  FUNC_0(1, "%s: setup_fifo: mkfifo(%s)", VAR_3, VAR_5);

 VAR_6 = FUNC_3(VAR_5, VAR_1 | VAR_0);
 if (VAR_6 < 0)
  FUNC_0(1, "%s: setup_fifo: open(%s, O_RDONLY)", VAR_3, VAR_5);

 VAR_7 = FUNC_3(VAR_5, VAR_2 | VAR_0);
 if (VAR_7 < 0)
  FUNC_0(1, "%s: setup_fifo: open(%s, O_WRONLY)", VAR_3, VAR_5);

 VAR_4[0] = VAR_7;
 VAR_4[1] = VAR_6;
}
