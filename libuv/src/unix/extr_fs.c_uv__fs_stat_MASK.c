
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stat_t ;
struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct stat*) ;
 int FUNC_1 (int,char const*,int ,int ,int *) ;
 int FUNC_2 (struct stat*,int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, uv_stat_t *VAR_2) {
  struct stat VAR_3;
  int VAR_4;

  VAR_4 = FUNC_1(-1, VAR_1, 0, 0, VAR_2);
  if (VAR_4 != VAR_0)
    return VAR_4;

  VAR_4 = FUNC_0(VAR_1, &VAR_3);
  if (VAR_4 == 0)
    FUNC_2(&VAR_3, VAR_2);

  return VAR_4;
}
