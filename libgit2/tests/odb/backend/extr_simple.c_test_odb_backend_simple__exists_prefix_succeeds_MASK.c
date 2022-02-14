
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_3__ {char* member_0; char* member_1; int oid; } ;
typedef TYPE_1__ fake_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__ const*) ;

void FUNC_6(void)
{
 const fake_object VAR_2[] = {
  { "1234567890111111111111111111111111111111", "first content" },
  { "1234567890222222222222222222222222222222", "second content" },
  { ((void*)0), ((void*)0) }
 };
 git_oid VAR_3;

 FUNC_5(VAR_2);

 FUNC_1(FUNC_4(&VAR_1, VAR_2[0].oid));
 FUNC_1(FUNC_2(&VAR_3, VAR_0, &VAR_1, 12));
 FUNC_0(FUNC_3(&VAR_3, &VAR_1));
}
