
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int ,char*,int ,int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_oid VAR_5, VAR_6;
 git_buf VAR_7 = VAR_0;


 FUNC_2(FUNC_5(&VAR_5, "status/current_file", VAR_2));
 FUNC_2(FUNC_6(&VAR_6, VAR_4, "current_file", VAR_2, ((void*)0)));
 FUNC_0(&VAR_5, &VAR_6);

 FUNC_2(FUNC_4(&VAR_7, FUNC_7(VAR_4), "current_file"));


 FUNC_2(FUNC_5(&VAR_5, VAR_7.ptr, VAR_2));
 FUNC_2(FUNC_6(&VAR_6, VAR_4, VAR_7.ptr, VAR_2, ((void*)0)));
 FUNC_0(&VAR_5, &VAR_6);


 FUNC_1(FUNC_5(&VAR_5, VAR_7.ptr, VAR_1));
 FUNC_1(FUNC_6(&VAR_6, VAR_4, VAR_7.ptr, VAR_3, ((void*)0)));

 FUNC_3(&VAR_7);
}
