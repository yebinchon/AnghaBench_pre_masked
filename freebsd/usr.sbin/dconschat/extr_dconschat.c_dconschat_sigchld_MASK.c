
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kevent {int dummy; } ;
struct dcons_port {int infd; int outfd; } ;
struct TYPE_2__ {int zero; int kq; int traw; struct dcons_port* port; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int ,int ,int ,int ,int,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct kevent*,int,int *,int ,int *) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_8)
{
 struct kevent VAR_9;
 struct dcons_port *VAR_10;
 char VAR_11[256];

 VAR_10 = &VAR_6.port[VAR_0];

 FUNC_2(VAR_11, 256, "\r\n[child exit]\r\n");
 FUNC_5(VAR_10->outfd, VAR_11, FUNC_3(VAR_11));

 if (VAR_7)
  FUNC_4(VAR_4, VAR_5, &VAR_6.traw);

 FUNC_0(&VAR_9, VAR_10->infd, VAR_1, VAR_2, VAR_3, 1, (void *)VAR_10);
 FUNC_1(VAR_6.kq, &VAR_9, 1, ((void*)0), 0, &VAR_6.zero);
}
