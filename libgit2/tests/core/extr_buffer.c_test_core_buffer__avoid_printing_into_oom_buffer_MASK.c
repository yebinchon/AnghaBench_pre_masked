
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int asize; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;

void FUNC_2(void)
{
 git_buf VAR_2 = VAR_0;


 VAR_2.asize = 8;
 VAR_2.ptr = VAR_1;
 FUNC_0(FUNC_1(&VAR_2, "foobar"));
}
