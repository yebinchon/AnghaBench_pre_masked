
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {scalar_t__ nr; struct path_pattern** patterns; int alloc; } ;
struct path_pattern {char const* pattern; int patternlen; int nowildcardlen; char const* base; int baselen; unsigned int flags; int srcpos; struct pattern_list* pl; } ;


 int FUNC_0 (struct path_pattern**,scalar_t__,int ) ;
 int FUNC_1 (struct path_pattern*,struct path_pattern*,char const*,int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (char const**,int*,unsigned int*,int*) ;
 struct path_pattern* FUNC_3 (int) ;

void FUNC_4(const char *VAR_1, const char *VAR_2,
   int VAR_3, struct pattern_list *VAR_4, int VAR_5)
{
 struct path_pattern *VAR_6;
 int VAR_7;
 unsigned VAR_8;
 int VAR_9;

 FUNC_2(&VAR_1, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_8 & VAR_0) {
  FUNC_1(VAR_6, VAR_6, VAR_1, VAR_7);
 } else {
  VAR_6 = FUNC_3(sizeof(*VAR_6));
  VAR_6->pattern = VAR_1;
 }
 VAR_6->patternlen = VAR_7;
 VAR_6->nowildcardlen = VAR_9;
 VAR_6->base = VAR_2;
 VAR_6->baselen = VAR_3;
 VAR_6->flags = VAR_8;
 VAR_6->srcpos = VAR_5;
 FUNC_0(VAR_4->patterns, VAR_4->nr + 1, VAR_4->alloc);
 VAR_4->patterns[VAR_4->nr++] = VAR_6;
 VAR_6->pl = VAR_4;
}
