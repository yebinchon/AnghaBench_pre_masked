
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_2 (char const**,int *,int ) ;

__attribute__((used)) static int FUNC_3(const char **VAR_0, git_config *VAR_1, git_buf *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2);

 if ((VAR_5 = FUNC_1(VAR_2, "submodule.%s.%s", VAR_3, VAR_4)) < 0 ||
     (VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2->ptr)) < 0)
  return VAR_5;

 return VAR_5;
}
