
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
typedef TYPE_1__ git_diff_driver ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 TYPE_1__* FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
 git_diff_driver **VAR_0, size_t *VAR_1, const char *VAR_2)
{
 git_diff_driver *VAR_3;
 size_t VAR_4 = sizeof(git_diff_driver),
  VAR_5 = FUNC_4(VAR_2),
  VAR_6;

 FUNC_1(&VAR_6, VAR_4, VAR_5);
 FUNC_1(&VAR_6, VAR_6, 1);

 VAR_3 = FUNC_2(1, VAR_6);
 FUNC_0(VAR_3);

 FUNC_3(VAR_3->name, VAR_2, VAR_5);

 *VAR_0 = VAR_3;

 if (VAR_1)
  *VAR_1 = VAR_5;

 return 0;
}
