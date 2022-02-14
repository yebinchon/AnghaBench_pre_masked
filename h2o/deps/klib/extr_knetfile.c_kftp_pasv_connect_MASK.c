
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pasv_port; int* pasv_ip; int fd; } ;
typedef TYPE_1__ knetFile ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(knetFile *VAR_1)
{
 char VAR_2[80], VAR_3[10];
 if (VAR_1->pasv_port == 0) {
  FUNC_0(VAR_0, "[kftp_pasv_connect] kftp_pasv_prep() is not called before hand.\n");
  return -1;
 }
 FUNC_2(VAR_2, "%d.%d.%d.%d", VAR_1->pasv_ip[0], VAR_1->pasv_ip[1], VAR_1->pasv_ip[2], VAR_1->pasv_ip[3]);
 FUNC_2(VAR_3, "%d", VAR_1->pasv_port);
 VAR_1->fd = FUNC_1(VAR_2, VAR_3);
 if (VAR_1->fd == -1) return -1;
 return 0;
}
