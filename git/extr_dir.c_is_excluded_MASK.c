
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_pattern {int flags; } ;
struct index_state {int dummy; } ;
struct dir_struct {int dummy; } ;


 int VAR_0 ;
 struct path_pattern* FUNC_0 (struct dir_struct*,struct index_state*,char const*,int*) ;

int FUNC_1(struct dir_struct *VAR_1, struct index_state *VAR_2,
  const char *VAR_3, int *VAR_4)
{
 struct path_pattern *VAR_5 =
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5->flags & VAR_0 ? 0 : 1;
 return 0;
}
