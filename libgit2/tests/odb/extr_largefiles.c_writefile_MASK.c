
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_stream ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int **,int ,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(git_oid *VAR_4)
{
 static git_odb_stream *VAR_5;
 git_buf VAR_6 = VAR_0;
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < 3041; VAR_7++)
  FUNC_0(FUNC_2(&VAR_6, "Hello, world.\n"));

 FUNC_0(FUNC_3(&VAR_5, VAR_3, VAR_2, VAR_1));
 for (VAR_7 = 0; VAR_7 < 126103; VAR_7++)
  FUNC_0(FUNC_6(VAR_5, VAR_6.ptr, VAR_6.size));

 FUNC_0(FUNC_4(VAR_4, VAR_5));

 FUNC_5(VAR_5);
 FUNC_1(&VAR_6);
}
