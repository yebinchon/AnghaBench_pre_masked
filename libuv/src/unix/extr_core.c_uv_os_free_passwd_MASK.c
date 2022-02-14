
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * homedir; int * shell; int * username; } ;
typedef TYPE_1__ uv_passwd_t ;


 int FUNC_0 (int *) ;

void FUNC_1(uv_passwd_t* VAR_0) {
  if (VAR_0 == ((void*)0))
    return;






  FUNC_0(VAR_0->username);
  VAR_0->username = ((void*)0);
  VAR_0->shell = ((void*)0);
  VAR_0->homedir = ((void*)0);
}
