
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int names; } ;
typedef TYPE_1__ walk_data ;
typedef int git_path_diriter ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const**,size_t*,int *) ;
 int FUNC_4 (char const**,size_t*,int *) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static void FUNC_6(git_path_diriter *VAR_0, walk_data *VAR_1)
{
 const char *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 FUNC_2(FUNC_4(&VAR_2, &VAR_4, VAR_0));
 FUNC_2(FUNC_3(&VAR_3, &VAR_5, VAR_0));

 FUNC_1(VAR_2, "sub/", 4);
 FUNC_0(VAR_2+4, VAR_3);

 FUNC_5(VAR_1->names, VAR_2);
}
