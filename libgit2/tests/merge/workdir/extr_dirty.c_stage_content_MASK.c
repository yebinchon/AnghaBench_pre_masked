
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_object ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int ,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(char *VAR_6[])
{
 git_reference *VAR_7;
 git_object *VAR_8;
 git_buf VAR_9 = VAR_0;
 char *VAR_10, *VAR_11;
 size_t VAR_12;

 FUNC_1(FUNC_9(&VAR_7, VAR_4));
 FUNC_1(FUNC_8(&VAR_8, VAR_7, VAR_1));
 FUNC_1(FUNC_10(VAR_4, VAR_8, VAR_2, ((void*)0)));

 for (VAR_12 = 0, VAR_10 = VAR_6[VAR_12], VAR_11 = VAR_6[++VAR_12];
  VAR_10 && VAR_11;
  VAR_10 = VAR_6[++VAR_12], VAR_11 = VAR_6[++VAR_12]) {

  FUNC_2(&VAR_9);

  FUNC_1(FUNC_4(&VAR_9, "%s/%s", VAR_3, VAR_10));

  FUNC_0(VAR_9.ptr, VAR_11);
  FUNC_1(FUNC_5(VAR_5, VAR_10));
 }

 FUNC_6(VAR_8);
 FUNC_7(VAR_7);
 FUNC_3(&VAR_9);
}
