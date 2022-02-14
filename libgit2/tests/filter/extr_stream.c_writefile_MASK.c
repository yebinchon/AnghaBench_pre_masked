
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(const char *VAR_4, size_t VAR_5)
{
 git_buf VAR_6 = VAR_1;
 char VAR_7[VAR_0];
 size_t VAR_8 = 0, VAR_9 = 0;
 int VAR_10;

 FUNC_1(FUNC_3(&VAR_6, "empty_standard_repo", VAR_4));

 VAR_10 = FUNC_5(VAR_6.ptr, VAR_3|VAR_2, 0666);
 FUNC_0(VAR_10 >= 0);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_7[VAR_9] = VAR_8 % 256;
  }

  FUNC_1(FUNC_6(VAR_10, VAR_7, VAR_0));
 }
 FUNC_4(VAR_10);

 FUNC_2(&VAR_6);
}
