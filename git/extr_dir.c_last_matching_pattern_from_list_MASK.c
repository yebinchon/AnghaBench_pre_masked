
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {int nr; struct path_pattern** patterns; } ;
struct path_pattern {char* pattern; int nowildcardlen; int flags; int baselen; char* base; int patternlen; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct index_state*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,int,char const*,int,int ,int) ;
 scalar_t__ FUNC_3 (char const*,int,char*,int,char const*,int,int ,int) ;

__attribute__((used)) static struct path_pattern *FUNC_4(const char *VAR_4,
             int VAR_5,
             const char *VAR_6,
             int *VAR_7,
             struct pattern_list *VAR_8,
             struct index_state *VAR_9)
{
 struct path_pattern *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_8->nr)
  return ((void*)0);

 for (VAR_11 = VAR_8->nr - 1; 0 <= VAR_11; VAR_11--) {
  struct path_pattern *VAR_12 = VAR_8->patterns[VAR_11];
  const char *VAR_13 = VAR_12->pattern;
  int VAR_14 = VAR_12->nowildcardlen;

  if (VAR_12->flags & VAR_2) {
   if (*VAR_7 == VAR_1)
    *VAR_7 = FUNC_1(((void*)0), VAR_9, VAR_4, VAR_5);
   if (*VAR_7 != VAR_0)
    continue;
  }

  if (VAR_12->flags & VAR_3) {
   if (FUNC_2(VAR_6,
        VAR_5 - (VAR_6 - VAR_4),
        VAR_13, VAR_14, VAR_12->patternlen,
        VAR_12->flags)) {
    VAR_10 = VAR_12;
    break;
   }
   continue;
  }

  FUNC_0(VAR_12->baselen == 0 ||
         VAR_12->base[VAR_12->baselen - 1] == '/');
  if (FUNC_3(VAR_4, VAR_5,
       VAR_12->base,
       VAR_12->baselen ? VAR_12->baselen - 1 : 0,
       VAR_13, VAR_14, VAR_12->patternlen,
       VAR_12->flags)) {
   VAR_10 = VAR_12;
   break;
  }
 }
 return VAR_10;
}
