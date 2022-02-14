
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char const*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(git_repository *VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0, VAR_5 = VAR_0;


 FUNC_1(FUNC_4(&VAR_4, FUNC_9(VAR_1), VAR_3));
 FUNC_1(FUNC_6(&VAR_4, VAR_4.ptr, ((void*)0)));
 FUNC_1(FUNC_5(&VAR_5, FUNC_9(VAR_2)));
 FUNC_1(FUNC_6(&VAR_5, VAR_5.ptr, ((void*)0)));
 FUNC_0(VAR_4.ptr, VAR_5.ptr);

 FUNC_2(&VAR_4);
 FUNC_2(&VAR_5);


 FUNC_1(FUNC_4(&VAR_4, FUNC_7(VAR_1), "modules"));
 FUNC_1(FUNC_4(&VAR_4, VAR_4.ptr, VAR_3));
 FUNC_1(FUNC_6(&VAR_4, VAR_4.ptr, ((void*)0)));
 FUNC_1(FUNC_5(&VAR_5, FUNC_7(VAR_2)));
 FUNC_1(FUNC_6(&VAR_5, VAR_5.ptr, ((void*)0)));
 FUNC_0(VAR_4.ptr, VAR_5.ptr);


 FUNC_1(FUNC_5(&VAR_5, FUNC_8(VAR_2)));
 FUNC_1(FUNC_6(&VAR_5, VAR_5.ptr, ((void*)0)));
 FUNC_0(VAR_4.ptr, VAR_5.ptr);

 FUNC_3(&VAR_4);
 FUNC_3(&VAR_5);
}
