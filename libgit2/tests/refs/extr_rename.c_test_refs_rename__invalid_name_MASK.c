
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
typedef TYPE_1__ git_reference ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,int ) ;
 int FUNC_5 (TYPE_1__**,TYPE_1__*,char*,int ,int *) ;
 int VAR_2 ;

void FUNC_6(void)
{

 git_reference *VAR_3, *VAR_4;


 FUNC_2(FUNC_4(&VAR_3, VAR_1, VAR_2));


 FUNC_0(
  VAR_0,
  FUNC_5(&VAR_4, VAR_3, "Hello! I'm a very invalid name.", 0, ((void*)0)));




 FUNC_0(VAR_0, FUNC_5(&VAR_4, VAR_3, "i-will-sudo-you", 0, ((void*)0)));


 FUNC_3(VAR_3);
 FUNC_2(FUNC_4(&VAR_3, VAR_1, VAR_2));
 FUNC_1(VAR_3->name, VAR_2);

 FUNC_3(VAR_3);
}
