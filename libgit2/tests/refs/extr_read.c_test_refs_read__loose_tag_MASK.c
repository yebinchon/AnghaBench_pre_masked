
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_tag ;
struct TYPE_11__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_object ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__**,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

void FUNC_14(void)
{

 git_reference *VAR_7;
 git_object *VAR_8;
 git_buf VAR_9 = VAR_0;

 FUNC_2(FUNC_9(&VAR_7, VAR_5, VAR_6));
 FUNC_0(FUNC_11(VAR_7) & VAR_3);
 FUNC_0(FUNC_13(VAR_7) == 0);
 FUNC_1(VAR_7->name, VAR_6);

 FUNC_2(FUNC_6(&VAR_8, VAR_5, FUNC_10(VAR_7), VAR_1));
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(FUNC_7(VAR_8) == VAR_2);


 FUNC_2(FUNC_4(&VAR_9, VAR_4, FUNC_12((git_tag *)VAR_8)));
 FUNC_1(VAR_9.ptr, VAR_6);
 FUNC_3(&VAR_9);

 FUNC_5(VAR_8);

 FUNC_8(VAR_7);
}
