
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int ,int ,char const*) ;
 int FUNC_8 (char const*,int) ;

void FUNC_9(const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 git_buf VAR_6 = VAR_0;
 git_config *VAR_7;

 FUNC_0(FUNC_7(VAR_2,
  VAR_1, VAR_3));
 FUNC_1(FUNC_8(VAR_3, 0777));
 FUNC_0(FUNC_3(&VAR_6, VAR_3, ".gitconfig"));
 FUNC_0(FUNC_5(&VAR_7, VAR_6.ptr));
 FUNC_0(FUNC_6(VAR_7, VAR_4, VAR_5));
 FUNC_4(VAR_7);
 FUNC_2(&VAR_6);
}
