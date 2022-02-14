
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,TYPE_1__*,char*,char*,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

void FUNC_2(void)
{
 git_buf VAR_4 = VAR_2;

 VAR_4.ptr = VAR_0;
 VAR_4.size = VAR_1;

 FUNC_1(FUNC_0(
  &VAR_4, "binary.bin",
  &VAR_4, "binary.bin",
  "", &VAR_3));
}
