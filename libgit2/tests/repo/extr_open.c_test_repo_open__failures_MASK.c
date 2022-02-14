
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int * ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int **,char*) ;
 int FUNC_7 (int **,char*,int,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;

void FUNC_10(void)
{
 git_repository *VAR_3, *VAR_4;
 git_buf VAR_5 = VAR_0;

 VAR_3 = FUNC_2("attr");
 FUNC_1(FUNC_5(&VAR_5, FUNC_8(VAR_3)));


 FUNC_0(FUNC_6(&VAR_4, "attr/sub"));
 FUNC_0(FUNC_7(
  &VAR_4, "attr/sub", VAR_2, ((void*)0)));


 FUNC_0(FUNC_7(&VAR_4, "attr/sub", 0, VAR_5.ptr));
 FUNC_1(FUNC_4(&VAR_5, VAR_5.ptr, "sub"));
 FUNC_0(FUNC_7(&VAR_4, "attr/sub/sub", 0, VAR_5.ptr));


 FUNC_1(FUNC_9("alternate", 0777));
 FUNC_1(FUNC_9("alternate/.git", 0777));
 FUNC_0(FUNC_7(&VAR_4, "alternate", 0, ((void*)0)));
 FUNC_0(FUNC_7(&VAR_4, "alternate/.git", 0, ((void*)0)));


 FUNC_0(FUNC_7(
  &VAR_4, "attr",
  VAR_2 | VAR_1,
  ((void*)0)));

 FUNC_3(&VAR_5);
}
