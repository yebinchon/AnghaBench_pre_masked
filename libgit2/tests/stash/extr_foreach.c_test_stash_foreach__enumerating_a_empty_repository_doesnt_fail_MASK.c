
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** oids; int invokes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_3 ;

void FUNC_4(void)
{
 char *VAR_4[] = { ((void*)0) };

 VAR_2.oids = VAR_4;

 FUNC_1(FUNC_2(&VAR_3, VAR_0, 0));

 FUNC_1(FUNC_3(VAR_3, VAR_1, &VAR_2));

 FUNC_0(0, VAR_2.invokes);
}
