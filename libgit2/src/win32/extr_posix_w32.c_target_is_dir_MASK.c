
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_win32_path ;
struct TYPE_6__ {char const* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;

__attribute__((used)) static bool FUNC_6(const char *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_1;
 git_win32_path VAR_5;
 bool VAR_6 = 1;

 if (FUNC_4(VAR_2))
  FUNC_5(VAR_5, VAR_2);
 else if (FUNC_3(&VAR_4, VAR_3) < 0 ||
   FUNC_2(&VAR_4, VAR_2) < 0 ||
   FUNC_5(VAR_5, VAR_4.ptr) < 0)
  goto out;

 VAR_6 = FUNC_0(VAR_5) & VAR_0;

out:
 FUNC_1(&VAR_4);
 return VAR_6;
}
