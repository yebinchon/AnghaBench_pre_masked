
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_pattern {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_struct {struct path_pattern* pattern; } ;


 struct path_pattern* FUNC_0 (struct dir_struct*,struct index_state*,char const*,int,char const*,int*) ;
 int FUNC_1 (struct dir_struct*,struct index_state*,char const*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;

struct path_pattern *FUNC_4(struct dir_struct *VAR_0,
          struct index_state *VAR_1,
          const char *VAR_2,
          int *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2);
 const char *VAR_5 = FUNC_3(VAR_2, '/');
 VAR_5 = (VAR_5) ? VAR_5+1 : VAR_2;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5-VAR_2);

 if (VAR_0->pattern)
  return VAR_0->pattern;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4,
   VAR_5, VAR_3);
}
