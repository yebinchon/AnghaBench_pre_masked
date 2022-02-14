
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; int oid; } ;
typedef TYPE_1__ fake_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__ const*) ;

void FUNC_5(void)
{
 const fake_object VAR_4[] = {
  { "1234567890123456789012345678901234567890", "nonmatching content" },
  { ((void*)0), ((void*)0) }
 };

 FUNC_4(VAR_4);

 FUNC_1(FUNC_3(&VAR_3, VAR_4[0].oid));
 FUNC_0(VAR_0, FUNC_2(&VAR_1, VAR_2, &VAR_3));
}
