
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,char const*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;

 FUNC_2(&VAR_4, "%s/%s", FUNC_3(VAR_1),
  VAR_2);
 FUNC_0(VAR_4.ptr, VAR_3);

 FUNC_1(&VAR_4);
}
