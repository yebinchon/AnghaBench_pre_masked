
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct checkout {int base_dir_len; scalar_t__ refresh_cache; } ;


 int FUNC_0 (int,struct stat*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_0, const struct checkout *VAR_1, struct stat *VAR_2)
{

 if (FUNC_1() &&
     VAR_1->refresh_cache && !VAR_1->base_dir_len) {
  FUNC_0(VAR_0, VAR_2);
  return 1;
 }
 return 0;
}
