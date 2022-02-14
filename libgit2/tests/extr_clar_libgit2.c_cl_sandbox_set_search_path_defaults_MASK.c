
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(void)
{
 git_buf VAR_6 = VAR_0;

 FUNC_3(&VAR_6, FUNC_1(), "__config");

 if (!FUNC_5(VAR_6.ptr))
  FUNC_0(FUNC_6(VAR_6.ptr, 0777));

 FUNC_4(
  VAR_5, VAR_1, VAR_6.ptr);
 FUNC_4(
  VAR_5, VAR_4, VAR_6.ptr);
 FUNC_4(
  VAR_5, VAR_3, VAR_6.ptr);
 FUNC_4(
  VAR_5, VAR_2, VAR_6.ptr);

 FUNC_2(&VAR_6);
}
