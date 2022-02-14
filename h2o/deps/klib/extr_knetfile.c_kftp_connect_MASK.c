
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctrl_fd; int port; int host; } ;
typedef TYPE_1__ knetFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(knetFile *VAR_0)
{
 VAR_0->ctrl_fd = FUNC_2(VAR_0->host, VAR_0->port);
 if (VAR_0->ctrl_fd == -1) return -1;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, "USER anonymous\r\n", 1);
 FUNC_1(VAR_0, "PASS kftp@\r\n", 1);
 FUNC_1(VAR_0, "TYPE I\r\n", 1);
 return 0;
}
