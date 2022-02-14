
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int checkout_data ;


 scalar_t__ FUNC_0 (TYPE_1__**,int *,char const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(checkout_data *VAR_0, const char *VAR_1)
{
 git_buf *VAR_2;

 if (FUNC_0(&VAR_2, VAR_0, VAR_1) < 0)
  return 0;

 return FUNC_1(VAR_2->ptr);
}
