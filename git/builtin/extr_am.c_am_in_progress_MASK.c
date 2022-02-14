
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct am_state {int dir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct am_state const*,char*) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_4(const struct am_state *VAR_0)
{
 struct stat VAR_1;

 if (FUNC_3(VAR_0->dir, &VAR_1) < 0 || !FUNC_0(VAR_1.st_mode))
  return 0;
 if (FUNC_3(FUNC_2(VAR_0, "last"), &VAR_1) || !FUNC_1(VAR_1.st_mode))
  return 0;
 if (FUNC_3(FUNC_2(VAR_0, "next"), &VAR_1) || !FUNC_1(VAR_1.st_mode))
  return 0;
 return 1;
}
