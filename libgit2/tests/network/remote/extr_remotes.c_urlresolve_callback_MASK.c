
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (void*,char*) ;

__attribute__((used)) static int FUNC_3(git_buf *VAR_3, const char *VAR_4, int VAR_5, void *VAR_6)
{
 FUNC_0(FUNC_2(VAR_4, "git://github.com/libgit2/libgit2") == 0);
 FUNC_0(FUNC_2(VAR_6, "payload") == 0);
 FUNC_0(VAR_3->size == 0);

 if (VAR_5 == VAR_1)
  FUNC_1(VAR_3, "pushresolve");
 if (VAR_5 == VAR_0)
  FUNC_1(VAR_3, "fetchresolve");

 return VAR_2;
}
