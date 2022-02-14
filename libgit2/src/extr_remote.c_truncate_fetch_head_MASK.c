
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 int VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_4, VAR_3, VAR_1)) < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4.ptr, VAR_2);
 FUNC_0(&VAR_4);

 return VAR_5;
}
