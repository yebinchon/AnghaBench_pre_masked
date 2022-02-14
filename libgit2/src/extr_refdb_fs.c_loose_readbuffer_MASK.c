
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(git_buf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3;


 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)) < 0 ||
  (VAR_3 = FUNC_2(VAR_0, VAR_0->ptr)) < 0)
  FUNC_0(VAR_0);

 return VAR_3;
}
