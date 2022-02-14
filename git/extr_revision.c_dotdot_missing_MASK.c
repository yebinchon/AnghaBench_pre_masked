
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {scalar_t__ ignore_missing; } ;


 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, char *VAR_1,
     struct rev_info *VAR_2, int VAR_3)
{
 if (VAR_2->ignore_missing)
  return 0;

 *VAR_1 = '.';
 FUNC_0(VAR_3
     ? "Invalid symmetric difference expression %s"
     : "Invalid revision range %s", VAR_0);
}
