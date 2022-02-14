
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern {char* pattern; int nowildcardlen; int flags; int patternlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,char const*,int,int ,int) ;
 int FUNC_1 (char const*,int,char const*,int,char const*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, int VAR_3,
   int VAR_4,
   const struct pattern *VAR_5,
   const char *VAR_6, int VAR_7)
{
 const char *VAR_8 = VAR_5->pattern;
 int VAR_9 = VAR_5->nowildcardlen;
 int VAR_10 = (VAR_3 && VAR_2[VAR_3 - 1] == '/');

 if ((VAR_5->flags & VAR_0) && !VAR_10)
  return 0;

 if (VAR_5->flags & VAR_1) {
  return FUNC_0(VAR_2 + VAR_4,
          VAR_3 - VAR_4 - VAR_10,
          VAR_8, VAR_9,
          VAR_5->patternlen, VAR_5->flags);
 }
 return FUNC_1(VAR_2, VAR_3 - VAR_10,
         VAR_6, VAR_7,
         VAR_8, VAR_9, VAR_5->patternlen, VAR_5->flags);
}
