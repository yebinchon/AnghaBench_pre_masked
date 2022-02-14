
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,TYPE_1__*,char*,int *,int *) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

void FUNC_2(void)
{
 git_buf VAR_6 = VAR_4, VAR_7 = VAR_4;

 VAR_6.ptr = VAR_2;
 VAR_6.size = VAR_3;

 VAR_7.ptr = VAR_0;
 VAR_7.size = VAR_1;

 FUNC_1(FUNC_0(
  &VAR_6, "binary.bin",
  &VAR_7, "binary.bin",
  ((void*)0), &VAR_5));
}
