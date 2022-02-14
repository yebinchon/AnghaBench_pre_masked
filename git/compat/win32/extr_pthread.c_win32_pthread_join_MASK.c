
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* arg; int handle; } ;
typedef TYPE_1__ pthread_t ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(pthread_t *VAR_2, void **VAR_3)
{
 DWORD VAR_4 = FUNC_1(VAR_2->handle, VAR_1);
 switch (VAR_4) {
  case 128:
   if (VAR_3)
    *VAR_3 = VAR_2->arg;
   return 0;
  case 129:
   return VAR_0;
  default:
   return FUNC_2(FUNC_0());
 }
}
