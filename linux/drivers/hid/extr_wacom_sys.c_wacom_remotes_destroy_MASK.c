
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_remote {int remote_fifo; int remote_dir; } ;
struct wacom {struct wacom_remote* remote; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct wacom *VAR_1 = VAR_0;
 struct wacom_remote *VAR_2 = VAR_1->remote;

 if (!VAR_2)
  return;

 FUNC_1(VAR_2->remote_dir);
 FUNC_0(&VAR_2->remote_fifo);
 VAR_1->remote = ((void*)0);
}
