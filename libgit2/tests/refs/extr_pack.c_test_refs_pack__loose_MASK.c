
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
typedef TYPE_1__ git_reference ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(void)
{

 git_reference *VAR_4;
 git_buf VAR_5 = VAR_0;


 FUNC_2(FUNC_7(&VAR_4, VAR_2, VAR_3));
 FUNC_0(FUNC_10(VAR_4) == 0);
 FUNC_1(VAR_4->name, VAR_3);
 FUNC_6(VAR_4);






 FUNC_9();


 FUNC_2(FUNC_4(&VAR_5, FUNC_8(VAR_2), VAR_1));
 FUNC_0(FUNC_5(VAR_5.ptr));


 FUNC_2(FUNC_7(&VAR_4, VAR_2, VAR_3));
 FUNC_0(FUNC_10(VAR_4));
 FUNC_1(VAR_4->name, VAR_3);


 FUNC_2(FUNC_4(&VAR_5, FUNC_8(VAR_2), VAR_3));
 FUNC_0(!FUNC_5(VAR_5.ptr));

 FUNC_6(VAR_4);
 FUNC_3(&VAR_5);
}
