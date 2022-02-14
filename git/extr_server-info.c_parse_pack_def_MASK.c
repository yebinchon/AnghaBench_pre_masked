
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_info {int old_num; } ;


 struct pack_info* FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1)
{
 struct pack_info *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  VAR_2->old_num = VAR_1;
  return 0;
 }
 else {

  return 1;
 }
}
