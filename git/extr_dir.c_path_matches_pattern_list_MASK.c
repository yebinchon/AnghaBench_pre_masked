
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {int dummy; } ;
struct path_pattern {int flags; } ;
struct index_state {int dummy; } ;
typedef enum pattern_match_result { ____Placeholder_pattern_match_result } pattern_match_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct path_pattern* FUNC_0 (char const*,int,char const*,int*,struct pattern_list*,struct index_state*) ;

enum pattern_match_result FUNC_1(
    const char *VAR_4, int VAR_5,
    const char *VAR_6, int *VAR_7,
    struct pattern_list *VAR_8,
    struct index_state *VAR_9)
{
 struct path_pattern *VAR_10;
 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8, VAR_9);
 if (VAR_10) {
  if (VAR_10->flags & VAR_2)
   return VAR_1;
  else
   return VAR_0;
 }

 return VAR_3;
}
