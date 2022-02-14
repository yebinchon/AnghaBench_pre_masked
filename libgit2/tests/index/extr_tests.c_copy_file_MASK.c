
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ git_file ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,int,int) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 git_file VAR_4;

 FUNC_0(FUNC_3(&VAR_3, VAR_1));

 VAR_4 = FUNC_2(VAR_2, 0777, 0666);
 if (VAR_4 < 0)
  goto cleanup;

 FUNC_0(FUNC_5(VAR_4, VAR_3.ptr, VAR_3.size));

cleanup:
 FUNC_1(&VAR_3);
 FUNC_4(VAR_4);
}
