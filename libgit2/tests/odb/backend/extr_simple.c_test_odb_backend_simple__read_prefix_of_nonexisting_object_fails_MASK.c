
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ fake_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 const fake_object VAR_4[] = {
  { "f6ea0495187600e7b2288c8ac19c5886383a4632", "foobar" },
  { ((void*)0), ((void*)0) }
 };
 char *VAR_5 = "f6ea0495187600e8";

 FUNC_4(VAR_4);

 FUNC_1(FUNC_3(&VAR_3, VAR_5, FUNC_5(VAR_5)));
 FUNC_0(VAR_0, FUNC_2(&VAR_1, VAR_2, &VAR_3));
}
