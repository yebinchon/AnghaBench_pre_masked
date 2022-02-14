
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* response; int pasv_port; int pasv_ip; } ;
typedef TYPE_1__ knetFile ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (char*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_3(knetFile *VAR_0)
{
 char *VAR_1;
 int VAR_2[6];
 FUNC_0(VAR_0, "PASV\r\n", 1);
 for (VAR_1 = VAR_0->response; *VAR_1 && *VAR_1 != '('; ++VAR_1);
 if (*VAR_1 != '(') return -1;
 ++VAR_1;
 FUNC_2(VAR_1, "%d,%d,%d,%d,%d,%d", &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3], &VAR_2[4], &VAR_2[5]);
 FUNC_1(VAR_0->pasv_ip, VAR_2, 4 * sizeof(int));
 VAR_0->pasv_port = (VAR_2[4]<<8&0xff00) + VAR_2[5];
 return 0;
}
