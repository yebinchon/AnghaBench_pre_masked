
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ss_sp; int ss_size; int ss_flags; } ;
typedef TYPE_1__ stack_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(void *VAR_1, int VAR_2)
{
 stack_t VAR_3 = {
  .ss_flags = 0,
  .ss_sp = VAR_1,
  .ss_size = VAR_2 - sizeof(void *)
 };

 if (FUNC_1(&VAR_3, ((void*)0)) != 0)
  FUNC_0("enabling signal stack failed, errno = %d\n", VAR_0);
}
