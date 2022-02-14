
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int ptr; int size; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(void)
{
 git_oid VAR_2;
 git_object *VAR_3;
 git_buf VAR_4 = {0};

 FUNC_7(&VAR_2, "ce013625030ba8dba906f756967f9e9ca394464a");
 FUNC_2(FUNC_5(&VAR_3, VAR_1, &VAR_2, VAR_0));
 FUNC_2(FUNC_6(&VAR_4, VAR_3));
 FUNC_0(7, VAR_4.size);
 FUNC_1("ce01362", VAR_4.ptr);
 FUNC_4(VAR_3);

 FUNC_7(&VAR_2, "038d718da6a1ebbc6a7780a96ed75a70cc2ad6e2");
 FUNC_2(FUNC_5(&VAR_3, VAR_1, &VAR_2, VAR_0));
 FUNC_2(FUNC_6(&VAR_4, VAR_3));
 FUNC_0(7, VAR_4.size);
 FUNC_1("038d718", VAR_4.ptr);
 FUNC_4(VAR_3);

 FUNC_7(&VAR_2, "dea509d097ce692e167dfc6a48a7a280cc5e877e");
 FUNC_2(FUNC_5(&VAR_3, VAR_1, &VAR_2, VAR_0));
 FUNC_2(FUNC_6(&VAR_4, VAR_3));
 FUNC_0(9, VAR_4.size);
 FUNC_1("dea509d09", VAR_4.ptr);
 FUNC_4(VAR_3);

 FUNC_7(&VAR_2, "dea509d0b3cb8ee0650f6ca210bc83f4678851ba");
 FUNC_2(FUNC_5(&VAR_3, VAR_1, &VAR_2, VAR_0));
 FUNC_2(FUNC_6(&VAR_4, VAR_3));
 FUNC_0(9, VAR_4.size);
 FUNC_1("dea509d0b", VAR_4.ptr);
 FUNC_4(VAR_3);

 FUNC_3(&VAR_4);
}
