
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int name; } ;
typedef TYPE_1__ git_reference ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__**,int ,char const*) ;
 int FUNC_9 (TYPE_1__**,TYPE_1__*,char const*,int ,int *) ;
 int FUNC_10 (int ) ;
 char const* VAR_2 ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

void FUNC_12(void)
{

 git_reference *VAR_3, *VAR_4, *VAR_5;
 git_buf VAR_6 = VAR_0;
 const char *VAR_7 = "refs/heads/brand_new_name";


 FUNC_3(FUNC_5(&VAR_6, FUNC_10(VAR_1), VAR_2));
 FUNC_0(!FUNC_6(VAR_6.ptr));


 FUNC_3(FUNC_8(&VAR_3, VAR_1, VAR_2));


 FUNC_0(FUNC_11(VAR_3) != 0);


 FUNC_3(FUNC_9(&VAR_4, VAR_3, VAR_7, 0, ((void*)0)));
 FUNC_1(VAR_4->name, VAR_7);
 FUNC_7(VAR_3);


 FUNC_2(FUNC_8(&VAR_5, VAR_1, VAR_2));


 FUNC_3(FUNC_8(&VAR_5, VAR_1, VAR_7));
 FUNC_1(VAR_5->name, VAR_7);


 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_11(VAR_4) == 0);


 FUNC_3(FUNC_5(&VAR_6, FUNC_10(VAR_1), VAR_7));
 FUNC_0(FUNC_6(VAR_6.ptr));

 FUNC_7(VAR_4);
 FUNC_7(VAR_5);
 FUNC_4(&VAR_6);
}
