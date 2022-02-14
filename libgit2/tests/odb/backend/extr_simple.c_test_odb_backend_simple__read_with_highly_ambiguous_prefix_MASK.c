
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; int content; int oid; } ;
typedef TYPE_1__ fake_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__ const*) ;

void FUNC_7(void)
{
 const fake_object VAR_5[] = {
  { "1234567890111111111111111111111111111111", "first content" },
  { "1234567890111111111111111111111111111112", "second content" },
  { ((void*)0), ((void*)0) }
 };

 FUNC_6(VAR_5);

 FUNC_2(FUNC_5(&VAR_4, VAR_5[0].oid));
 FUNC_2(FUNC_3(VAR_1, 0));
 FUNC_1(VAR_0, FUNC_4(&VAR_2, VAR_3, &VAR_4, 39));
 FUNC_2(FUNC_4(&VAR_2, VAR_3, &VAR_4, 40));
 FUNC_0(VAR_2, VAR_5[0].content);
}
