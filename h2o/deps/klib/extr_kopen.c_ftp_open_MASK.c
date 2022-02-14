
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctrl_fd; char* response; } ;
typedef TYPE_1__ ftpaux_t ;


 char* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 void* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*,char*,int*,int*,int*,int*,int*,int*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char const*,int) ;
 char const* FUNC_13 (char const*,char*) ;

__attribute__((used)) static int FUNC_14(const char *VAR_0)
{
 char *VAR_1, *VAR_2 = 0, *VAR_3 = 0, *VAR_4 = 0;
 char VAR_5[80], VAR_6[10];
 int VAR_7[6], VAR_8, VAR_9 = -1, VAR_10, VAR_11, VAR_12[4];
 ftpaux_t VAR_13;


 if (FUNC_13(VAR_0, "ftp://") != VAR_0) return 0;
 for (VAR_1 = (char*)VAR_0 + 6; *VAR_1 && *VAR_1 != '/'; ++VAR_1);
 if (*VAR_1 != '/') return 0;
 VAR_8 = VAR_1 - VAR_0 - 6;
 VAR_3 = FUNC_10("21");
 VAR_2 = FUNC_0(VAR_8 + 1, 1);
 FUNC_12(VAR_2, VAR_0 + 6, VAR_8);
 VAR_4 = FUNC_0(FUNC_11(VAR_1) + 8, 1);
 FUNC_8(VAR_4, "RETR %s\r\n", VAR_1);


 FUNC_6(&VAR_13, 0, sizeof(ftpaux_t));
 VAR_13.ctrl_fd = FUNC_7(VAR_2, VAR_3);
 if (VAR_13.ctrl_fd == -1) goto ftp_open_end;


 FUNC_3(&VAR_13);
 FUNC_4(&VAR_13, "USER anonymous\r\n", 1);
 FUNC_4(&VAR_13, "PASS kopen@\r\n", 1);
 FUNC_4(&VAR_13, "TYPE I\r\n", 1);
 FUNC_4(&VAR_13, "PASV\r\n", 1);
 for (VAR_1 = VAR_13.response; *VAR_1 && *VAR_1 != '('; ++VAR_1);
 if (*VAR_1 != '(') goto ftp_open_end;
 ++VAR_1;
 FUNC_9(VAR_1, "%d,%d,%d,%d,%d,%d", &VAR_7[0], &VAR_7[1], &VAR_7[2], &VAR_7[3], &VAR_7[4], &VAR_7[5]);
 FUNC_5(VAR_12, VAR_7, 4 * sizeof(int));
 VAR_11 = (VAR_7[4]<<8&0xff00) + VAR_7[5];
 FUNC_4(&VAR_13, VAR_4, 0);
 FUNC_8(VAR_5, "%d.%d.%d.%d", VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3]);
 FUNC_8(VAR_6, "%d", VAR_11);
 VAR_9 = FUNC_7(VAR_5, VAR_6);
 if (VAR_9 == -1) goto ftp_open_end;
 VAR_10 = FUNC_3(&VAR_13);
 if (VAR_10 != 150) {
  FUNC_1(VAR_9);
  VAR_9 = -1;
 }
 FUNC_1(VAR_13.ctrl_fd);

ftp_open_end:
 FUNC_2(VAR_2); FUNC_2(VAR_3); FUNC_2(VAR_4); FUNC_2(VAR_13.response);
 return VAR_9;
}
