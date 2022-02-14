
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_refspec ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (TYPE_1__*,int *,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 git_refspec VAR_4;
 git_buf VAR_5 = VAR_0;

 FUNC_1(FUNC_4(&VAR_4, VAR_1, 1));
 FUNC_1(FUNC_5(&VAR_5, &VAR_4, VAR_2));
 FUNC_0(VAR_3, VAR_5.ptr);

 FUNC_2(&VAR_5);
 FUNC_3(&VAR_4);
}
